#include <iostream>


using namespace std;









int main() {

  float tank_liters = 120;
  float current_request = 0;

 

  while(tank_liters > 0) 
  {
    cout << "Mnacord: " << tank_liters << " litr\n";
    cout << "Mutqagreq qanak@ litrerov: ";
    cin >> current_request;

    if (current_request <= tank_liters)
    {
      tank_liters = tank_liters - current_request;
      cout << "Shnorhakalutyun, duq lcrel eq " << current_request << " litr\n";
    }
    else 
    {
      cout << "Cheq karox lcnel " << current_request << " litr. ";
    }
    cout << "========================================"<< endl;
  }


  system("read");  // "pause" for Windows
  return 0;
}
