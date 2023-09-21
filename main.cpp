#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //eliras
    std::cout << '1-100 ertekek duplazasa' //nincs ; es a ' helyett " kell
    for (int i = 0;) //rossz loop
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hibas feltetel
    {
        std::cout << "Ertek:" //nincs ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //, helyett ;
    {
        atlag += b[i] //nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
