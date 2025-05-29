//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXV
// Versuch 02
//
// Datei:  main.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>

int fibonacci(int n)
{
    int previousFib = 0;
    int currentFib = 1;
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    for (int i = 2; i <= n; i++)
    {
        int newFib = previousFib + currentFib ; // 1 = (0 + 1) -> 2 = (1 + 1) -> 3 = (1 + 2)
        previousFib = currentFib ; // previousFib = 1 -> previousFib = 1 -> previousFib = 2
        currentFib = newFib ; // currentFib = 1 -> currentFib = 2 -> currentFib = 3
    }
    return currentFib ;
}

int main ()
{
    std::cout << " Fibonacci - Zahlen von 0 bis 12:" << std::endl ;
    for (int i = 0; i <= 12 ; i ++)
    {
        std::cout << "f(" << i << ") = " << fibonacci(i) << std::endl ;
    }
    return 0;
}
