#pragma once
#include <cstring>
#include <string>
class String
{
	char* str = nullptr;
public:
	String() {}
    String(const char* str) {
		int size = strlen(str);
		this->str = new char[size + 1];
		strcpy_s(this->str, size + 1, str); 
	}

	~String() {
		delete[] str;
	}
};

