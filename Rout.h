#pragma once
#include"HeaderMain.h"
class Rout
{
public:
	Rout()=default;
	~Rout() = default;
	std::string getName()const { return name; }
	std::string getStart()const{ return start; }
	std::string getFinish() const{ return finish; }
	double getKm()const { return km; }
	double getCost()const { return cost; }
	void setName(std::string n) { name = n; }
	void setCost(double c) { cost = c; }
	friend std::istream& operator>>(std::istream& in, Rout&);
	friend	std::ostream& operator<<(std::ostream& out,const Rout& rout);

private:
	std::string name;
	std::string start;
	std::string finish;
	double km;
	double cost;
};
 std::ostream& operator<<(std::ostream& out, const Rout&rout)
{
	 out<<" rout name "<< rout.name <<" rout start "<< rout.start <<" rout finish "<< rout.finish <<" rout km "<< rout.km <<" rout cost "<< rout.cost;
	 return out;
}

std::istream& operator>>(std::istream& in, Rout&rout)
{
	in >> rout.name >> rout.start >> rout.finish >> rout.km >> rout.cost;
	return in;
}
