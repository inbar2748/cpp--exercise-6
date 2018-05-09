#pragma once

#ifndef BOARD_CELL_HPP
#define BOARD_CELL_HPP
#include <iostream>
#include "MyException.h"

class Cell {

	char value;

public:

	Cell() {}

	void setCell(const char &b);

	char getCell()const;

	Cell&operator=(char b);

	operator char() const;

	friend std::ostream&operator<<(std::ostream& os, Cell &c);

};


#endif