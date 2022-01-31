// Git.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "String.h"
using namespace std;
int main()
{
    
    String s("Hello world");
    /*char* str = s;
    cout << str;*/

    cout << /*(char*) */s << ' ' << (int) s << '\n';
    /*int size = s;*/

    String t = move(s);
    cout << t << '\n';
    cout << "'" << s <<"'\n";
    String z("123 apples");
    z = move(t); // String -> String&&
    cout << z << '\n';
    cout << "'" << t << "'\n";
}

