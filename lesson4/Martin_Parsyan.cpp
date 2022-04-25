#include <iostream>

using namespace std;

int main ()
{
    float tank_liters;
    float current_request;
    char question;
    cout << "Tank_liters = ";
    cin >> tank_liters;
    while (tank_liters - current_request >= 0)
    {
        cout << "Mnacord: " << tank_liters << " litr\n";
        cout << "Mutqagreq qanak@ litrerov: ";
        
        cin >> current_request;
        while (!(current_request > 0))
        {   
                cout << "Krkin mutqagreq qanak@ litrerov: ";
                cin >> current_request;
        }
        if (tank_liters - current_request > 0)
        {
            tank_liters -= current_request;
            cout << "Shnorhakalutyun, Duq lcrel eq " << current_request << " litr\n\n";
            current_request = 0;
            }
        else if (tank_liters - current_request == 0)
        {
            cout << "Shnorhakalutyun, Duq lcrel eq " << current_request << " litr\n\n";
            cout << "Benzin@ verjacel e\n";
            break;
        }
        else 
        {
            cout << "Aravelaguyn@ karox eq lcnel " << tank_liters << " litr benzin, cankanum eq lcnel?\n@ntrel: y / n --> ";
            cin >> question;
            if (question == 'y')
                cout << "Ayo cankanum em \nShnorhakalutyun, Duq lcrel eq " << tank_liters << " litr\n\nBenzin@ verjacel e\n";
            else
                cout << "Voch chem cankanum\n";
        }
    }

    return 0;
}
