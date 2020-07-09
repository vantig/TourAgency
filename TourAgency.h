#pragma once
#include"HeaderMain.h"
class TourAgency
{
public:
	TourAgency() = default;
	~TourAgency() = default;
	void readBuses(std::istream&);
	void readRouts(std::istream&);
private:
	std::vector<Bus> buses;
	std::vector<Rout> routs;
	std::vector<CompletedRout>completedRouts;


};

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