#pragma once

#include <memory>
#include <iostream>

class BaseApp
{
public:
    static BaseApp* Instance();

    ~BaseApp();
private:
    BaseApp();

    BaseApp(BaseApp const&) = delete;
    BaseApp& operator= (BaseApp const&) = delete;

private:
    static std::unique_ptr<BaseApp> _instance;
    
};



