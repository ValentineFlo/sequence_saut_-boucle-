// sequence_saut_(boucle).cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    // continue
    for (int i = 0; i < 5; ++i)
    {
        if (i < 2) continue; // affiche deux fois i est continue
        std::cout << i << std::endl;
        break;
    } 

    // Break
    for (int i = 0; i < 5; ++i)
    {
        if (i < 2) break; // lis une fois break et sort directement du scope
        std::cout << i << std::endl;
        break;
    }

    for (int i = 0; i < 5; ++i)
    {
        std::cout << i << std::endl;
        break;
    } // Break fait sortir de la boucle

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << j << std::endl;
            break;
        } // Break fait sortir de la boucle que dans laquelle elle est. ici, elle fait sortir de la première boucle. elle lis une fois
    } // en maitent Break ici, la boucle imbriqué sera lu 3 fois

    return 0; // permet de sortir de la fonction
    // diff break et return Break sort du scope, return sort de la fonction

   
}

