
#include "Cell.h"

void Cell::setCell(const char &b) {
	if (b == 'X' || b == 'O' || b == '.') {
		this->value = b;
	}
	this->value = b;
}



Cell &Cell::operator=(char b) {
	if (b == 'X' || b == 'O' || b == '.') {
		this->value = b;
		return (*this);
	}
	else {
		IllegalCharException ex;
		ex.setChar(b);
		throw ex;
	}
}



char Cell::getCell() const {
	return this->value;
}



Cell::operator char() const {
	return this->getCell();
}



std::ostream &operator<<(std::ostream& os, Cell &c) {
	os << c.getCell();
	return os;
}