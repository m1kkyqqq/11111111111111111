// 11111111111111111.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
class Animal {
public:
    virtual void Voice() {
        std::cout << "Animal says something" << std::endl;
    }
};

class Dog : public Animal {
public:
    void Voice() override {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void Voice() override {
        std::cout << "Meow!" << std::endl;
    }
};

class Bird : public Animal {
public:
    void Voice() override {
        std::cout << "Tweet tweet!" << std::endl;
    }
};
int main()
{
    Animal* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Bird();

    for (int i = 0; i < 3; i++) {
        animals[i]->Voice();
    }

    // Освобождаем память, выделенную для объектов
    for (int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
