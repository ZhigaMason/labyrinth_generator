#ifndef TILES_H_128937891273
#define TILES_H_128937891273
#include <stdint.h>
#include <stdlib.h>

typedef enum tile_t : uint8_t {
        WALL              = 0,
        LEFT              = 1 << 0,
        RIGHT             = 1 << 1,
        UP                = 1 << 2,
        DOWN              = 1 << 3,
        EMPTY             = LEFT | UP | RIGHT | DOWN,
        LEFTUP            = LEFT | UP,
        LEFTRIGHT         = LEFT | RIGHT,
        LEFTDOWN          = LEFT | DOWN,
        RIGHTUP           = RIGHT | UP,
        RIGHTDOWN         = RIGHT | DOWN,
        DOWNUP            = DOWN | UP,
        WALLLEFT          = EMPTY - LEFT,
        WALLRIGHT         = EMPTY - RIGHT,
        WALLUP            = EMPTY - UP,
        WALLDOWN          = EMPTY - DOWN
} ETile;

extern const char WALLIO;
extern const char EMPTYIO;
ETile inverse_tile(ETile t);
void print_tiles(const ETile * tiles, size_t length);
void print_tiles_and_single_char(const ETile * tiles, size_t length, size_t pos, char c);
void print_tiles_and_two_chars(const ETile * tiles, size_t length, size_t pos1, char c1, size_t pos2, char c2);

#endif // TILES_H_128937891273
