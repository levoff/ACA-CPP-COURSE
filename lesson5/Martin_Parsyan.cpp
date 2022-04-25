#include <iostream>

using namespace std;

int buy_product(int price_of_gasoline)
{
    float tank_liters;
    float current_request;
    char question;

    cout << "Tank_liters = ";
    cin >> tank_liters;

    while (!(tank_liters > 0))
    {
        cout << "Again enter the liters of tank: ";
        cin >> tank_liters;    
    }
    
    while (tank_liters > 0)
    {
        cout << "Balance: " << tank_liters << " liter\n";
        cout << "Enter the quantity in liters: ";
        cin >> current_request;

        while (!(current_request > 0))
        {   
                cout << "Again enter the quantity in liters: ";
                cin >> current_request;
        }

        if (tank_liters - current_request > 0)
        {
            tank_liters -= current_request;
            cout << "Thanks, you filled in " << current_request << " liter\n\n";
            cout << "Total cost = " << current_request * price_of_gasoline << "$\n";
            current_request = 0;
        }

        else if (tank_liters - current_request == 0)
        {
            cout << "Thanks, you filled in " << current_request << " litr\n";
            cout << "Total cost = " << current_request * price_of_gasoline << "$\n\n";
            cout << "Gasoline run out!!!\n";
            return 0;
        }

        else 
        {
            cout << "The maximum you can fill " << tank_liters << " liter gasoline, do you want to fill?\nSelect: y / n --> ";
            cin >> question;

            if (question == 'y')
            {
                cout << "Yes I want \nThanks, you filled in " << tank_liters << " liter\n";
                cout << "Total cost = " << tank_liters * price_of_gasoline << "$\n\nGasoline run out!!!\n";
                return 0;
            }
            
            else
                cout << "No I don't want\n\n";
        }
    }
    return 0;
}


int main ()
{
    int price_of_regular = 0;
    int price_of_premium = 0;
    int price_of_super = 0;
    int question;

    cout << "What kind of gasoline do you want?\nRegular - 1, Premium - 2, Super - 3 --> ";
    cin >> question;
    if (question == 1)
    {
        cout << "Price of regular gasoline = ";
        cin >> price_of_regular;
        while (!(price_of_regular > 0))
        {
            cout << "Again enter the price of regular gasoline: ";
            cin >> price_of_regular;
        }
        buy_product (price_of_regular);
    }
    else if (question == 2)
    {
        cout << "Price of premium gasoline = ";
        cin >> price_of_premium;
        while (!(price_of_premium > 0))
        {
            cout << "Again enter the price of premium gasoline: ";
            cin >> price_of_premium;
        }
        buy_product (price_of_premium);
    }
    else
    {
        cout << "Price of super gasoline = ";
        cin >> price_of_super;
        while (!(price_of_super > 0))
        {
            cout << "Again enter the price of super gasoline: ";
            cin >> price_of_super;
        }
        buy_product (price_of_super);
    }
    return 0;
}
