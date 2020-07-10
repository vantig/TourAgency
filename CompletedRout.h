#pragma once
#include"HeaderMain.h"

class CompletedRout:public Rout ,public Bus
{
public:
	CompletedRout  ()=default;
	~CompletedRout ()=default;
	std::string getDateOfStart()const  {		return DateOfStart		;}
	std::string getDateOfFinish()const { return	DateOfFinish; }
	size_t getCountofPassengers()const { return CountofPassengers; }
	void setDateOfStart(std::string d) { DateOfStart = d; }
	void setDateOfFinish(std::string d) { DateOfFinish = d; }
	void setCountofPassengers(size_t c) { CountofPassengers = c; }
	const bool operator==(const CompletedRout&rout)const;
	friend std::ostream& operator<<(std::ostream& out, CompletedRout&);

private:
		std::string DateOfStart;
	std::string DateOfFinish;
	size_t CountofPassengers;
	
};
std::ostream& operator<<(std::ostream& out, CompletedRout&temp)
{
	out << temp.getCost() << " " << temp.getName() << " " << temp.getNumber() << " " << temp.getDateOfStart() << " " << temp.getDateOfFinish() << " " << temp.getCountofPassengers();
	return out;
 }

