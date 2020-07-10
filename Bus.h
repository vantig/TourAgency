#pragma once
#include"HeaderMain.h"
class Bus
{
public:
	Bus() = default;
	~Bus() = default;
	std::string	getNumber() const{ return number; }
	std::string	getBusName()const{ return name; }
	double	getMileage()const { return mileage; }
	size_t getMaxPasangers()const { return maxPasangers; }
	void setNumber(std::string n) { number = n; }
	
	friend std::istream& operator>>(std::istream& in, Bus&);
	friend std::ostream& operator<<(std::ostream& out, const Bus&);
	const bool operator==(const Bus& bus)const;
private:
	std::string number;
	std::string name;
	double mileage;
	size_t maxPasangers;
};
 std::ostream& operator<<(std::ostream& out, const Bus&bus)
{
	 out << bus.getNumber() << " " << bus.getBusName() << " " << bus.getMaxPasangers();
	 return out;
}

 std::istream& operator>>(std::istream& in, Bus&bus)
 {
	 in >> bus.number >> bus.name >> bus.mileage>>bus.maxPasangers;
	 return in;
 }
