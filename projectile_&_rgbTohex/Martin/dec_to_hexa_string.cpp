#include <iostream>

int print_hex(unsigned int i)
{
    int n;
    std::string hex_num = "";
    char hex[] = "0123456789ABCDEF";
    
    if (i == 0)
    {
        std::cout << hex[0];
        return 0;
    }
    while (i > 0)
    {
        n = i % 16;
        hex_num = hex[n] + hex_num;
        i = i / 16;
    }
    std::cout << hex_num;
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