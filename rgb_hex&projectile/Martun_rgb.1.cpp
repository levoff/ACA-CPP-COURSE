#include <iostream>
using namespace std;
 
 string decToHexa(int n)                      
{
    char hexaDeciNum[2];                      
    int i = 0;                                
    while (n != 0) 
    { 
        int temp = 0;                          
        temp = n % 16;                         
        if (temp < 10) 
        {       
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else 
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        } 
        n = n / 16;
    } 
    string hexCode = "";
    if (i == 2)
    {
        hexCode.push_back(hexaDeciNum[0]);
        hexCode.push_back(hexaDeciNum[1]);
    }
    else if (i == 1) 
    {
        hexCode = "0";
        hexCode.push_back(hexaDeciNum[0]);
    }
    else if (i == 0)
        hexCode = "00";
 
     return hexCode;                     
} 
string convertRGBtoHex(int R, int G, int B)          
{
    if ((R >= 0 && R <= 255) && (G >= 0 && G <= 255) && (B >= 0 && B <= 255)) 
    {
        string hexCode = "#";
        hexCode += decToHexa(R);
        hexCode += decToHexa(G);
        hexCode += decToHexa(B);
 
        return hexCode;
    }
    else                                    
    return "Error";
}
int main()                                  
{
    int R = 0, G = 0, B = 0;
    cout << "Enter R -";
    cin >> R;
    cout << "Enter G -";
    cin >> G;
    cout << "Enter B -";
    cin >> B;
    cout << convertRGBtoHex(R, G, B) << endl;
 
    system ("pause");
    return 0;
}