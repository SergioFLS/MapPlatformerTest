#ifndef MAPS_H
#define MAPS_H

enum class Tiles : uint8_t {
  Air,
  Sol,
  Spi,
  Coi,
  Exi
};

const uint8_t initializeValues[3][2] = {
  {24, 40},
  {64, 0},
  {64, 32}
};

//REMINDER: Replace "Sol" to "Solid"
const Tiles maps[2][8][16] = 
{
  {
    {Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air},
    {Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air},
    {Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air},
    {Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air},
    {Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air},
    {Tiles::Air, Tiles::Sol, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Exi, Tiles::Air, Tiles::Sol, Tiles::Air},
    {Tiles::Air, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Air},
    {Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air}
  }, {
    {Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air},
    {Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air},
    {Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air},
    {Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Sol, Tiles::Sol, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air},
    {Tiles::Air, Tiles::Air, Tiles::Sol, Tiles::Air, Tiles::Air, Tiles::Sol, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air},
    {Tiles::Air, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Sol, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Sol, Tiles::Air},
    {Tiles::Air, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Sol, Tiles::Air},
    {Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air, Tiles::Air}
  }
};
#endif
