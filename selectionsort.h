#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <iostream>
#include <vector>

#include "helper.h"

using namespace std;

void selectionsort(int arrVals[], int size){
    std::cout << "\nSorting...";

    for(int i = 0; i < size; i++){
        int minVal = arrVals[i];
        int maxVal = -1;
        for(int x = i; x < size; x++){
            if(minVal > arrVals[x]){
                minVal = arrVals[x];
                maxVal = x;
            }
        }
        if(maxVal != -1){
            arrVals[maxVal] = arrVals[i];
        }
        arrVals[i] = minVal;   
    }

    std::cout << "\nSelection Sort done!\n";
}

#endif