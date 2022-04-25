#include <iostream>
using namespace std;


int main(){
	float tank_liters=120;
	float current_request=0;

	while(tank_liters- current_request >=0){

		cout << "Mnacord: " <<tank_liters <<" litr.\n";
		cout << "Mutqagreq qanaky litrerov: ";
		cin  >> current_request;
		if(tank_liters>= current_request){
			tank_liters= tank_liters- current_request;
			cout <<"Snorhakalutyun duq lcrel eq " << current_request << " litr. ";
			current_request=0;

		if( tank_liters <= 0){
			cout<< "Benzin el chka.";
			break;

		}

		}

	}


	getchar();
	system("pause");
	return 0;
}