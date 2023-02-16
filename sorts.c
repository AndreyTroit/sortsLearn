#include "sorts.h"
#include "arraywork.h"
#include "statarray.h"

void bubbleSort(int* ar, int size){
        for(int i = 0; i < size; i++){

                for(int j = 0; j < size - 1 - i; j++){
                        if (ar[j] > ar[j+1]){
                                swap(ar[j], ar[j+1]);
                        }
                }
        }
}

void insertionSort(int* ar, int size){
        for(int i = 1; i < size; i++){
                int el = ar[i];
                int j = i-1;
                while(ar[j] > el && j >= 0){
                        ar[j + 1] = ar[j];
                        j--;
                }
                ar[j + 1] = el;
        }
}
/*
void selectionSort(int* ar, int size){
	int maxind;
        for(int i = 0; i < size; i++) {
         	maxind = getMaxEl(ar, size);
		if (ar[maxind] != ar[i]){
			swap(ar[i], ar[maxind]); 
		}
	}
}
*/
void selectionSort(int* ar, int size){
    	for(int i = 0; i < size; i++) {
        	int maxind = i;
        	for(int j = i; j < size; j++) {
            		if(ar[maxind] <  ar[j]) {
                		maxind = j;
            		}
        	}
        	if(ar[maxind] != ar[i]) {
            		swap(ar[maxind], ar[i]);
        	}
    	}
}
/*
void countSort(int* ar, int size, int minel, int maxel){
        int numMass[maxel-minel];
        for(int i = 0; i < maxel-minel; i++){
                for(int j = 0; j < size; j++){
                        if(ar[j] == i + minel){
                                numMass[i] += 1;
                        }
                }
        }
	int count = 0;
        for (int i = 0; i < maxel-minel; i++){
		for (int j = 0; j < numMass[i]; j++){
			ar[count] = i + minel;
			count++;
		}
	}
}
*/
void countSort(int* ar, int size, int maxel){
	int numMass[maxel];
	for (int i = 0; i < maxel; i++){
		for (int j = 0; j < size; j++){
        		if (ar[j] == i){
				numMass[i] += 1;
			}
		}
    	}
    	int count = 0;
    	for (int i = 0; i < maxel; i++){
        	for (int j = 0; j < numMass[i]; j++){
            		ar[count] = i;
			count++;
        	}
    	}
}

static void merge(int* ar, int size, int central) {
    int left = 0;
    int right = central;
    int* arTemp = new int [size];
    int indexTemp = 0;

    while (left < central && right < size) {
        while(ar[left] <= ar[right] && left < central) {
            arTemp[indexTemp++] = ar[left++];
//            left++;
//            indexTemp++;
        }
        while(ar[left] > ar[right] && right < size) {
            arTemp[indexTemp] = ar[right];
            indexTemp++;
            right++;
        }
    }

    while (left < central) {
        arTemp[indexTemp++] = ar[left++];
    }
    while (right < size) {
        arTemp[indexTemp++] = ar[right++];
    }

    memcpy(ar, arTemp, size * sizeof(int));

    delete [] arTemp;
}

void mergeSort(int* ar, int size) {
    if (size <= 1) {
        return;
    }
    mergeSort(&ar[0], size >> 1);
    mergeSort(&ar[size >> 1], size - (size >> 1));

    merge(ar, size, size >> 1);
}
