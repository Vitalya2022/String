#pragma once
#include <cstring>
#include <string>
#include <iostream>
class String
{
	char* str = nullptr;
public:
	String() {}
	String(const char* str) {
		copy(str);
	}
	String(const String& other) : String(other.str) {

	}
	String(String&& other) { //move
		str = other.str;
		other.str = nullptr;
	}

	~String() {
		delete[] str;
	}
	String& operator=(const String& other) {//copy assignment
		if (&other != this) {
			delete[] str;
			copy(other.str);
		}
		return *this;
	}
	String& operator = (String&& other) {//move assignment
		if (&other != this) {
			delete[] str;
			str = other.str;
			other.str = nullptr;
		}
		return *this;
	}



	operator char* () {
		return str;
	}
	operator char* () const {
		return str;
	}
	operator int() {
		return strlen(str);
	}
private:
	void copy(const char* str) {
		int size = strlen(str);
		this->str = new char[size + 1];
		strcpy_s(this->str, size + 1, str);
	}
};

std::ostream& operator << (std::ostream& out, const String& str);