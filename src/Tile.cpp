#include "Tile.hpp"
#include "GameUtils.hpp"

Tile::Tile(float x, float y, std::string id)
:Texture{ x, y, g::tileW, g::tileH, 0, "tile_" + id + ".png" }
{
}
