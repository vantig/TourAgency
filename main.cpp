#include"HeaderMain.h"
int main()
{
	TourAgency agency;
	//std::ifstream
	std::ifstream in("Bus.txt");
	agency.readBuses(in);
	in.close;
	in.open("Rout.txt");
	agency.readRouts(in);
	agency.printBuses(std::cout);
	agency.printRouts(std::cout);












    return 0;
}