#pragma once

#include <string>
#include <iostream>

class ks
{
	int id;
	std::string name;
	int shops;
	int active_shops;
public:
	ks(int param1, std::string param2, int param3, int param4) {
		id = param1;
		name = param2;
		shops = param3;
		active_shops = param4;
	}

	void close_shops(void);
	void open_shops(void);
	void print_to_console(void);
	void set_id(int);
};

