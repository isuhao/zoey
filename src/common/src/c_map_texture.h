#pragma once
#include "struct/s_map.h"
#include "import\tinyxml-2.6.2\tinyxml.h"
#include "include\utils\singleton.h"

class CMapTileTexture
    : public Singleton<CMapTileTexture>
{
    friend Singleton<CMapTileTexture>;
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

    bool _Parse(TiXmlDocument& doc);

private:
    MapTileTexturePool      m_poolTile;
};
