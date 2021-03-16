#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <iostream>
#include <vector>

#include "helper.h"

using namespace std;

void insertionsort(int arrVals[], int size){
    std::cout << "\nSorting...";

    for(int i = 1; i < size; i++){
        int fetchedValue = arrVals[i];
        int x = i-1;
        while(x >= 0 && arrVals[x] > fetchedValue){
            arrVals[x+1] = arrVals[x];
            x--;
        }
        arrVals[x+1] = fetchedValue;
    }

    std::cout << "\nInsertion Sort done!\n";
}

#endif