/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

//Alexis Rodriguez Felix

int main() {
    double num1, num2;
    std::cout << "Escribe el primer número: ";
    std::cin >> num1;
    std::cout << "Escribe el segundo número: ";
    std::cin >> num2;

    double suma = num1 + num2;
    double resta = num1 - num2;
    double multi = num1 * num2;
    double divi = (num2 != 0) ? num1 / num2 : 0;
    
    std::cout << "La suma es: " << suma << std::endl;
    std::cout << "La resta es: " << resta << std::endl;
    std::cout << "La multiplicación es: " << multi << std::endl;

    if (num2 != 0) {
        std::cout << "La división es: " << divi << std::endl;
    } else {
        std::cout << "No se puede dividir entre 0." << std::endl;
    }

    return 0;
}