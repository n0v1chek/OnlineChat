#pragma once

#include <memory>
#include <iostream>

class BaseApp
{
private:
    BaseApp();

    BaseApp(BaseApp const&) = delete;
    BaseApp& operator= (BaseApp const&) = delete;

public:
    ~BaseApp();

public:
    static BaseApp* instance();

private:
    static std::unique_ptr<BaseApp> _instance;
    
};



