#include"HeaderMain.h"
int main()
{ //прируововоы
	TourAgency agency;
	//std::ifstream
	std::ifstream in("Bus.txt");
	agency.readBuses(in);
	in.close();
	in.open("Rout.txt");
	agency.readRouts(in);
	/*agency.printBuses(std::cout);
	agency.printRouts(std::cout);*/
	std::string str;
	bool flag=false;
	while (!flag)
	{
		std::cout << "Enter name of rout " << std::endl;
		std::cin >> str;
		agency.addCompletedRout(str);
		std::cout << "End? " << std::endl;
		std::cin >> flag;
	}
	agency.printCompletedRouts(std::cout);
	std::cout << "Enter name of  info rout " << std::endl;
	std::cin >> str;
	agency.findinfo(str);









    return 0;
}