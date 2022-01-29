// Git.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "String.h"
using namespace std;
int main()
{
    
    String s("Hello world");
    char* str = s;
    cout << str;

    cout << (char*) s << ' ' << str;
    int size = s;
}

