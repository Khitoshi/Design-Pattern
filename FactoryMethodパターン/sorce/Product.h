#pragma once

#include<concepts>
#include <string_view>

using namespace std;

//性質を設定する
template <class T>
concept is_product = default_initializable<T> &&
requires(T x) {
    {x.Method()}->convertible_to<string_view>;
};