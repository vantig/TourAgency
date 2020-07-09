#pragma once
#include"HeaderMain.h"
class Rout
{
public:
	Rout()=default;
	~Rout() = default;
	std::string getName()const { return name; }
	std::string getStart()const{ return start; }
	std::string getStart() const{ return start; }
	double getKm()const { return km; }
	double getCost()const { return cost; }
	void setName(std::string n) { name = n; }
	void setCost(double c) { cost = c; }
	friend std::istream& operator>>(std::istream& in, Rout&);
private:
	std::string name;
	std::string start;
	std::string finish;
	double km;
	double cost;
};


std::istream& operator>>(std::istream& in, Rout&rout)
{
	in >> rout.name >> rout.start >> rout.finish >> rout.km >> rout.cost;
	return in;
}
