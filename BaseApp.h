#pragma once
#include<iostream>
#include<string>
class BaseApp
{
public:
    static BaseApp& Instance()
    {
       
            if (!_baseApp)
            {
                _baseApp = new BaseApp;
            }
            return _baseApp;
    }

private:
    BaseApp() {  }
    ~BaseApp() {  }

    static BaseApp* _baseApp;
    BaseApp(BaseApp const&) = delete;
    BaseApp& operator= (BaseApp const&) = delete;
};



