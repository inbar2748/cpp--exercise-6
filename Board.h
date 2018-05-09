#pragma once

#ifndef BOARD_BOARD_HPP
#define BOARD_BOARD_HPP
#include <iostream>
#include <initializer_list>
#include <string>
#include "Cell.h"
#include "MyException.h"


class Board {

	int i, j;

	int sizeOfBoard;

	Cell **b;



public:

	Board(int n);

	~Board();

	int size_()const {
		return sizeOfBoard;
	}

	friend std::ostream&operator<<(std::ostream& os, const Board& b);

	Cell& operator[](std::initializer_list<int> list);

	void setX(int i) { this->i = i; }

	void setY(int j) { this->j = j; }

	Board&operator=(char c);

	Board&operator=(const Board&another);


};


#endif 
