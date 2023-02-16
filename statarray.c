#include "statarray.h"

using namespace std;

int getMinEl(int* ar, int size){
        int res = ar[0];
        int ind = 0;
        for(int i = 0; i < size; i++){
                if(ar[i] < res){
                        res = ar[i];
                        ind = i;
                }
        }
        return ind;
}

int getMaxEl(int* ar, int size){
        int res = ar[0];
        int ind = 0;
        for(int i = 0; i < size; i++){
                if(ar[i] > res){
                        res = ar[i];
                        ind = i;
                }
        }
        return ind;
}

int binSearch(int* ar, int size, int key){
    int center = size / 2;
    if (ar[center] == key){
        std::cout << key << std::endl;
    }
    if (ar[center] > key){
        return binSearch(&ar[0], center, key);
    }
    if (ar[center] < key){
        return binSearch(&ar[center], size - 1, key);
    }
}

int typeSort(int* ar, int size){
	int count = 0;
	for (int i = 0; i < (size - 1); i++){
		if (ar[i] < ar[i+1]){
			count += 1;
		}
		if (ar[i] > ar[i+1]){
			count += 2;
		}
	}
	if (count == size-1){
		return 1;
	}
	if (count == (size-1) * 2){
		return 2;
	}
	return 0;
}
