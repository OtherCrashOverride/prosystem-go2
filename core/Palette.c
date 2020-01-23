// ----------------------------------------------------------------------------
//   ___  ___  ___  ___       ___  ____  ___  _  _
//  /__/ /__/ /  / /__  /__/ /__    /   /_   / |/ /
// /    / \  /__/ ___/ ___/ ___/   /   /__  /    /  emulator
//
// ----------------------------------------------------------------------------
// Copyright 2005 Greg Stanton
// 
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
// ----------------------------------------------------------------------------
// Palette.h
// ----------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include "Palette.h"
#define PALETTE_SOURCE "Palette.c"

bool palette_default = true;
uint8_t palette_data[PALETTE_SIZE] = {
0x00,0x00,0x00,0x14,0x14,0x14,0x29,0x29,0x29,0x3D,0x3D,0x3D,
0x52,0x52,0x52,0x66,0x66,0x66,0x7A,0x7A,0x7A,0x8F,0x8F,0x8F,
0xA3,0xA3,0xA3,0xB8,0xB8,0xB8,0xCC,0xCC,0xCC,0xE0,0xE0,0xE0,
0xF5,0xF5,0xF5,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x18,0x11,0x00,0x2C,0x25,0x00,0x41,0x3A,0x00,0x55,0x4E,0x00,
0x6A,0x62,0x00,0x7E,0x77,0x00,0x92,0x8B,0x00,0xA7,0xA0,0x00,
0xBB,0xB4,0x0E,0xD0,0xC8,0x22,0xE4,0xDD,0x37,0xF8,0xF1,0x4B,
0xFF,0xFF,0x5F,0xFF,0xFF,0x74,0xFF,0xFF,0x88,0xFF,0xFF,0x9D,
0x3B,0x00,0x00,0x50,0x0C,0x00,0x64,0x21,0x00,0x79,0x35,0x00,
0x8D,0x49,0x00,0xA1,0x5E,0x00,0xB6,0x72,0x09,0xCA,0x87,0x1D,
0xDF,0x9B,0x31,0xF3,0xAF,0x46,0xFF,0xC4,0x5A,0xFF,0xD8,0x6F,
0xFF,0xED,0x83,0xFF,0xFF,0x97,0xFF,0xFF,0xAC,0xFF,0xFF,0xC0,
0x52,0x00,0x00,0x66,0x00,0x00,0x7B,0x09,0x00,0x8F,0x1E,0x08,
0xA4,0x32,0x1C,0xB8,0x47,0x31,0xCC,0x5B,0x45,0xE1,0x6F,0x5A,
0xF5,0x84,0x6E,0xFF,0x98,0x82,0xFF,0xAD,0x97,0xFF,0xC1,0xAB,
0xFF,0xD5,0xC0,0xFF,0xEA,0xD4,0xFF,0xFE,0xE8,0xFF,0xFF,0xFD,
0x57,0x00,0x13,0x6B,0x00,0x27,0x7F,0x00,0x3C,0x94,0x0D,0x50,
0xA8,0x22,0x65,0xBD,0x36,0x79,0xD1,0x4B,0x8D,0xE5,0x5F,0xA2,
0xFA,0x73,0xB6,0xFF,0x88,0xCB,0xFF,0x9C,0xDF,0xFF,0xB1,0xF3,
0xFF,0xC5,0xFF,0xFF,0xD9,0xFF,0xFF,0xEE,0xFF,0xFF,0xFF,0xFF,
0x48,0x00,0x57,0x5D,0x00,0x6B,0x71,0x00,0x80,0x86,0x08,0x94,
0x9A,0x1C,0xA9,0xAE,0x30,0xBD,0xC3,0x45,0xD1,0xD7,0x59,0xE6,
0xEC,0x6E,0xFA,0xFF,0x82,0xFF,0xFF,0x96,0xFF,0xFF,0xAB,0xFF,
0xFF,0xBF,0xFF,0xFF,0xD4,0xFF,0xFF,0xE8,0xFF,0xFF,0xFC,0xFF,
0x2A,0x00,0x88,0x3F,0x00,0x9C,0x53,0x00,0xB1,0x67,0x0D,0xC5,
0x7C,0x22,0xDA,0x90,0x36,0xEE,0xA5,0x4A,0xFF,0xB9,0x5F,0xFF,
0xCD,0x73,0xFF,0xE2,0x88,0xFF,0xF6,0x9C,0xFF,0xFF,0xB0,0xFF,
0xFF,0xC5,0xFF,0xFF,0xD9,0xFF,0xFF,0xEE,0xFF,0xFF,0xFF,0xFF,
0x03,0x00,0x9B,0x17,0x00,0xB0,0x2C,0x09,0xC4,0x40,0x1D,0xD9,
0x55,0x32,0xED,0x69,0x46,0xFF,0x7D,0x5B,0xFF,0x92,0x6F,0xFF,
0xA6,0x83,0xFF,0xBB,0x98,0xFF,0xCF,0xAC,0xFF,0xE3,0xC1,0xFF,
0xF8,0xD5,0xFF,0xFF,0xE9,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,
0x00,0x00,0x8D,0x00,0x0C,0xA1,0x04,0x20,0xB6,0x18,0x35,0xCA,
0x2D,0x49,0xDE,0x41,0x5D,0xF3,0x56,0x72,0xFF,0x6A,0x86,0xFF,
0x7E,0x9B,0xFF,0x93,0xAF,0xFF,0xA7,0xC3,0xFF,0xBC,0xD8,0xFF,
0xD0,0xEC,0xFF,0xE4,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0x10,0x60,0x00,0x25,0x74,0x00,0x39,0x89,0x00,0x4E,0x9D,
0x0D,0x62,0xB1,0x21,0x76,0xC6,0x36,0x8B,0xDA,0x4A,0x9F,0xEF,
0x5E,0xB4,0xFF,0x73,0xC8,0xFF,0x87,0xDC,0xFF,0x9C,0xF1,0xFF,
0xB0,0xFF,0xFF,0xC4,0xFF,0xFF,0xD9,0xFF,0xFF,0xED,0xFF,0xFF,
0x00,0x26,0x1E,0x00,0x3A,0x32,0x00,0x4F,0x46,0x00,0x63,0x5B,
0x00,0x77,0x6F,0x10,0x8C,0x84,0x25,0xA0,0x98,0x39,0xB5,0xAC,
0x4E,0xC9,0xC1,0x62,0xDD,0xD5,0x76,0xF2,0xEA,0x8B,0xFF,0xFE,
0x9F,0xFF,0xFF,0xB4,0xFF,0xFF,0xC8,0xFF,0xFF,0xDC,0xFF,0xFF,
0x00,0x33,0x00,0x00,0x47,0x00,0x00,0x5C,0x00,0x00,0x70,0x12,
0x00,0x85,0x27,0x12,0x99,0x3B,0x27,0xAD,0x50,0x3B,0xC2,0x64,
0x4F,0xD6,0x78,0x64,0xEB,0x8D,0x78,0xFF,0xA1,0x8D,0xFF,0xB6,
0xA1,0xFF,0xCA,0xB5,0xFF,0xDE,0xCA,0xFF,0xF3,0xDE,0xFF,0xFF,
0x00,0x35,0x00,0x00,0x49,0x00,0x00,0x5E,0x00,0x00,0x72,0x00,
0x12,0x87,0x00,0x26,0x9B,0x00,0x3B,0xAF,0x10,0x4F,0xC4,0x25,
0x63,0xD8,0x39,0x78,0xED,0x4E,0x8C,0xFF,0x62,0xA1,0xFF,0x76,
0xB5,0xFF,0x8B,0xC9,0xFF,0x9F,0xDE,0xFF,0xB4,0xF2,0xFF,0xC8,
0x00,0x2C,0x00,0x00,0x40,0x00,0x0B,0x54,0x00,0x1F,0x69,0x00,
0x34,0x7D,0x00,0x48,0x92,0x00,0x5D,0xA6,0x00,0x71,0xBA,0x00,
0x85,0xCF,0x11,0x9A,0xE3,0x26,0xAE,0xF8,0x3A,0xC3,0xFF,0x4E,
0xD7,0xFF,0x63,0xEB,0xFF,0x77,0xFF,0xFF,0x8C,0xFF,0xFF,0xA0,
0x0B,0x19,0x00,0x1F,0x2D,0x00,0x33,0x41,0x00,0x48,0x56,0x00,
0x5C,0x6A,0x00,0x71,0x7F,0x00,0x85,0x93,0x00,0x99,0xA7,0x00,
0xAE,0xBC,0x09,0xC2,0xD0,0x1D,0xD7,0xE5,0x32,0xEB,0xF9,0x46,
0xFF,0xFF,0x5B,0xFF,0xFF,0x6F,0xFF,0xFF,0x83,0xFF,0xFF,0x98,
0x31,0x00,0x00,0x45,0x15,0x00,0x5A,0x29,0x00,0x6E,0x3D,0x00,
0x82,0x52,0x00,0x97,0x66,0x00,0xAB,0x7B,0x00,0xC0,0x8F,0x0E,
0xD4,0xA3,0x22,0xE8,0xB8,0x37,0xFD,0xCC,0x4B,0xFF,0xE1,0x60,
0xFF,0xF5,0x74,0xFF,0xFF,0x88,0xFF,0xFF,0x9D,0xFF,0xFF,0xB1
};

// ----------------------------------------------------------------------------
// Load
// ----------------------------------------------------------------------------
void palette_Load(const uint8_t* data)
{
   int index;
   for(index = 0; index < PALETTE_SIZE; index++)
      palette_data[index] = data[index];
}