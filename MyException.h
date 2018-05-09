#pragma once

#ifndef BOARD_MYEXCEPTION_HPP
#define BOARD_MYEXCEPTION_HPP
#include <iostream>
#include <exception>



class IllegalCoordinateException : public std::exception {
	int i, j;

public:

	void set(int q, int w) {
		this->i = q;
		this->j = w;
	}
	
	std::string theCoordinate() const {
		return  " , ";
		//return std::to_string(x) + "," + std::to_string(y);
	}
	// 
	
};

class IllegalCharException : public std::exception {

	char p;

public:

	char theChar()const {
		return p;
	}

	void setChar(char po) {
		p = po;
	}
	
	
};


#endif //BOARD_MYEXCEPTION_HPP