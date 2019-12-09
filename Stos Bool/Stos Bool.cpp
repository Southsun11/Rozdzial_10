#include <iostream>
#include "stack.h"
#include <cctype>

int main()
{
    Stack st;
    char ch;
    unsigned long po;
    std::cout << "Nacisnij D aby wprowadzic deklaracje.\n"
        << "P, aby przetworzyc deklaracje, lub K, aby zakonczyc\n";
    while (std::cin >> ch && toupper(ch) != 'K')
    {
        while (std::cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            std::cout << '\a';
            continue;
        }
        switch(ch)
        {
        case 'D':
        case 'd':
            std::cout << "podaj numer nowe deklaracji: ";
            std::cin >> po;
            st.push(po);
            break;
        case 'p':
        case 'P':
            if (st.pop(po))
                std::cout << "Deklaracja nr: " << po << std::endl;
            break;
        default:
            break;
        }
        std::cout << "Nacisnij D aby wprowadzic deklaracje.\n"
            << "P, aby przetworzyc deklaracje, lub K, aby zakonczyc\n";
    }
    std::cout << "fajrant" << std::endl;
}
