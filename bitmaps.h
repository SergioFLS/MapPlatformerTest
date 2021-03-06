#ifndef BITMAPS_H
#define BITMAPS_H

const unsigned char PROGMEM tileset[] =
{
// width, height,
8, 8,
// TILE 00
0xff, 0x83, 0x85, 0x83, 0x85, 0x83, 0x85, 0xff, 
// TILE 01
0xe0, 0x98, 0x86, 0x81, 0x83, 0x8c, 0xb0, 0xc0, 
// TILE 02
0x00, 0x00, 0x7e, 0xff, 0xe9, 0x7e, 0x00, 0x00, 
// TILE 03
0x00, 0xff, 0xab, 0x55, 0xab, 0x55, 0xff, 0x00, 
};

const unsigned char PROGMEM ball_sprite[] =
{
// width, height,
8, 8,
0x3c, 0x42, 0x81, 0x81, 0x85, 0x8d, 0x42, 0x3c, 
};

#endif
