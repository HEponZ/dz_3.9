#include "String.h"

int main()
{
	setlocale(LC_ALL, "rus");
	String* str_mas{ nullptr };
	int choise = 0, size = 0;
	enum MENU {
		EXIT = 0,
		SIN_STR,
		PRINT,
		COUNT_STRING
	};

	cout << "1 - Ввод новой строки\n2 - Вывод всех строк\n3 - Вывод кол-ва строк\n0 - ВЫХОД\n";

	do
	{
		cin >> choise;

		switch (choise)
		{
		case SIN_STR:
			str_mas = str_mas->sin_str(str_mas, size);
			break;
		case PRINT:
			str_mas->print(str_mas, size);
			break;
		case COUNT_STRING:
			printf("Кол-во строк: %d\n", str_mas->get_count());
			break;
		case EXIT:
			break;
		}

	} while (choise != 0);

	return 0;
}