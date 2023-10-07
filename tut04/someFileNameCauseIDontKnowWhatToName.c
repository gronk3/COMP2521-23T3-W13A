#include <stdio.h>
#include <stdlib.h>

#include "Set.h"

int numOddOccurrences(int arr[], int size) {
    Set s = SetNew();
    
    for (int i = 0; i < size; i++) {
        if (SetContains(s, arr[i])) {
            SetDelete(s, arr[i]);
        } else {
            SetInsert(s, arr[i]);
        }
    }
    int numOccurOdd = SetSize(s);
    SetFree(s);
    return numOccurOdd;
}


int numSingleOccurrences(int arr[], int size) {
    Set s1 = SetNew();
    Set s2 = SetNew();

    for (int i = 0; i < size; i++) {
        if (SetContains(s1, arr[i]) && !SetContains(s2, arr[i])) {
            SetInsert(s2, arr[i]);
        } else {
            SetInsert(s1, arr[i]);
        }
    }
    int numSingleOccur = SetSize(s1) - SetSize(s2);
    SetFree(s1);
    SetFree(s2);
    return numSingleOccur;
}