#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <vector>

using namespace std;

void helperPrint(int arrVals[], int size){
    std::cout << "\nArray:";
    for(int i = 0; i < size && i < 20; i++){
        std::cout << " [ ";
        std::cout << arrVals[i];
        std::cout << " ] ";
    }
    if(size > 20){
        std::cout << " [ ... ] ";
    }
}

void createArray(int unsortedArray[], int size){
    bool rdn;
    int userInput;

    bool loop = true;
    while(loop){
        std::cout << "Randomize values? YES = [1] / NO = [2]\n";
        std::cin >> userInput;

        switch(userInput){
            case 1:
                rdn = true;
                loop = false;
            break;
            case 2:
                rdn = false;
                loop = false;
            break;
            default:
            std::cout << "\nPlease type a valid option.\n";
        }
    }

    if(rdn){
        for(int i = 0; i < size; i++){
            unsortedArray[i] = rand() % 1000;
        }
    } else {
        std::cout << "\nPlease type the numbers for each index: ";
        for(int i = 0; i < size; i++){
            std::cout << "\n[" << i << "] = ";
            std::cin >> userInput;
            unsortedArray[i] = userInput;
                
        }
    }
}

#endif