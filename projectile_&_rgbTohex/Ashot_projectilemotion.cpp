#include <iostream>
#include <cmath>

// using namespace std;

int main()
{
	double PI = 3.14159;// Number pi with precision of 5 digits 


	float V_0;
	float angle;
	std::cout<<"Mutqagreq skzbnakan aragutyuny (m/v)\n";
	std::cin>>V_0;
	std::cout<<"Mutqagreq trichqi ankyuny \n";
	std::cin>>angle;
	float h =  (V_0 * sin(angle*(3.14159/180)))*(V_0 * sin(angle*(3.14159/180)))/ (2*9.8);
	float t = sqrt(2*h/9.8);
	float S = sin(2*(angle*(3.14159/180))) * (V_0*V_0) / 9.8;

	if (V_0 > 0 && angle > 0 && angle < 180)
	{
		std::cout<<"Maximal bardzrutyuny "<<h<<" metr e\n";
		std::cout<<"Trichqy tevel e "<<t<<" vayrkyan\n";
		std::cout<<"Ancel e "<<S<<" metr chanaparh\n";
	}
	else
	{
		std::cout<<"sxal parametrer";
	}

	system("pause");
	return 0;
}