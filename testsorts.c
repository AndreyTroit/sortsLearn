#include <iostream>
#include "testsorts.h"
#include "arraywork.h"
#include "sorts.h"
#include "statarray.h"

using namespace std;

void test_bubbleSort(int size, int minel, int maxel){
	int ar[size];
	randomFill(ar, size, minel, maxel);
	cout << "-----test bubbleSort-----" << '\n' << endl;
	showEl(ar, size);
       	bubbleSort(ar, size);
	showEl(ar, size);
	if (typeSort(ar, size) == 1){
		cout << "array sorted in ascending order" << endl;
	}
	if (typeSort(ar, size) == 2){
		cout << "array sorted in descending order" << endl;
	}
	if (typeSort(ar, size) == 0){
		cout << "test failed" << endl;
	}
	cout << "-------------------------" << '\n' << endl;
}

void test_insertionSort(int size, int minel, int maxel){
        int ar[size];
        randomFill(ar, size, minel, maxel);
	cout << "-----test insertionSort-----" << '\n' << endl;
	showEl(ar, size);
       	insertionSort(ar, size);
	showEl(ar, size);
	if (typeSort(ar, size) == 1){
		cout << "array sorted in ascending order" << endl;
	}
	if (typeSort(ar, size) == 2){
		cout << "array sorted in descending order" << endl;
	}
	if (typeSort(ar, size) == 0){
		cout << "test failed" << endl;
        }
	cout << "----------------------------" << '\n' << endl;
}

void test_countSort(int size, int minel, int maxel){
        int ar[size];
        randomFill(ar, size, minel, maxel);
	cout << "-----test countSort-----" << '\n' << endl;
	showEl(ar, size);
        countSort(ar, size, minel, maxel);
	showEl(ar, size);
	if (typeSort(ar, size) == 1){
		cout << "array sorted in ascending order" << endl;
	}
	if (typeSort(ar, size) == 2){
		cout << "array sorted in descending order" << endl;
	}
	if (typeSort(ar, size) == 0){
		cout << "test failed" << endl;
        }
	cout << "------------------------" << '\n' << endl;
}

void test_selectionSort(int size, int minel, int maxel){
        int ar[size];
        randomFill(ar, size, minel, maxel);
	cout << "-----test selectionSort-----" << '\n' << endl;
	showEl(ar, size);
       	selectionSort(ar, size);
	showEl(ar, size);
	if (typeSort(ar, size) == 1){
		cout << "array sorted in ascending order" << endl;
	}
	if (typeSort(ar, size) == 2){
		cout << "array sorted in descending order" << endl;
	}
	if (typeSort(ar, size) == 0){
		cout << "test failed" << endl;
        }
	cout << "----------------------------" << '\n' << endl;
}

void test_mergeSort(int size, int minel, int maxel){
        int ar[size];
        randomFill(ar, size, minel, maxel);
	cout << "-----test mergeSort-----" << '\n' << endl;
	showEl(ar, size);
       	mergeSort(ar, size);
	showEl(ar, size);
	if (typeSort(ar, size) == 1){
		cout << "array sorted in ascending order" << endl;
	}
	if (typeSort(ar, size) == 2){
		cout << "array sorted in descending order" << endl;
	}
	if (typeSort(ar, size) == 0){
		cout << "test failed" << endl;
        }
	cout << "-------------------------" << '\n' << endl;
}

void test_quickSort(int size, int minel, int maxel){
	int ar[size];
	randomFill(ar, size, minel, maxel);
	cout << "-----test quickSort-----" << '\n' << endl;
	showEl(ar, size);
       	quickSort(ar, size);
	showEl(ar, size);
	if (typeSort(ar, size) == 1){
		cout << "array sorted in ascending order" << endl;
	}
	if (typeSort(ar, size) == 2){
		cout << "array sorted in descending order" << endl;
	}
	if (typeSort(ar, size) == 0){
		cout << "test failed" << endl;
        }
	cout << "------------------------" << '\n' << endl;
}
