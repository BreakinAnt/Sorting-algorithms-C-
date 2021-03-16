#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>
#include <vector>

#include "helper.h"

using namespace std;

void bubblesort(int arrVals[], int size){   
    std::cout << "\nSorting...";

    for(int i = 0; i < size; i++){
       bool isSorted = true;
        for(int x = 0; x < size; x++){
            if(arrVals[x] > arrVals[x+1]){
                swap(arrVals[x], arrVals[x+1]);
                if (isSorted){
                    isSorted = false;
                }
            }   
        }
        if (isSorted)
        {
            break;
        }
        
    }
    std::cout << "\nBubble Sort done!\n";
}

#endif