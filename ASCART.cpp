#include <string>
#include <iostream>

class ASCIIArt {
    public:
    static void print (std::string s){ // letra a
        int tam = s.size() + 4;
        for (int i = 0; i < tam; i++)
            std::cout << "-";
    }
    static void print (char c){ // letra b
        char caractere = c;
        std::cin >> caractere;
        for (int i = 0; i < 14; i++)
            std::cout << caractere;
        std::cout << std::endl;
        std::cout << caractere << " " << "ASCII Art" << caractere << std::endl;

        for (int i = 0; i < 6; i++)
            std::cout << caractere;
        std::cout << "\/";
        for (int i = 0; i < 7; i++)
            std::cout << caractere;
    }

    static void print (int c){ // letra c
        int num = c;
        for (int i = 0; i <= c; i++){
            if (i != c)
                std::cout << "-o-- ";
            std::cout << "-o";
        }
        std::cout << std::endl;
        for (int i = 0; i <= c; i++){
            if (i != c)
                std::cout << "/|\ -"; 
            std::cout << "/|\ ";
        }
        std::cout << std::endl;
        for (int i = 0; i <= c; i++){
            if (i != c)
                std::cout << "/-\ -"; 
            std::cout << "/-\ ";
        }
    }
};
