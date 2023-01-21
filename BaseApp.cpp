#include "BaseApp.h"

BaseApp::~BaseApp()
{
}

std::unique_ptr<BaseApp> BaseApp::_instance = nullptr;
BaseApp* BaseApp::instance()
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

