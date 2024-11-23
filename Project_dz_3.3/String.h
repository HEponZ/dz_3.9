#pragma once
#include <iostream>

using namespace std;

class String {
private:
	char* string;
	int size;
	static int count;
public:
	String() : String(80) {};
	String(int size) : String(nullptr, size) {};
	String(char* string_S, int size_S) : string{ new char[size_S] }, size{ size_S }
	{
		count++;
		if (string_S)
		{
			strcpy_s(string, size_S, string_S);
		}
	}
	String(String&& string_S) : string{ string_S.string }, size{ string_S.size } 
	{
		string_S.string = nullptr;
		string_S.size = 0;
		count++;
	}

	const char* get_string()
	{
		return string;
	}
	const int get_size()
	{
		return size;
	}
	void set_string(const char* string_S)
	{
		if (string)
		{
			delete[] string;
		}
		string = new char[strlen(string_S) + 1];
		strcpy_s(string, strlen(string_S) + 1, string_S);
	}
	void set_size(const int size_S)
	{
		size = size_S;
	}


	String* sin_str(String* str_mas, int& size);
	void print(String* str_mas, int& size);
	static int get_count()
	{
		return count;
	}

	~String()
	{
		count--;
		delete[] string;
	}
};