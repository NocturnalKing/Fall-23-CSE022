#ifndef UCM_ARRAYS_H
#define UCM_ARRAYS_H
#include <iostream>


int hottestMonthIndex(float data[], int size){
    float hottest = 0.0;
    int index = 0;
    for(int i = 0; i < size; i++){
        if(data[i] > hottest){
            hottest = data[i];
            index = i;
        }
    }

    return index;
}

int coldestMonthIndex(float data[], int size){
    float coldest = 10000000.0;
    int index = 0;
    for(int i = 0; i < size; i++){
        if(data[i] < coldest){
            coldest = data[i];
            index = i;
        }
    }
    
    return index;
}

#endif