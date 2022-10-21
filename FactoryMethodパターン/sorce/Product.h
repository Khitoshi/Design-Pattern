#pragma once

#include<concepts>
#include <string_view>

using namespace std;

//������ݒ肷��
template <class T>
concept is_product = default_initializable<T> &&
requires(T x) {
    {x.Method()}->convertible_to<string_view>;
};