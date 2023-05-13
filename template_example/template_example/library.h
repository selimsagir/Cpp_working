#pragma once

template <class T, class U, class V = char>
class ClassTemplate {
private:
    T var1;
    U var2;
    V var3;

public:
    ClassTemplate(T v1, U v2, V v3);
    void printVar();
};

 

