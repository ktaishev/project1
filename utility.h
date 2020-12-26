#ifndef PROJECT1_UTILITY_H_
#define PROJECT1_UTILITY_H_

#include <iostream>

void print_menu(void)
{
	std::cout << "1. Добавить трубу" << std::endl
		<< "2. Удалить трубу" << std::endl
		<< "3. Изменинть состояние работоспособности" << std::endl
		<< "4. Напечатать трубу" << std::endl
		<< "5. Напечатать все трубы" << std::endl
		<< "6. Добавить КС" << std::endl
		<< "7. Удалить КС" << std::endl
		<< "8. Напечатать КС" << std::endl
		<< "9. Напечатать все КС" << std::endl
		<< "10. Открыть цех" << std::endl
		<< "11. Закрыть цех" << std::endl
		<< "12. Меню" << std::endl
		<< "0. Выход" << std::endl;
}

template<typename T>
T get_num(T min, T max)
{
	int n;
	while ((std::cin >> n).fail() | n < min | n > max)
	{
		std::cin.ignore(32767, '\n');
		std::cin.clear();
		std::cout << "Неккоректный ввод. Повторите попытку. Введите число в диапазоне " << min << "-" << max << std::endl;
		std::cout << "Ваш выбор: ";
	}
	return n;
}

#endif