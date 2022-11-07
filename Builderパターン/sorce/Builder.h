#pragma once

template <class T>
concept is_builder = requires(T& obj)
{
    obj.BuildBase();
    obj.BuildFrame();
    obj.BuildWall();
    obj.Print();
};
