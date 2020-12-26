#include "pipe.h"

void pipe::change_repair_status(void)
{
	inRepair = !inRepair;
}

void pipe::print_to_console(void)
{
	std::cout << "ID: " << id << std::endl
		<< "�����: " << length << std::endl
		<< "�������: " << diameter << std::endl
		<< ((inRepair) ? "� �������" : "��������") << std::endl;
}

void pipe::set_diameter(double d)
{
	diameter = d;
}

void pipe::set_id(int i)
{
	id = i;
}
