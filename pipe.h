#pragma once

#include <iostream>

class pipe
{
	int id;
	double length;
	double diameter;
	bool inRepair = false;
public:
	pipe(int param1, double param2, double param3) {
		id = param1;
		length = param2;
		diameter = param3;
	}

	void change_repair_status(void);
	void print_to_console(void);
	void set_diameter(double);
	void set_id(int);
};