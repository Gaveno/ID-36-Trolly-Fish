#ifndef PLAYER_H
#define PLAYER_H

#include <Arduino.h>

extern Arduboy arduboy;
extern Sprites sprites;
extern SimpleButtons buttons;

byte trollyFrame = 0;

PROGMEM const unsigned char Trolly_plus_mask[] = {
// width, height
16, 16,
// frame 0
0xF0, 0xF8, 0xC0, 0xF0, 0x80, 0xE0, 0xC0, 0xE1, 0x61, 0xFF, 0x77, 0xFF, 0xFB, 0xFF, 0xFB, 0xFF, 
0x9A, 0xFF, 0x28, 0xFE, 0x08, 0xFC, 0x90, 0xF8, 0xE0, 0xF0, 0xC0, 0xE0, 0x00, 0xE0, 0xC0, 0xE0, 
0x0F, 0x1F, 0x03, 0x0F, 0x01, 0xC3, 0x43, 0xFF, 0x74, 0xFF, 0x6B, 0xFF, 0x6A, 0xFF, 0x5F, 0xFF, 
0x1F, 0x7F, 0x1B, 0x3F, 0x15, 0x3F, 0x15, 0x3F, 0x0D, 0x1F, 0x0E, 0x1F, 0x0B, 0x1F, 0x01, 0x0F, 

// frame 1
0x00, 0xE0, 0xC0, 0xE0, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xF1, 0x71, 0xFF, 0x7B, 0xFF, 0xFB, 0xFF, 
0xFA, 0xFF, 0x98, 0xFE, 0x28, 0xFC, 0x90, 0xF8, 0xE0, 0xF0, 0xC0, 0xE0, 0x00, 0xE0, 0xC0, 0xE0, 
0x00, 0x3F, 0x1F, 0x3F, 0x07, 0x1F, 0x01, 0xC7, 0x43, 0xFF, 0x74, 0xFF, 0x6B, 0xFF, 0x5A, 0xFF, 
0x5F, 0xFF, 0x1F, 0x7F, 0x1B, 0x3F, 0x15, 0x3F, 0x05, 0x1F, 0x0E, 0x1F, 0x0F, 0x1F, 0x01, 0x0F, 

// frame 2
0xF0, 0xF8, 0xC0, 0xF0, 0x80, 0xC0, 0xC0, 0xE1, 0x61, 0xF7, 0x77, 0xFF, 0xFB, 0xFF, 0xFB, 0xFF, 
0x9A, 0xFF, 0x28, 0xFE, 0x08, 0xFC, 0x90, 0xF8, 0xE0, 0xF0, 0xC0, 0xE0, 0x00, 0xE0, 0xC0, 0xE0, 
0x0F, 0x1F, 0x03, 0x0F, 0x01, 0xC3, 0x43, 0xFF, 0x74, 0xFF, 0x6B, 0xFF, 0x6A, 0xFF, 0x5F, 0xFF, 
0x1F, 0x7F, 0x1B, 0x3F, 0x15, 0x3F, 0x15, 0x3F, 0x0D, 0x1F, 0x0E, 0x1F, 0x0B, 0x1F, 0x01, 0x0F, 

// frame 3
0xF8, 0xFC, 0xE0, 0xF8, 0x80, 0xE0, 0x60, 0xF0, 0x70, 0xFF, 0xFB, 0xFF, 0xFB, 0xFF, 0x9B, 0xFF, 
0x2A, 0xFF, 0x08, 0xFE, 0x98, 0xFC, 0xF0, 0xF8, 0xE0, 0xF0, 0x00, 0xE0, 0xC0, 0xE0, 0x00, 0xC0, 
0x07, 0x0F, 0x03, 0x07, 0x01, 0x07, 0x04, 0xFF, 0x6B, 0xFF, 0x6A, 0xFF, 0x5F, 0xFF, 0x5B, 0xFF, 
0x15, 0x7F, 0x15, 0x3F, 0x15, 0x3F, 0x0D, 0x1F, 0x0E, 0x1F, 0x0B, 0x1F, 0x01, 0x0F, 0x00, 0x03, 
};

struct Player
{
  public:
    uint8_t  x;
    uint8_t y;
    byte width, height;
    byte xSpeed, ySpeed;
};

Player trollyFish = {.x = 20, .y = 32, .width = 10, .height = 8, .xSpeed = 1, .ySpeed = 2};

void drawTrollyFish()
{
  byte faster = 1;
  if (buttons.pressed(LEFT_BUTTON) || buttons.pressed(RIGHT_BUTTON)) faster = 2;
  
  if (arduboy.everyXFrames(6 / faster)) trollyFrame++;

  if (trollyFrame > 3) trollyFrame = 0;
  sprites.drawPlusMask(trollyFish.x - 4, trollyFish.y - 4, Trolly_plus_mask, trollyFrame);
}

#endif
