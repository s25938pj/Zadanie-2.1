
#include <iostream>

int main()
{


    int suma_totalna = 0;
    int n;
    std::cout << "Podaj dlugosc ciagu (n): ";
    std::cin >> n;
    for (int j = 1; j <= n; j++)
    {
        int suma = 0;
        for (int i = 1; i <= j; i++)
        {
            std::cout << i;
            if (i < j)
            {
                std::cout << " + ";
            }
            suma = suma + i;
        }

        suma_totalna += suma;

        std::cout << " = " << suma << std::endl;
    }


    std::cout << "Suma szeregu: ";

    for (int j = 1; j <= n; j++)
    {
        std::cout << ((j * j + j) / 2);
        if (j < n)
        {
            std::cout << " + ";
        }
    }


    std::cout << " = " << suma_totalna << std::endl;

}

