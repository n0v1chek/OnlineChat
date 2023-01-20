#pragma once
#include<iostream>
#include<string>
class BaseApp
{
public:
    static BaseApp& Instance()
    {
        static BaseApp s;
        return s;
    }

private:
    BaseApp() {  }
    ~BaseApp() {  }


    BaseApp(BaseApp const&) = delete;
    BaseApp& operator= (BaseApp const&) = delete;
};



