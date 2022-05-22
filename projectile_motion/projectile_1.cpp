#include <iostream>
#include <cmath>


int main(int argc, char const *argv[])
{
	float PI = atan(1)*4; // definition of pi-3.141592....
	float g = 9.81; // gravity acceleration in m/s^2


	float V0 = 250; // m/s
	float angle = 80.6098; // degrees
	float h = 6.67188; // meters

	float Vx = V0 * cos(angle * (PI / 180));
	float Vy = V0 * sin(angle * (PI / 180));
	float T = (Vy + sqrt(Vy*Vy + 2*g*h)) / g;
	float X_max = Vx * T;
	float Y_max = h + (Vy*Vy) / (2*g);


	std::cout <<"Initial velocity:  " << V0    << "\tm/v^2" << std::endl; 
	std::cout <<"Angle of launch:   " << angle << "\tdegrees" << std::endl; 
	std::cout <<"Height difference: " << h     << "\tmeters" << std::endl; 
	std::cout <<"Time of flight:    " << T     << "\tseconds" << std::endl; 
	std::cout <<"Max height:        " << Y_max << "\tmeters"<< std::endl; 
	std::cout <<"Range:             " << X_max << "\tmeters" << std::endl; 

	return 0;
}