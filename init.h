#pragma once
#ifndef INIT_H
#define INIT_H

#include <iostream>
#include <string>
#include <functional>

class init {
public:
    int pkg;
    bool checkStringState;
    bool checkIntState;
    bool checkBoolState;

    init(int p = 0);

    // PKG SECTION 0 | _ECPPIN: 1
    template <typename T>
    init& write(T text) {
        std::cout << text;
        return *this;
    }

    void endline();

    std::string listen(bool showDefault, std::string text);

    // PKG SECTION 1 | _ECPPIN: 10
    int sum(int a, int b);

    int sust(int a, int b);

    int mul(int a, int b);

    int div(int a, int b);

    int modl(int a, int b);

    // PKG SECTION 2 | _ECPPIN: 11
    init& checkString(std::string arg1, std::string arg2);

    init& checkInt(int arg1, int arg2);

    init& checkBool(bool arg1, bool arg2);

    void then(std::function<void()> callbackFunc);
};

#endif // INIT_H
