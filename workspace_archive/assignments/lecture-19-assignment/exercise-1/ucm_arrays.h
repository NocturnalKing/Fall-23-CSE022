#ifndef UCM_ARRAYS_H
#define UCM_ARRAYS_H

float average(float arr[], float size){
    float sum  = 0;
    float average = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
        //cout << sum << endl; 
    }
    average = sum/size;
    return average;
}

#endif