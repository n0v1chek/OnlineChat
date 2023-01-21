#include "BaseApp.h"

BaseApp* BaseApp::_instance = nullptr;
BaseApp* BaseApp::Instance()
{
    if (!_instance)
    {
        _instance = new BaseApp;
    }
    return _instance;
}

BaseApp::BaseApp() 
{
}

BaseApp::~BaseApp()
{ 
}
