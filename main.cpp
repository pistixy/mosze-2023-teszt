#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //eliras
    std::cout << "1-100 ertekek duplazasa"; //nincs ; es a ' helyett " kell
    for (int i = 0; i < N_ELEMENTS ; i++) //rossz loop
    {
        b[i] = i * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++) //hibas feltetel
    {
        std::cout << "Ertek:"; //nincs ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag =0;
    for (int i = 0; i < N_ELEMENTS; i++) //, helyett ;
    {
        atlag += b[i]; //nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Átlagon felüli komment. " << std::endl;
    return 0;
}
