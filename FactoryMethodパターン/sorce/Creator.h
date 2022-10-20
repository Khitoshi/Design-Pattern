#pragma once
#include"Product.h"

struct Creator
{
    template <class T>
    static void use(const T& x) {
        std::cout << x.Method() << std::endl;
    };

    //クラス生成
    template <is_product T>
    static T factory(void) {
        return T();
    };
};