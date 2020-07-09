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
private:
		std::string DateOfStart;
	std::string DateOfFinish;
	size_t CountofPassengers;
	
};

