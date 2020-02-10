#include <Arduboy2.h>
#include "variables.h"
#include "bitmaps.h"
#include "levels.h"
Arduboy2 arduboy;
Player player;

// Exit check
bool isExit(Tiles tileIndex) {
  return (tileIndex == Tiles::Exi);
}

bool isPointInTileExit(uint8_t x, uint8_t y) {
  return (isExit(maps[level][y / 8][x / 8]));
}

bool collideBallXExit() {
  return ( isPointInTileExit(player.x + player.x_velocity, player.y + player.y_velocity) || isPointInTileExit(player.x + 7 + player.x_velocity, player.y + player.y_velocity) || isPointInTileExit(player.x + player.x_velocity, player.y + 7 + player.y_velocity) || isPointInTileExit(player.x + 7 + player.x_velocity, player.y + 7 +player.y_velocity) );
}

bool collideBallYExit() {
  return ( isPointInTileExit(player.x + player.x_velocity, player.y + 8 + player.y_velocity) || isPointInTileExit(player.x + 7 + player.x_velocity, player.y + 8 + player.y_velocity) );
}

// Solids check
bool isSolid(Tiles tileIndex) {
  return (tileIndex == Tiles::Sol);
}

bool isPointInTile(uint8_t x, uint8_t y) {
  return (isSolid(maps[level][y / 8][x / 8]));
}

bool collideBallX() {
  return ( isPointInTile(player.x + player.x_velocity, player.y + player.y_velocity) || isPointInTile(player.x + 7 + player.x_velocity, player.y + player.y_velocity) || isPointInTile(player.x + player.x_velocity, player.y + 7 + player.y_velocity) || isPointInTile(player.x + 7 + player.x_velocity, player.y + 7 +player.y_velocity) );
}

bool collideBallYDown() {
  return ( isPointInTile(player.x + player.x_velocity, player.y + 8 + player.y_velocity) || isPointInTile(player.x + 7 + player.x_velocity, player.y + 8 + player.y_velocity) );
}

bool collideBallYUp() {
  return (player.y_velocity < 0 && ( isPointInTile(player.x + player.x_velocity, player.y + player.y_velocity) || isPointInTile(player.x + 7 + player.x_velocity, player.y + player.y_velocity) ) );
}

void setup() {
  // put your setup code here, to run once:
  arduboy.begin();
  arduboy.setFrameRate(60);
  Serial.begin(9600);
}

void loop() {
  // update game state
  if ( !arduboy.nextFrame() ) {
    return;
  }
  arduboy.pollButtons();

  if ( !player.initialized ) {
    player.x = initializeValues[level][0];
    player.y = initializeValues[level][1];
    player.x_velocity = 0;
    player.y_velocity = 0;
    player.initialized = true;
    return;
  }
  
  if ( arduboy.pressed(LEFT_BUTTON) ) {
    player.x_velocity = -1;
  } else {
    if ( arduboy.pressed(RIGHT_BUTTON) ) {
      player.x_velocity = 1;
    } else {
      player.x_velocity = 0;
    }
  }

  if ( collideBallX() ) {
    player.x_velocity = 0;
  }

  if ( collideBallYDown() ) {
    player.y_velocity = -1;
  } else {
    player.y_velocity += 0.1; 
  }

  if ( collideBallYUp() ) {
    player.y_velocity = 0.1;
  }

  if ( arduboy.justPressed(B_BUTTON) ) {
    player.initialized = false;
    level++;
  }

  if ( collideBallXExit() || collideBallYExit() ) {
    player.initialized = false;
    level++;
  }
  
  player.x += player.x_velocity; 
  player.y += player.y_velocity;

  gravity_timer++;
  gravity_timer %= 30;
  // draw functions
  arduboy.clear();
  for (uint8_t y = 0; y < 8; y++) {
    for (uint8_t x = 0; x < 16; x++) {
      switch (maps[level][y][x]) {
        case Tiles::Sol:
          Sprites::drawOverwrite(x * 8, y * 8, tileset, 0);
          break;
        case Tiles::Spi:
          Sprites::drawOverwrite(x * 8, y * 8, tileset, 1);
          break;
        case Tiles::Coi:
        case Tiles::Exi:
          Sprites::drawOverwrite(x * 8, y * 8, tileset, 3);
          break;
      }
    }
  }
  Sprites::drawOverwrite(player.x, player.y, ball_sprite, 0);
  arduboy.print(level + 1);
  
  arduboy.display();
}
