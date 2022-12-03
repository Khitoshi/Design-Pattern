//#include "Product.h"
#include "AbstractFactory.h"
using namespace std;

int main()
{
    auto factory = std::make_unique<AbstractFactory<ConcreteFactory>>();

    //TODO:‚±‚±‚Íƒƒ‚ƒŠ‚Ì‹ÇŠ«‚ªˆ«‚¢‹C‚ª‚·‚é
    auto product_a = factory->Use()->create_product_a();
    product_a->do_something();

    auto product_b = factory->Use()->create_product_b();
    product_b->do_something();
    return 0;
}