#include "ks.h"

void ks::close_shops(void)
{
	active_shops--;
}

void ks::open_shops(void)
{
	active_shops++;
}

void ks::print_to_console(void)
{
	std::cout << "ID: " << id << std::endl
		<< "���: " << name << std::endl
		<< "����: " << shops << std::endl
		<< "��������� ����: " << active_shops << std::endl;
}

void ks::set_id(int id)
{
	this->id = id;
}