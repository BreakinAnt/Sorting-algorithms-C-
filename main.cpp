#include <iostream>
#include <vector>

#include <time.h>

#include "bubblesort.h"
#include "selectionsort.h"
#include "insertionsort.h"
#include "quicksort.h"
#include "helper.h"
#include "mergesort.h"

using namespace std;

int main(){
    int userInput;
    int arraySize;

    while(true){
        clock_t start, end;
        
        std::cout << "\nType the array size: ";
        std::cin >> arraySize;
        int *arrVals = new int[arraySize];

        createArray(arrVals, arraySize);
        helperPrint(arrVals, arraySize);
        
        std::cout << "\n[1] Insertion Sort\n[2] Bubble Sort\n[3] Selection Sort\nSELECT AN OPTION:";
        std::cin >> userInput;
            switch(userInput){
                case 1:
                    start = clock();
                    insertionsort(arrVals, arraySize);
                    end = clock();
                    helperPrint(arrVals, arraySize);
                    std::cout << "\nExecution time: "  << double(end-start)/CLOCKS_PER_SEC << "\n";
                break;
                case 2:
                    start = clock();
                    bubblesort(arrVals, arraySize);
                    end = clock();
                    helperPrint(arrVals, arraySize);
                    std::cout << "\nExecution time: "  << double(end-start)/CLOCKS_PER_SEC << "\n";
                break;
                case 3:
                    start = clock();
                    selectionsort(arrVals, arraySize);
                    end = clock();
                    helperPrint(arrVals, arraySize);
                    std::cout << "\nExecution time: "  << double(end-start)/CLOCKS_PER_SEC << "\n";
                break;
                // case 4:
                //     start = clock();
                //     quicksort(arrVals, 0, arraySize-1);
                //     helperPrint(arrVals, arraySize);
                //     end = clock();
                //     std::cout << "\nExecution time: "  << double(end-start)/CLOCKS_PER_SEC << "\n";
                // break;
                // case 5:
                //     start = clock();
                //     mergesort(arrVals, 0, arraySize-1);
                //     helperPrint(arrVals, arraySize);
                //     end = clock();
                //     std::cout << "\nExecution time: "  << double(end-start)/CLOCKS_PER_SEC << "\n";
                // break;
                // default:
                //     return 0;
            }
            delete arrVals;
    }
    return 0;
}