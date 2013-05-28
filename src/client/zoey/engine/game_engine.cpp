#include "game_engine.h"

GameEngine* Singleton<GameEngine>::m_pInst = NULL;

using namespace irr;

GameEngine::GameEngine()
{

}

GameEngine::~GameEngine()
{
    Close();
}

bool GameEngine::Ini(int Width, int Height,video::E_DRIVER_TYPE TDriverType, bool IsFull)
{
    IEventReceiver* TEventReceiver = NULL;
    m_irrDevice = createDevice(TDriverType, irr::core::dimension2du(Width, Height),
        32, IsFull, true, false, TEventReceiver);
    if(m_irrDevice == NULL)
    {
        return false;
    }
    m_irrDevice->setWindowCaption(L"Zoey");
    m_irrDevice->setEventReceiver(TEventReceiver);
    return true;
}

bool GameEngine::IsDone()
{
    return m_IsDone;
}

void GameEngine::Update()
{
    if(!m_irrDevice->run())
    {
        m_IsDone = true;
    }
}

void GameEngine::Close()
{
    if (m_irrDevice)
    {
        m_irrDevice->drop();
        m_irrDevice = NULL;
    }
}