#pragma once

#define MAP_XML_ROOT "zoeymap"
#define MAP_XML_OBJECT "map"

typedef struct tagMapTileTexture
{
    int             id;
    std::string     name;
    ITexture*       texture;
}MapTileTexture;

typedef std::map<int, MapTileTexture>           MapTileTexturePool;
typedef std::map<int, MapTileTexture>::iterator MapTileTexturePoolIt;

typedef struct tagMapTile
{
    int             floor;      ///> �ײ�tile����id
    int             obj;        ///> ���tile����id
    DWORD           property;   ///> tile�����ԣ��ɷ�ͨ���ȣ�
}MapTile;
