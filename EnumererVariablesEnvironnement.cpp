// EnumererVariablesEnvironnement.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
//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

extern char** environ;
int main() {
    for (char** env = environ; *env != nullptr; ++env) {
        std::cout << *env << std::endl;
    }
    return 0;
}
