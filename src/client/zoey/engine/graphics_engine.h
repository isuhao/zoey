#ifndef GFXENGINE_
#define GFXENGINE_

#include "include\utils\singleton.h"
#include "import\irrlicht\irrlicht.h"
#include "iengine.h"
#include <string>

typedef irr::video::ITexture TextureObject;

class GraphicsEngine
    : public Singleton<GraphicsEngine>
    , public IEngine
{
    friend class Singleton<GraphicsEngine>;
public:
    GraphicsEngine();
    virtual ~GraphicsEngine();

    virtual bool Initialize(irr::video::IVideoDriver* pDriver);

public:
    void BeginScene();
    void BeginScene(irr::video::SColor color);

    void EndScene();

    void Clear(DWORD color);

    void RenderLine(int x1, int y1,
        int x2, int y2,
        DWORD color = 0xFFFFFFFF);

    bool DrawImage(const std::string& strId, int x, int y,
        DWORD color = 0xFFFFFFFF);

    bool DrawImage(TextureObject* iTex, int x, int y,
        DWORD color = 0xFFFFFFFF);

    TextureObject* LoadTextrure(const irr::io::path& filename);

    void SetClipping( int x, int y, int w, int h);

    void SetClipping();

private:
    irr::video::IVideoDriver* m_Driver_ptr;
};

#endif