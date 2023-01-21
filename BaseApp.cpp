#include "BaseApp.h"

std::unique_ptr<BaseApp> BaseApp::_instance = nullptr;
BaseApp* BaseApp::Instance()
{
    if (!_instance)
    {
        _instance = static_cast<std::unique_ptr<BaseApp>>(new BaseApp);
    }
    return _instance.get();
}

BaseApp::BaseApp() 
{
}

BaseApp::~BaseApp()
{
}
