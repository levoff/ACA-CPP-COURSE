

#include <iostream>
#include <istream>


using namespace std;


float benzin_92_tank = 100;
float benzin_95_tank = 120;



void buy_product(float req, short product_type)
{
    cout << "Mnacord(95/92): " << benzin_92_tank <<" " << benzin_95_tank << " litr\n";

    if (product_type == 1) 
    {
                if (req <= benzin_92_tank) 
                {
                  benzin_92_tank = benzin_92_tank - req;
                  cout << "Shnorhakalutyun, duq lcrel eq " << req << " litr\n";
                } else 
                {
                  cout << "Cheq karox lcnel " << req << " litr. ";
                }
    } 
    else if (product_type == 2) 
    {
                if (req <= benzin_95_tank) 
                {
                  benzin_95_tank = benzin_95_tank - req;
                  cout << "Shnorhakalutyun, duq lcrel eq " << req << " litr\n";
                } else 
                {
                  cout << "Cheq karox lcnel " << req << " litr. ";
                }
    }
    else
    {
      cout << "Wrong product type\n";
    }

    cout << "========================================"<< endl;
}






int main() {

  short benzin_type = 0;
  float current_request = 0;


  while(benzin_92_tank > 0 || benzin_95_tank > 0) 
  {
    cout << "What type of benzin you need (95->1 / 92->2): ";
    cin >> benzin_type;
    cout << "Enter amount in liters: ";
    cin >> current_request;

    buy_product(current_request, benzin_type);

  }


  system("read");  // "pause" for Windows
  return 0;
}

