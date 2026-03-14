#include <iostream>

using namespace std;

int main()
{
    cout << "=== Pointer Basics Demo ===\n\n";

    // Часть 1: Стековая переменная и указатель
    cout << "1. Stack variable and pointer:\n";
    cout << "------------------------\n";

    int a = 10;
    auto* ptr(&a);

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr (address stored): " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;
    cout << "Address of ptr itself: " << &ptr << endl;
    cout << "------------------------\n\n";

    // Часть 2: Изменение значения через указатель
    cout << "2. Changing value through pointer:\n";
    cout << "------------------------\n";

    *ptr = 20;
    cout << "After *ptr = 20:\n";
    cout << "Value of a: " << a << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;
    cout << "------------------------\n\n";

    // Часть 3: Динамическая память
    cout << "3. Dynamic memory allocation:\n";
    cout << "------------------------\n";

    int* dynamicPtr{ new int{42} };

    cout << "Dynamic variable value: " << *dynamicPtr << endl;
    cout << "Address stored in dynamicPtr: " << dynamicPtr << endl;
    cout << "Address of dynamicPtr itself: " << &dynamicPtr << endl;

    delete dynamicPtr;
    dynamicPtr = nullptr;

    cout << "------------------------\n";
    cout << "Program finished.\n";

    return 1;
}