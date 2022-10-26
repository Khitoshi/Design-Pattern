#include <iostream>

#include "ConcretePrototype.h"

using namespace std;

void Client(PrototypeFactory& prototype_factory) {
    std::cout << "Let's create a Prototype 1\n";

    Prototype* prototype = prototype_factory.CreatePrototype(Type::PROTOTYPE_1);
    prototype->Method(90);
    delete prototype;

    std::cout << "\n";

    std::cout << "Let's create a Prototype 2 \n";

    prototype = prototype_factory.CreatePrototype(Type::PROTOTYPE_2);
    prototype->Method(10);

    delete prototype;
}


int main()
{
    PrototypeFactory* factory = new PrototypeFactory();
    Client(*factory);
    delete factory;
    return 0;
}

/*
    PrototypeFactory ����
    ConcretePrototype1&ConcretePrototype2��PrototypeFactory�̃R���X�g���N�g�Ő���
    Clone��prototype�ɐ�قǐ�����ConcretePrototype�̃N���[����n��
    prototype��Method��field�̐��l�ύX&output
    prototype ���
    PrototypeFactory ���
*/