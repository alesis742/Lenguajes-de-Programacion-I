/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

//Alexis Rodriguez Felix

class RFCGenerator {
public:
    RFCGenerator(const std::string& apellidoPaterno, const std::string& apellidoMaterno, const std::string& primerNombre, const std::string& fechaNacimiento)
        : apellidoPaterno_(apellidoPaterno), apellidoMaterno_(apellidoMaterno), primerNombre_(primerNombre), fechaNacimiento_(fechaNacimiento) {}

    std::string calcularRFC() {
        std::string rfc = obtenerIniciales(apellidoPaterno_) + obtenerInicial(apellidoMaterno_) + obtenerInicial(primerNombre_);
        rfc += fechaNacimiento_.substr(8, 2) + fechaNacimiento_.substr(3, 2) + fechaNacimiento_.substr(0, 2);
        return rfc;
    }

private:
    std::string obtenerIniciales(const std::string& palabra) {
        std::string iniciales = "";
        iniciales += palabra[0]; // primera letra

        for (size_t i = 1; i < palabra.length(); ++i) {
            if (esVocal(palabra[i])) {
                iniciales += palabra[i];
                break;
            }
        }

        if (iniciales.length() == 1) {
            iniciales += 'X';
        }

        return iniciales;
    }

    char obtenerInicial(const std::string& palabra) {
        return (palabra.empty()) ? 'X' : palabra[0];
    }

    bool esVocal(char letra) {
        return (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
                letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u');
    }

    std::string apellidoPaterno_;
    std::string apellidoMaterno_;
    std::string primerNombre_;
    std::string fechaNacimiento_;
};

int main() {
    std::string apellidoPaterno, apellidoMaterno, primerNombre, fechaNacimiento;

    std::cout << "Apellido paterno: ";
    std::cin >> apellidoPaterno;

    std::cout << "Apellido materno: ";
    std::cin >> apellidoMaterno;

    std::cout << "Primer nombre: ";
    std::cin >> primerNombre;

    std::cout << "Fecha de nacimiento (formato DD/MM/AAAA): ";
    std::cin >> fechaNacimiento;

    RFCGenerator rfcGenerator(apellidoPaterno, apellidoMaterno, primerNombre, fechaNacimiento);
    std::string rfc = rfcGenerator.calcularRFC();

    std::cout << "El RFC es: " << rfc << std::endl;

    return 0;
}
