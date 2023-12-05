/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

//Alexis Rodriguez Felix

int main() {
    std::cout << "Teclee su edad: ";
    int e;
    std::cin >> e;

    // Verificar si la persona es mayor de 18 años
    if (e >= 18) {std::cout << "Eres mayor de edad.\n";} 
    else {std::cout << "Eres menor de edad.\n";}
    return 0;
}
