#pragma once

#include <vector>
#include <string>

#include <SDL2/SDL.h>

#include "Tile.hpp"
#include "Collider.hpp"

class Map
{
private:
    std::vector<Tile> m_tiles;
    std::vector<Collider> m_colliders;
public:
    Map(const std::string& file, SDL_Renderer*& renderer);
    void loadMapFromFile(const std::string& file, SDL_Renderer*& renderer);
    void render(SDL_Renderer*& renderer) const ;
    const std::vector<Collider>& getColliders() const { return m_colliders; };
};
