#include "clasa.hpp"


Clasa::Clasa():nr_elevi(0)
{
}
Clasa::Clasa(int nr_elevi)
{
	this->nr_elevi = nr_elevi;	
}
Clasa::Clasa(const Clasa& obj)
{
	nr_elevi = 0;
	*this = obj;
}
Clasa& Clasa::operator=(const Clasa& obj)
{
	this->nr_elevi = obj.nr_elevi;
	return *this;
}
Clasa::~Clasa()
{
	
}





