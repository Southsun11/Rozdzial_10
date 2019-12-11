#include <iostream>
#include "..\Stos Bool\stack.h"

int main()
{
    Stack stos;
    customer temp;
    char choice;
    do
    {
        std::cout << "Wpisz\n" << "d)dodaj element\n" << "u)usun element\n" << "k)koniec" << std::endl;
        std::cin.get(choice).get();
        switch (choice)
        {
        case 'd':
                std::cout << "Wpisz nazwe klienta" << std::endl;
                std::cin.getline(temp.fullname, 35);
                std::cout << "Podaj naleznosc" << std::endl;
                std::cin >> temp.payment;
                std::cin.get();
                stos.push(temp);
                break;
        case 'u':
            stos.pop(temp);
            std::cout.width(20);
            std::cout << std::left << "Nazwa klienta ";
            std::cout.width(20);
            std::cout << std::left << temp.fullname;
            std::cout.width(30);
            std::cout << "naleznosc " << temp.payment << std::endl;
            break;
               

        }
    } while (choice != 'k');

}

