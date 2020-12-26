#ifndef PROJECT1_UTILITY_H_
#define PROJECT1_UTILITY_H_

#include <iostream>

void print_menu(void)
{
	std::cout << "1. �������� �����" << std::endl
		<< "2. ������� �����" << std::endl
		<< "3. ��������� ��������� �����������������" << std::endl
		<< "4. ���������� �����" << std::endl
		<< "5. ���������� ��� �����" << std::endl
		<< "6. �������� ��" << std::endl
		<< "7. ������� ��" << std::endl
		<< "8. ���������� ��" << std::endl
		<< "9. ���������� ��� ��" << std::endl
		<< "10. ������� ���" << std::endl
		<< "11. ������� ���" << std::endl
		<< "12. ����" << std::endl
		<< "0. �����" << std::endl;
}

template<typename T>
T get_num(T min, T max)
{
	int n;
	while ((std::cin >> n).fail() | n < min | n > max)
	{
		std::cin.ignore(32767, '\n');
		std::cin.clear();
		std::cout << "������������ ����. ��������� �������. ������� ����� � ��������� " << min << "-" << max << std::endl;
		std::cout << "��� �����: ";
	}
	return n;
}

#endif