#include <iostream>


using namespace std;

float benzin_92_tank = 100;
float benzin_95_tank = 120;


void buy_product(float req, short product_type)
{
    cout << req <<"  "<< product_type << "\n";

    cout << "Mnacord: " << benzin_92_tank << " litr\n";
    cout << "Mutqagreq qanak@ litrerov: ";
    cin >> req;

    if ( req <= benzin_92_tank)
    {
      benzin_92_tank = benzin_92_tank - req;
      cout << "Shnorhakalutyun, duq lcrel eq " << req << " litr\n";
    }
    else 
    {
      cout << "Cheq karox lcnel " << req << " litr. ";
    }
    cout << "========================================"<< endl;
}




int main() 
{


  float current_request = 0;
  short benzin_type = 0;


  while(benzin_92_tank > 0 || benzin_95_tank > 0) 
  {
    cout << "What type of benzin you need (95->1 / 92->2): ";
    cin >> benzin_type;
    cout << "Mutqagreq qanak@ litrerov: ";
    cin >> current_request;
    benzin_92_tank = 90;
    if (benzin_type == 1)
    {
      buy_product(current_request, benzin_type);
    }
    else if (benzin_type == 2) {
      buy_product(current_request, benzin_type);
    }
    
  }


  system("read");  // "pause" for Windows
  return 0;
}
