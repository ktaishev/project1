#include <iostream>
#include <vector>

#include "pipe.h"
#include "ks.h"
#include "graph.h"
#include "utility.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int pipe_count = 0;
	int ks_count = 0;
	std::vector<pipe> pipes;
	std::vector<ks> kss;
	bool finish = false;
	print_menu();
	while (!finish)
	{
		int num = get_num(0, 12);
		if (num == 0) 
		{
			finish = true;
		}
		else if (num == 1) 
		{
			std::cout << "Введите длину: ";
			double length_tmp = get_num(0, 100000);
			std::cout << "Введите диаметр: ";
			double diameter_tmp = get_num(0, 100000);
			pipes.push_back(pipe(pipe_count, length_tmp, diameter_tmp));
			pipe_count++;
			std::cout << "Труба успешно добавлена" << std::endl;
		}
		else if (num == 2) 
		{
			std::cout << "Введите ID трубы для удаления: ";
			int index = get_num(0, pipe_count - 1);
			pipes[index] = pipes.back();
			pipes[index].set_id(index);
			pipes.pop_back();
		}
		else if (num == 3) 
		{
			std::cout << "Введите ID трубы для изменения работоспосбности: ";
			int index = get_num(0, pipe_count - 1);
			pipes[index].change_repair_status();
			std::cout << "Статус работоспособности изменен" << std::endl;
		}
		else if (num == 4) 
		{
			std::cout << "Введите ID трубы для печати: ";
			int index = get_num(0, pipe_count - 1);
			pipes[index].print_to_console();
		}
		else if (num == 5)
		{
			std::cout << "Все трубы:" << std::endl;
			for (auto it = pipes.begin(); it != pipes.end(); it++)
				(*it).print_to_console();
		}
		else if (num == 6)
		{
			std::cout << "Введите имя: ";
			std::string name_tmp;
			std::cin >> name_tmp;
			std::cout << "Введите количесвто цехов: ";
			int shops_tmp = get_num(0, 100000);
			std::cout << "Введите количесвто активных цехов: ";
			int active_shops_tmp = get_num(0, shops_tmp);
			kss.push_back(ks(ks_count, name_tmp, shops_tmp, active_shops_tmp));
			ks_count++;
			std::cout << "КС успешно добавлена" << std::endl;
		}
		else if (num == 7)
		{
			std::cout << "Введите ID КС для удаления: ";
			int index = get_num(0, ks_count - 1);
			kss[index] = kss.back();
			kss[index].set_id(index);
			kss.pop_back();
		}
		else if (num == 8)
		{
			std::cout << "Введите ID КС для печати: ";
			int index = get_num(0, ks_count - 1);
			kss[index].print_to_console();
		}
		else if (num == 9)
		{
			std::cout << "Все кс:" << std::endl;
			for (auto it = kss.begin(); it != kss.end(); it++)
				(*it).print_to_console();
		}
		else if (num == 10)
		{
			std::cout << "Введите ID КС для открытия цеха: ";
			int index = get_num(0, ks_count - 1);
			kss[index].open_shops();
			std::cout << "Цех у КС ID " << index << " открыт" << std::endl;
		}
		else if (num == 11)
		{
			std::cout << "Введите ID КС для закрытия цеха: ";
			int index = get_num(0, ks_count - 1);
			kss[index].close_shops();
			std::cout << "Цех у КС ID " << index << " закрыт" << std::endl;
		}
		else if (num == 12)
		{
			print_menu();
		}
		else
		{
			std::cout << "Ошибка исполнения" << std::endl;
		}
	}
	return 0;
}