//
//  main.cpp
//  Rhododendron
//
//  Created by Emilie on 11/02/2018.
//  Copyright © 2018 Emilie. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, Rhododendron" << std::endl;
    std::cout << "Dans le grand Rhododendron Blanc se trouve l'entrée du Royaume Souterrain des Insectes. Lison la petite fée veut trouver cette entrée." << std::endl;
    std::cout << "Lison a le choix entre\n A Fouiller parmi les nombreuses racines\n B Explorer les fleurs majestueuses\n C Inspecter les branchages" << std::endl;
    char toucheChoix = '0';
    std::cin >> toucheChoix;
    if(toucheChoix == 'a'){
        std::cout << "Lison fouille parmi les racines" <<std::endl;
    } else if(toucheChoix == 'b'){
        std::cout << "Lison part explorer les fleurs majestueuses" <<std::endl;
    } else if(toucheChoix == 'c'){
        std::cout << "Lison part inspecter les branchages" <<std::endl;
    } else {
        std::cout << "Appuyer sur A ou B ou C" <<std::endl;
    }
    //std::cout << toucheChoix << std::endl;
    return 0;
}
