#include "pipe.h"

void pipe::change_repair_status(void)
{
	inRepair = !inRepair;
}

void pipe::print_to_console(void)
{
	std::cout << "ID: " << id << std::endl
		<< "Длина: " << length << std::endl
		<< "Диаметр: " << diameter << std::endl
		<< ((inRepair) ? "В ремонте" : "Работает") << std::endl;
}

void pipe::set_diameter(double d)
{
	diameter = d;
}

void pipe::set_id(int i)
{
	id = i;
}
