#include "Map.h"

Map::Map() {
    mapLayout += L"################";
    mapLayout += L"#              #";
    mapLayout += L"#              #";
    mapLayout += L"###            #";
    mapLayout += L"#              #";
    mapLayout += L"#      ##      #";
    mapLayout += L"#              #";
    mapLayout += L"#              #";
    mapLayout += L"#              #";
    mapLayout += L"#   ###        #";
    mapLayout += L"#              #";
    mapLayout += L"#              #";
    mapLayout += L"#            ###";
    mapLayout += L"#              #";
    mapLayout += L"#              #";
    mapLayout += L"################";
}

wchar_t Map::getTile(int x, int y) const {
    if (x < 0 || x >= width || y < 0 || y >= height) {
        return '#'; // Out of bounds, treat as wall
    }
    return mapLayout[y * width + x];
}
