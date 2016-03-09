#ifndef STAGE_H
#define STAGE_H

#include <Arduino.h>

#include "enemies.h"

#define MAX_ENEMIES               9
#define SPAWN_DELAY               160
#define SCORE_SMALL_FONT          0
#define SCORE_BIG_FONT            1


extern Physics physics;
extern unsigned long scorePlayer;
extern byte eelMax;
extern byte jellyMax;



#define PU_TURNFISH     0
#define PU_STOPFISH     1
#define PU_SHOOTFISH    2
#define PU_POPFISH      3
#define PU_PROTECTFISH  4
#define PU_LIFEFISH     5
#define PU_SHOCKFISH    6
#define PU_MAGNETFISH   7

#define PU_ON           1
#define PU_OFF          0

extern void setPowerup(byte index, byte state);
extern byte getPowerup(byte index);
extern void createPowerUp(byte type);

extern byte pu_shocks;
extern byte pu_bubbles;

byte seaWeetFrames;

PROGMEM const unsigned char numbersSmall_plus_mask[] = {
// width, height
6, 8,
// number 0
0x7C, 0x7C, 0xFE, 0xFE, 0xC7, 0xC7, 
0xE3, 0xE3, 0x7F, 0x7F, 0x3E, 0x3E, 
// number 1
0x00, 0x00, 0x06, 0x06, 0xC6, 0xC6, 
0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 
// number 2
0xC0, 0xC0, 0xE6, 0xE6, 0xF7, 0xF7, 
0xFB, 0xFB, 0xDF, 0xDF, 0x0E, 0x0E, 
// number 3
0x00, 0x00, 0x42, 0x42, 0xE7, 0xE7, 
0xDB, 0xDB, 0xFF, 0xFF, 0x7E, 0x7E, 
// number 4
0x60, 0x60, 0x78, 0x78, 0x7E, 0x7E, 
0xE7, 0xE7, 0xFF, 0xFF, 0x67, 0x67, 
// number 5
0x00, 0x00, 0x50, 0x50, 0xDF, 0xDF, 
0xDF, 0xDF, 0xFB, 0xFB, 0x73, 0x73, 
// number 6
0x70, 0x70, 0xF8, 0xF8, 0xCE, 0xCE, 
0xCF, 0xCF, 0xFF, 0xFF, 0x79, 0x79, 
// number 7
0x80, 0x80, 0xC3, 0xC3, 0xF3, 0xF3, 
0x7F, 0x7F, 0x1F, 0x1F, 0x07, 0x07, 
// number 8
0x70, 0x70, 0xFE, 0xFE, 0xDF, 0xDF, 
0xCB, 0xCB, 0xFF, 0xFF, 0x7E, 0x7E, 
// number 9
0x00, 0x00, 0x9E, 0x9E, 0xDF, 0xDF, 
0xF3, 0xF3, 0x3F, 0x3F, 0x1E, 0x1E, 
};


PROGMEM const unsigned char numbersBig[] = {
// width, height
17, 24,
// number 0
0xE0, 0x18, 0xE4, 0xFA, 0xFD, 0xFD, 0x7D, 0x3D, 0x3D, 0x3D, 0x7D, 0xFA, 0xF4, 0xC8, 0x30, 0xC0, 0x00, 
0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFC, 0x02, 0x01, 0x81, 0x7E, 0x81, 0xFF, 0xFF, 0x7F, 0x00, 0xFF, 
0x01, 0x06, 0x09, 0x17, 0x2F, 0x5E, 0x9E, 0x9D, 0x9D, 0x9D, 0x9E, 0x8F, 0x47, 0x23, 0x10, 0x0E, 0x01, 
// number 1
0x00, 0x00, 0xC0, 0x30, 0xC8, 0xF4, 0xFA, 0xFD, 0xFD, 0xFD, 0xFD, 0xFA, 0x04, 0x08, 0xF0, 0x00, 0x00, 
0x00, 0x00, 0x07, 0x08, 0x17, 0x23, 0xE1, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x10, 0x6F, 0x9F, 0x9F, 0x83, 0x40, 0x3C, 0x03, 0x00, 0x00, 
// number 2
0xF0, 0x08, 0xF4, 0xF4, 0xFA, 0x7A, 0x7D, 0x7D, 0x7D, 0x7D, 0xFA, 0xFA, 0xF4, 0xC8, 0x10, 0x60, 0x80, 
0x00, 0x81, 0x42, 0xA5, 0xD4, 0xD4, 0xEC, 0xEA, 0x77, 0x78, 0x3F, 0x1F, 0x0F, 0x07, 0xC0, 0x30, 0x0F, 
0x0F, 0x10, 0x2F, 0x4F, 0x5F, 0x9D, 0x9C, 0x9C, 0x9E, 0x9E, 0x9E, 0x9E, 0x8F, 0x8F, 0x40, 0x41, 0x3E, 
// number 3
0x38, 0x44, 0xBA, 0x3A, 0x3D, 0x1D, 0x9D, 0x9D, 0x3D, 0xFD, 0xFA, 0xFA, 0xF4, 0x08, 0x30, 0xC0, 0x00, 
0x80, 0x80, 0x80, 0x85, 0x0B, 0x13, 0x6A, 0x8D, 0x8E, 0x1F, 0xFF, 0xFB, 0xF1, 0xE0, 0x18, 0xE7, 0x00, 
0x07, 0x08, 0x16, 0x2E, 0x4D, 0x5D, 0x9A, 0x9A, 0x9D, 0x9E, 0x9F, 0x8F, 0x4F, 0x43, 0x20, 0x10, 0x0F, 
// number 4
0xFF, 0x01, 0xFD, 0xFD, 0xFD, 0xFA, 0x04, 0x08, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x3F, 0x40, 0xBF, 0xBF, 0x7F, 0x78, 0xF0, 0xFF, 0xFE, 0xF5, 0x7A, 0x3A, 0x3A, 0x3A, 0x1A, 0x84, 0x78, 
0x00, 0x00, 0x00, 0x00, 0x0F, 0x10, 0x2F, 0x5F, 0x9F, 0x9F, 0x80, 0x7E, 0x02, 0x02, 0x01, 0x00, 0x00, 
// number 5
0x00, 0xF8, 0x04, 0xFA, 0xFD, 0xFD, 0xFD, 0x0D, 0x8D, 0x9D, 0x9D, 0x3D, 0x3A, 0x3A, 0x24, 0x18, 0xE0, 
0x80, 0x87, 0x88, 0x97, 0x27, 0x27, 0x4F, 0x4E, 0xCD, 0x1D, 0xFA, 0xFB, 0xF5, 0xE9, 0x11, 0xE1, 0x01, 
0x07, 0x08, 0x16, 0x2E, 0x4D, 0x5D, 0x9A, 0x9A, 0x9D, 0x9E, 0x9F, 0x8F, 0x47, 0x43, 0x20, 0x10, 0x0F, 
// number 6
0x80, 0x60, 0x90, 0xE8, 0xF4, 0xF4, 0xFA, 0x7A, 0x3D, 0x1D, 0x9D, 0x9D, 0x89, 0x86, 0x44, 0x38, 0x00, 
0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x1F, 0x8C, 0xCE, 0x2E, 0xDD, 0x3D, 0xF9, 0xF2, 0xE4, 0x08, 0x30, 0xC0, 
0x07, 0x08, 0x13, 0x2F, 0x2F, 0x5F, 0x5E, 0x9D, 0x9D, 0x9E, 0x9F, 0x8F, 0xC7, 0x43, 0x20, 0x18, 0x07, 
// number 7
0xE0, 0x10, 0xD0, 0xE8, 0xE8, 0xF4, 0xF4, 0xF4, 0xFA, 0xFD, 0xFD, 0xFD, 0xFD, 0x3A, 0x04, 0x88, 0x70, 
0x00, 0x01, 0x62, 0x95, 0x6C, 0x68, 0x68, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0x40, 0x20, 0x5F, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x0F, 0x10, 0x2F, 0x5F, 0x5F, 0x9F, 0x80, 0x40, 0x3C, 0x03, 0x00, 
// number 8
0xF8, 0x04, 0xFA, 0xFA, 0xFD, 0x9D, 0x4D, 0xAD, 0x6D, 0x9D, 0xFD, 0xFA, 0xFA, 0xF4, 0x08, 0x10, 0xE0, 
0xF8, 0x05, 0xFA, 0xFD, 0xFF, 0x0F, 0xCF, 0x26, 0xEF, 0x0F, 0xFF, 0xFF, 0xFD, 0xF8, 0x00, 0x1C, 0xE3, 
0x07, 0x08, 0x17, 0x2F, 0x4F, 0x5E, 0x9D, 0x9B, 0x9D, 0x9E, 0x8F, 0x8F, 0x47, 0x41, 0x20, 0x18, 0x07, 
// number 9
0xF0, 0x08, 0xF4, 0xFA, 0xFA, 0x1D, 0x9D, 0x5D, 0x9D, 0x3D, 0xFD, 0xFA, 0xF2, 0xE4, 0x08, 0x30, 0xC0, 
0x0F, 0x10, 0x2F, 0x5F, 0xBF, 0xBC, 0x3B, 0x36, 0x3B, 0x3C, 0xFF, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 
0x00, 0x0C, 0x12, 0x2D, 0x5D, 0x9D, 0x9D, 0x9D, 0x9E, 0x8F, 0x8F, 0x47, 0x23, 0x20, 0x18, 0x06, 0x01, 
};



PROGMEM const unsigned char hudAssets_plus_mask[] = {
// width, height
8, 8,
// power up stopFish
0x1C, 0x3E, 0x22, 0x7F, 0x41, 0xFF, 0x4D, 0xFF, 
0x49, 0xFF, 0x22, 0x7F, 0x1C, 0x3E, 0x00, 0x1C, 
// power up shootFish
0x60, 0xFC, 0xBC, 0xFE, 0x92, 0xFF, 0x65, 0xFF, 
0xA1, 0xFF, 0x52, 0xFF, 0x0C, 0x5E, 0x00, 0x0C, 
// power up protectFish
0x1C, 0x3E, 0x22, 0x7F, 0x4D, 0xFF, 0x45, 0xFF, 
0x41, 0xFF, 0x22, 0x7F, 0x1C, 0x3E, 0x00, 0x1C, 
// power up extra life
0x0E, 0x1F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7E, 0xFF, 
0x3F, 0x7F, 0x1F, 0x3F, 0x0E, 0x1F, 0x00, 0x0E, 
// power up shockFish
0x0C, 0x9F, 0x8F, 0xFF, 0xEF, 0xFF, 0x7F, 0xFF, 
0x3B, 0x7F, 0x19, 0x3F, 0x08, 0x1D, 0x00, 0x08, 
// power up magnetFish
0x38, 0x7C, 0x7C, 0xFE, 0x6E, 0xFF, 0x75, 0xFF, 
0x3A, 0x7F, 0x14, 0x3E, 0x08, 0x1C, 0x00, 0x08, 
};


PROGMEM const unsigned char bonusPoints_plus_mask[] = {
// width, height
13, 8,
// +10
0x00, 0x1C, 0x08, 0x3E, 0x1C, 0x3E, 0x08, 0x3E, 0x00, 0x7E, 0x24, 0x7F, 0x3E, 
0x7F, 0x20, 0x7F, 0x00, 0x7F, 0x3E, 0x7F, 0x22, 0x7F, 0x3E, 0x7F, 0x00, 0x7F, 
// +20
0x00, 0x1C, 0x08, 0x3E, 0x1C, 0x3E, 0x08, 0x3E, 0x00, 0x7F, 0x3A, 0x7F, 0x2A, 
0x7F, 0x2E, 0x7F, 0x00, 0x7F, 0x3E, 0x7F, 0x22, 0x7F, 0x3E, 0x7F, 0x00, 0x7F, 
// +30
0x00, 0x1C, 0x08, 0x3E, 0x1C, 0x3E, 0x08, 0x3E, 0x00, 0x7F, 0x22, 0x7F, 0x2A, 
0x7F, 0x3E, 0x7F, 0x00, 0x7F, 0x3E, 0x7F, 0x22, 0x7F, 0x3E, 0x7F, 0x00, 0x7F, 
// +40
0x00, 0x1C, 0x08, 0x3E, 0x1C, 0x3E, 0x08, 0x3E, 0x00, 0x1F, 0x0E, 0x1F, 0x08, 
0x7F, 0x3E, 0x7F, 0x00, 0x7F, 0x3E, 0x7F, 0x22, 0x7F, 0x3E, 0x7F, 0x00, 0x7F, 
// +50
0x00, 0x1C, 0x08, 0x3E, 0x1C, 0x3E, 0x08, 0x3E, 0x00, 0x7F, 0x2E, 0x7F, 0x2A, 
0x7F, 0x3A, 0x7F, 0x00, 0x7F, 0x3E, 0x7F, 0x22, 0x7F, 0x3E, 0x7F, 0x00, 0x7F, 
};

PROGMEM const unsigned char seaWeetSmall[] = {
// width, height
8, 8,
// frame 0
0x00, 0xC0, 0x00, 0xE0, 0x00, 0xFC, 0x00, 0xF0, 
// frame 1
0x00, 0xC0, 0x00, 0xE0, 0x00, 0xFC, 0x00, 0xF0, 
// frame 2
0x40, 0x80, 0x60, 0x80, 0x70, 0x8C, 0x40, 0xB0, 
// frame 3
0x40, 0xA0, 0x40, 0x84, 0x78, 0x80, 0x60, 0x90, 
// frame 4
0x40, 0xA0, 0x48, 0xB0, 0x40, 0x90, 0x60, 0x80, 
// frame 5
0x40, 0x80, 0x20, 0xC0, 0x38, 0xC0, 0x30, 0xC0, 
// frame 6
0x00, 0xC0, 0x00, 0xE0, 0x00, 0xFC, 0x00, 0xF0, 
// frame 7
0x10, 0xC0, 0x00, 0xC0, 0x20, 0xF8, 0x04, 0xE0, 
};


#define LANEOFFSET 4
#define JELLYSPAWN  400
#define JELLYSPAWN2 800
#define JELLYSPAWN3 1200
#define EELSPAWN    200
#define EELSPAWN2   400
#define EELSPAWN3   1000
#define FASTSPAWN   500
#define FASTSPAWN2  1000

int spawnTimer = 20;
int8_t laneRide = 0;
int fr = 60;
byte pu_current = 0;

const byte pu_spawn_order[] = {
  PU_SHOOTFISH, PU_TURNFISH,
  PU_MAGNETFISH, PU_POPFISH,
  PU_PROTECTFISH, PU_LIFEFISH,
  PU_SHOCKFISH, PU_STOPFISH,
};


void spawnWave()
{
  if (getPowerup(PU_STOPFISH) == PU_OFF)
    spawnTimer--;

  if (spawnTimer <= 0)
  {
    spawnTimer = SPAWN_DELAY + (180 / max(scorePlayer >> 8, 1));

    // Powerup spawns
    if (random(2) == 0)
    {
      createPowerUp(pu_spawn_order[pu_current]);
      pu_current = (++pu_current) % 8;
    }

    if (scorePlayer > 1500 && fr == 60)
    {
      fr = 70;
      arduboy.setFrameRate(70);
    }
    if (scorePlayer > 3000 && fr == 70)
    {
      fr = 80;
      arduboy.setFrameRate(80);
    }

    if (scorePlayer > JELLYSPAWN2)
      jellyMax = 10;
    if (scorePlayer > EELSPAWN2)
      eelMax = 3;
    /*if (scorePlayer > 500)
      jellyMax = 3;
    if (scorePlayer > 600)
      jellyMax = 4;*/

    if (scorePlayer > FASTSPAWN)
      createEnemy(ENEMY_FAST, (random(3) * 28) + LANEOFFSET); // Fillers, tighten gap, faster moving

    if (scorePlayer > EELSPAWN)
      createEnemy(ENEMY_EEL, (random(3) * 28) + LANEOFFSET); // Three possible eel lanes, not distruptor, just limits v movement
    if (scorePlayer > EELSPAWN3)
      createEnemy(ENEMY_EEL, 28 + LANEOFFSET); // Three possible eel lanes, not distruptor, just limits v movement
    if (scorePlayer > JELLYSPAWN)
    {
      byte pos = 0;
      if (trollyFish.y < 32)
        --laneRide;
      else
      {
        ++laneRide;
        pos = 1;
      }

      if (abs(laneRide) < 2)
        pos = random(2);
      else
        laneRide = 0;
      createEnemy(ENEMY_JELLY, (pos * 63) + LANEOFFSET); // Two possible jelly lanes, disruptors
    }

    if (scorePlayer > 2000)
      createEnemy(ENEMY_FAST, (random(3) * 28) + LANEOFFSET); // Fillers, tighten gap, faster moving

    // There is always enough room between bad fish, jellyfish and eels are what forces a move
    if (scorePlayer < FASTSPAWN2)
      createEnemy(ENEMY_BAD, (random(3) * 28) + LANEOFFSET); // Fish are fillers
    else
      createEnemy(ENEMY_FAST, (random(3) * 28) + LANEOFFSET); // Fish are fillers
    if (scorePlayer > 50)
      createEnemy(ENEMY_BAD, (random(3) * 28) + LANEOFFSET); // Extra fillers
  }
}

boolean checkGameOver()
{        
  Rect player = {.x = trollyFish.x, .y = trollyFish.y, .width = trollyFish.width, .height = trollyFish.height};
  Rect enemy;
  for (byte i = 0; i < MAX_ENEMIES; i++)
  {
    enemy.x = enemyFish[i].x;
    enemy.y = enemyFish[i].y;
    enemy.width = enemyFish[i].width;
    enemy.height = enemyFish[i].height;
    if (physics.collide(enemy, player))
    {
      /*if (enemyFish[i].type == ENEMY_STAR)
      {
        scorePlayer++;
        arduboy.tunes.tone(300, 40);
        enemyFish[i].resetPos();
        return false;
      }*/

      if (getPowerup(PU_PROTECTFISH)) // protected
        return false;
      
      if (getPowerup(PU_LIFEFISH)) // extra life
      {
        arduboy.tunes.tone(280, 50);
        setPowerup(PU_LIFEFISH, PU_OFF);
        enemyFish[i].x -= 32;
        enemyFish[i].resetPos();
        return false;
      }

      if (enemyFish[i].type == ENEMY_BUBBLE || enemyFish[i].type == ENEMY_DEAD)
        return false;

      arduboy.setFrameRate(60);
      fr = 60;
      arduboy.tunes.tone(90, 300);
      delay(400);
      arduboy.tunes.tone(100, 100);
      delay(300);
      arduboy.tunes.tone(150, 100);
      delay(300);
      arduboy.tunes.tone(90, 100);
      delay(300);
      arduboy.tunes.tone(300, 200);
      delay(400);
      return true;
    }
  }
  return false;
};



void drawScore(byte scoreX, byte scoreY, byte fontType)
{
  char buf[10];
  //scorePlayer = arduboy.cpuLoad();
  ltoa(scorePlayer, buf, 10);
  char charLen = strlen(buf);
  char pad = 6 - charLen;

  //draw 0 padding
  for (byte i = 0; i < pad; i++)
  {
    switch (fontType)
    {
      case SCORE_SMALL_FONT:
        sprites.drawPlusMask(scoreX + (7 * i), scoreY, numbersSmall_plus_mask, 0);
        break;
      case SCORE_BIG_FONT:
        sprites.drawSelfMasked(scoreX + (18 * i), scoreY, numbersBig, 0);
        break;
    }
  }

  for (byte i = 0; i < charLen; i++)
  {
    char digit = buf[i];
    byte j;
    if (digit <= 48)
    {
      digit = 0;
    }
    else {
      digit -= 48;
      if (digit > 9) digit = 0;
    }

    for (byte z = 0; z < 10; z++)
    {
      if (digit == z) j = z;
    }
    switch (fontType)
    {
      case SCORE_SMALL_FONT:
        sprites.drawPlusMask(scoreX + (pad * 7) + (7 * i), scoreY, numbersSmall_plus_mask, digit);
        break;
      case SCORE_BIG_FONT:
        sprites.drawSelfMasked(scoreX + (pad * 18) + (18 * i), scoreY, numbersBig, digit);
        break;
    }
  }
}

void drawPowerUps()
{
  byte offset = 0;

  if (getPowerup(PU_STOPFISH))
  {
    sprites.drawPlusMask(1, 1, hudAssets_plus_mask, 0);
    offset += 8;
  }

  if (getPowerup(PU_SHOOTFISH) && pu_bubbles > 0)
  {
    sprites.drawPlusMask(1 + offset, 1, hudAssets_plus_mask, 1);
    offset += 8;
    if (pu_bubbles > 9)
    {
      sprites.drawPlusMask(1 + offset, 1, numbersSmall_plus_mask, pu_bubbles / 10);
      offset += 8;
      sprites.drawPlusMask(1 + offset, 1, numbersSmall_plus_mask, pu_bubbles % 10);
      offset += 8;
    }
    else
    {
      sprites.drawPlusMask(1 + offset, 1, numbersSmall_plus_mask, pu_bubbles);
      offset += 8;
    }
  }
  
  if (getPowerup(PU_PROTECTFISH))
  {
    sprites.drawPlusMask(1 + offset, 1, hudAssets_plus_mask, 2);
    offset += 8;
  }

  if (getPowerup(PU_LIFEFISH))
  {
    sprites.drawPlusMask(1 + offset, 1, hudAssets_plus_mask, 3);
    offset += 8;
  }

  if (getPowerup(PU_SHOCKFISH) && pu_shocks > 0)
  {
    sprites.drawPlusMask(1 + offset, 1, hudAssets_plus_mask, 4);
    offset += 8;
    sprites.drawPlusMask(1 + offset, 1, numbersSmall_plus_mask, pu_shocks);
    offset += 8;
  }

  if (getPowerup(PU_MAGNETFISH))
  {
    sprites.drawPlusMask(1 + offset, 1, hudAssets_plus_mask, 5);
    offset += 8;
  }
}

void drawWeed()
{
  if (arduboy.everyXFrames(10)) seaWeetFrames++;
  if (seaWeetFrames > 7 ) seaWeetFrames = 0;
  for (byte i=0;i<16;i++)
  {
    sprites.drawSelfMasked(8*i, 56, seaWeetSmall, seaWeetFrames);
  }
}

struct Bonus
{
  int8_t x, y;
  byte amount;
  bool active;
};

Bonus bonus[MAX_ENEMIES];
byte numBonus = 0;

void initBonuses()
{
  for (byte i = 0; i < MAX_ENEMIES; ++i)
  {
    bonus[i].x = 0;
    bonus[i].y = 0;
    bonus[i].amount = 0;
    bonus[i].active = false;
  }
}

void giveBonus(int8_t x, int8_t y, byte amount)
{
  scorePlayer += amount * 10;
  for (byte i = 0; i < MAX_ENEMIES; ++i)
  {
    if (bonus[i].active == false)
    {
      bonus[i].active = true;
      bonus[i].x = x;
      bonus[i].y = y;
      bonus[i].amount = amount;
      ++numBonus;

      break;
    }
  }
}

void updateBonus()
{
  if (numBonus > 0 && arduboy.everyXFrames(2))
  {
    for (byte i = 0; i < MAX_ENEMIES; ++i)
    {
      if (bonus[i].active)
      {
        --bonus[i].y;
        
        sprites.drawPlusMask(bonus[i].x, bonus[i].y, bonusPoints_plus_mask, bonus[i].amount - 1);

        if (bonus[i].y < 0)
        {
          bonus[i].active = false;
          --numBonus;
        }
      }
    }
  }
}

#endif
