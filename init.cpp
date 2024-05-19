#include "init.h"

init::init(int p) : pkg(p), checkStringState(false), checkIntState(false), checkBoolState(false) {}

// PKG SECTION 0 | _ECPPIN: 1

void init::endline() {
    std::cout << std::endl;
}

std::string init::listen(bool showDefault, std::string text) {
    std::string reply;
    std::cin >> reply;
    return reply;
}

// PKG SECTION 1 | _ECPPIN: 10
int init::sum(int a, int b) {
    if (this->pkg == 1) {
        return a + b;
    }
    return 0;
}

int init::sust(int a, int b) {
    if (this->pkg == 1) {
        return a - b;
    }
    return 0;
}

int init::mul(int a, int b) {
    if (this->pkg == 1) {
        return a * b;
    }
    return 0;
}

int init::div(int a, int b) {
    if (this->pkg == 1) {
        return a / b;
    }
    return 0;
}

int init::modl(int a, int b) {
    if (this->pkg == 1) {
        return a % b;
    }
    return 0;
}

// PKG SECTION 2 | _ECPPIN: 11
init& init::checkString(std::string arg1, std::string arg2) {
    if (this->pkg == 2) {
        if (arg1 == arg2) {
            checkStringState = true;
        }
        else {
            checkStringState = false;
        }
    }
    return *this;
}

init& init::checkInt(int arg1, int arg2) {
    if (this->pkg == 2) {
        if (arg1 == arg2) {
            checkIntState = true;
        }
        else {
            checkIntState = false;
        }
    }
    return *this;
}

init& init::checkBool(bool arg1, bool arg2) {
    if (this->pkg == 2) {
        if (arg1 == arg2) {
            checkBoolState = true;
        }
        else {
            checkBoolState = false;
        }
    }
    return *this;
}

void init::then(std::function<void()> callbackFunc) {
    if (this->pkg == 2) {
        if (checkStringState || checkIntState || checkBoolState) {
            callbackFunc();
            checkStringState = false;
            checkIntState = false;
            checkBoolState = false;
        }
    }
}
