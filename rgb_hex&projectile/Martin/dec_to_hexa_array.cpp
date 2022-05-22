#include <iostream>

int print_hex (unsigned int n)
{
    char hex[20];
    int i = 0;
    if (n == 0)
    {
        std::cout << '0';
        return 0;
    }
    while (n > 0)
    {
        int tmp = 0;
        tmp = n % 16;
        if (tmp < 10)
        {
            hex[i] = tmp + 48;
            i++;
        }
        else
        {
            hex[i] = tmp + 55;
            i++;
        }
        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--)
        std::cout << hex[j];
    return 0;
}

void rgb (unsigned int r, unsigned int g, unsigned int b)
{
    std::cout << "RGB = #";
    print_hex(r);
    print_hex(g);
    print_hex(b);
}

int main()
{
    while (1)
    {
        int r, g, b;
        std::cout << "Enter the RED color: ";
        std::cin >> r; 
        std::cout << "Enter the GREEN color: ";
        std::cin >> g;
        std::cout << "Enter the BLUE color: ";
        std::cin >> b;
        if ((r >= 0 && r <= 255) && (g >= 0 && g <= 255) && (b >= 0 && b <= 255))
        {
            rgb(r, g, b);
            std::cout << "\n\n";
        }
        else
            std::cout << "\nPLEASE ENTER THE NUMBER FROM 0 TO 255\n\n";
    }
    return 0;
}