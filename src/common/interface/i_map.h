#pragma once

class IMap
{
public:
    virtual ~IMap();

    ///> ������أ���name��id��size�ȣ�
    virtual wchar_t* GetName()                      = 0;
    virtual int GetId()                             = 0;
    virtual SIZE GetSize()                          = 0;
    
    ///> ��Ⱦ��أ���������ͼ���Ƴ�����
    virtual Render(ITexture* pTarget)               = 0;
    
    ///> ��ͼ�ڶ������
    virtual void AddObject(IObject* pObject)        = 0;
    virtual void RemoveObject(IObject* pObject)     = 0;
    
    ///> ��ͼ���¼�����
    virtual IndexedEvent* GetIndexedEvent(
        int nEventType,
        int nEventData)                             = 0;
};
