#pragma once
#include"HeaderMain.h"
class TourAgency
{
public:
	TourAgency() = default;
	~TourAgency() = default;
	void readBuses(std::istream&);
	void readRouts(std::istream&);
	void addCompletedRout(std::string name);
private:
	std::vector<Bus> buses;
	std::vector<Rout> routs;
	std::vector<CompletedRout>completedRouts;


};
void TourAgency::addCompletedRout(std::string name)
{
	auto it = std::find_if(routs.begin(), routs.end(), [name](const Rout& rout) 
	{return name == rout.getName();
	});
	if (it==routs.end())
	{
		std::cout << "Rout not found " << std::endl;
		return;
	}
	CompletedRout temp;
	temp.setCost(it->getCost());
	temp.setName(it->getName());
	int counter = 0,counter1;
	goAgain:
	std::cout << "Enter number of bus" <<std:: endl;
	std::for_each(buses.begin(), buses.end(), [&counter](Bus &bus) {std::cout <<counter++<< bus << "\n"; });//проверять воодимый индекс
	std::cin >> counter;
	temp.setNumber(buses[counter].getNumber());
	std::string str;
	std::cout << "Enter date of start" << std::endl;
	std::cin >> str;
	temp.setDateOfStart(str);
	std::cout << "Enter date of finish" << std::endl;
	std::cin >> str;
	temp.setDateOfFinish(str);
	std::cout << "Enter count of pasangers" << std::endl;
	std::cin >> counter1;
	if (counter1 > buses[counter].getMaxPasangers())
	{
		std::cout << "Choose another bus" << std::endl;
		goto goAgain;
	}
	temp.setCountofPassengers(counter1);
	completedRouts.push_back(temp);
}

void TourAgency::readBuses(std::istream&in)
{
	
	while (!in.eof())
	{
		Bus temp;
		in >> temp;
		buses.push_back(temp);

	}
}
void TourAgency::readRouts(std::istream&in)
{
	while (!in.eof())
	{
		Rout temp;
		in >> temp;
		routs.push_back(temp);

	}
}