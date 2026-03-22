// EnumererVariablesEnvironnement.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
extern char** environ;
int main() {
    for (char** env = environ; *env != nullptr; ++env) {
        std::cout << *env << std::endl;
    }
    return 0;
}
