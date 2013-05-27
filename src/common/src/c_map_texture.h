#pragma once
#include "s_map.h"

const wchar_t* pwszDefaultXml = L"res\\xml\\map_tile.xml";

class CMapTileTexture
{
public:
    CMapTileTexture();
    ~CMapTileTexture();

    ///> ��Ĭ�������ļ���������tile����
    bool Load();

    ///> ����һ��xml����ָ����tile�������Լ��ض��xml
    bool LoadXml(const wchar_t* pwszXmlFile);

    ///> ��ȡ��Ӧid��tile����
    MapTileTexture* GetTile(int nId);

private:
    void Clear();

private:
    MapTileTexturePool      m_poolTile;
};
