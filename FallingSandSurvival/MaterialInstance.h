#pragma once

#include <SDL2/SDL.h>

#ifndef INC_Materials
#include "Materials.h"
#endif // !INC_Materials


#define INC_MaterialInstance

class MaterialInstance {
    static int _curID;
public:
    Material* mat;
    Uint32 color;
    int32_t temperature;
    uint32_t id = 0;
    MaterialInstance(Material* mat, Uint32 color, int32_t temperature);
    MaterialInstance(Material* mat, Uint32 color) : MaterialInstance(mat, color, 0) {};
    MaterialInstance() : MaterialInstance(&Materials::GENERIC_AIR, 0x000000, 0) {};
    bool operator==(const MaterialInstance& other);
};
