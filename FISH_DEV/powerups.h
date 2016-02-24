#ifndef SCORE_H
#define SCORE_H

#include <Arduino.h>

extern Arduboy arduboy;

#define MAX_STARS   8
#define TOTAL_TYPES 4
#define STAR_HEIGHT 10

const byte SIN_Y[] = {
  23, 32, 41, 48,
  54, 48, 41, 32,
};

PROGMEM const unsigned char starFish_plus_mask[] = {
// width, height
7, 8,
0x0C, 0x0C, 0xD8, 0xD8, 0x78, 0x78, 0x2E, 
0x3E, 0x3B, 0x3B, 0x68, 0x68, 0x44, 0x44, 

};

void initStarFish(byte type);

byte cycles = 3;

struct GameObject
{
  public:
    uint8_t x;
    uint8_t y;
    byte width, height;
    byte xSpeed, ySpeed;
    bool active;

    void resetPos();

};

GameObject starFish[MAX_STARS]; // = {.x = 128, .y = 32, .width = 7, .height = 7, .xSpeed = -2, .ySpeed = 0};

void GameObject::resetPos()
    {
      //x = 12  * random(12, 20);
      //y = 10 * random(1, 6);
      x += 128;
      
      if (cycles > 0)
        --cycles;
      else
        active = false;

      bool done = true;
      for (byte i = 0; i < MAX_STARS; ++i)
      {
        if (starFish[i].active)
          done = false;
      }

      if (done)
      {
        initStarFish(random(TOTAL_TYPES));
      }
    }

void initStarFish(byte type)
{
  switch (type)
  {
    case 0:
    {
      // Big sin wave
      for (byte i = 0; i < MAX_STARS; ++i)
      {
        starFish[i].x = 120 + (128 / MAX_STARS * i);
        starFish[i].y = SIN_Y[i] - 12;
        starFish[i].width = 8;
        starFish[i].height = STAR_HEIGHT;
        starFish[i].xSpeed = -2;
        starFish[i].ySpeed = 0;
        starFish[i].active = true;
        cycles = 3 * MAX_STARS;
      }
    }
    break;
    case 1:
    {
      byte y = random(5, 48);
      // Small sin wave
      for (byte i = 0; i < MAX_STARS; ++i)
      {
        starFish[i].x = 120 + (128 / MAX_STARS * i);
        starFish[i].y = (SIN_Y[i] / 3) - 12 + y;
        starFish[i].width = 8;
        starFish[i].height = STAR_HEIGHT;
        starFish[i].xSpeed = -2;
        starFish[i].ySpeed = 0;
        starFish[i].active = true;
        cycles = 3 * MAX_STARS;
      }
    }
    break;
    case 2:
    {
      // Straight line
      byte y = random(10, 54);
      for (byte i = 0; i < MAX_STARS; ++i)
      {
        starFish[i].x = 120 + (128 / MAX_STARS * i);
        starFish[i].y = y;
        starFish[i].width = 8;
        starFish[i].height = STAR_HEIGHT;
        starFish[i].xSpeed = -2;
        starFish[i].ySpeed = 0;
        starFish[i].active = true;
        cycles = 1 * MAX_STARS;
      }
    }
    break;
    case 3:
    {
      // random cluster
      for (byte i = 0; i < MAX_STARS; ++i)
      {
        starFish[i].x = 120 + random(24);
        starFish[i].y = random(20, 44);
        starFish[i].width = 8;
        starFish[i].height = STAR_HEIGHT;
        starFish[i].xSpeed = -2;
        starFish[i].ySpeed = 0;
        starFish[i].active = true;
        cycles = 0 * MAX_STARS;
      }
    }
    break;
  }
}

void updateStarFish()
{
  for (byte i = 0; i < MAX_STARS; ++i)
  {
    if (starFish[i].active)
    {
      starFish[i].x += starFish[i].xSpeed;
      if (starFish[i].x < GAME_LEFT) starFish[i].resetPos();
      sprites.drawPlusMask(starFish[i].x, starFish[i].y - 1, starFish_plus_mask, 0);
    }
  }
}

void checkIfScored() {
  Rect playerRect = {.x = trollyFish.x, .y = trollyFish.y, .width = trollyFish.width, .height = trollyFish.height};

  for (byte i = 0; i < MAX_STARS; ++i)
  {
    Rect starFishPoint = {.x = starFish[i].x, .y = starFish[i].y, .width = starFish[i].width, starFish[i].height};
  
    if (physics.collide(starFishPoint, playerRect)) {
      arduboy.tunes.tone(300, 40);
      scorePlayer++;
      starFish[i].resetPos();
    }
  }
}

#endif
