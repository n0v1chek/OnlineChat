#pragma once

class BaseApp
{
public:
    static BaseApp* Instance();

private:
    BaseApp();
    ~BaseApp();

    BaseApp(BaseApp const&) = delete;
    BaseApp& operator= (BaseApp const&) = delete;

private:
    static BaseApp* _instance;

};



