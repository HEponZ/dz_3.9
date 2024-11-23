#include "String.h"

void String::print(String* str_mas, int& size)
{
	for (int i{ 0 }; i < size; i++)
	{
		printf("%s\n", str_mas[i].string);
	}
}

String* String::sin_str(String* str_mas, int& size)
{
	String* new_str_mas = new String[++size];
	char buffer[100]{ "\0" };

	cin.ignore();
	cout << "¬ведите новую строку: ";
	gets_s(buffer);
	strcpy_s(new_str_mas[size - 1].string, strlen(buffer) + 1, buffer);

	for (int i = 0; i < size - 1; i++)
	{
		strcpy_s(new_str_mas[i].string, strlen(str_mas[i].string) + 1, str_mas[i].string);
	}

	delete[] str_mas;

	return new_str_mas;
}

int String::count{ 0 };