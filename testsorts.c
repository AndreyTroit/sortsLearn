#include <iostream>
#include "testsorts.h"
#include "arraywork.h"
#include "sorts.h"
#include "statarray.h"

using namespace std;

void test_bubbleSort(int size, int minel, int maxel){
	int ar[size];
	randomFill(ar, size, minel, maxel);
	showEl(ar, size);
       	bubbleSort(ar, size);
	showEl(ar, size);
	cout << typeSort(ar, size) << '\n' << endl;
}

void test_insertionSort(int size, int minel, int maxel){
        int ar[size];
        randomFill(ar, size, minel, maxel);
        showEl(ar, size);
        insertionSort(ar, size);
        showEl(ar, size);
        cout << typeSort(ar, size) << '\n' << endl;
}

void test_countSort(int size, int minel, int maxel){
        int ar[size];
        randomFill(ar, size, 0, 200);
        showEl(ar, size);
        //countSort(ar, size, maxel);
	selectionSort(ar, size);
        showEl(ar, size);
        cout << typeSort(ar, size) << '\n' << endl;
}

void test_selectionSort(int size, int minel, int maxel){
        int ar[size];
        randomFill(ar, size, minel, maxel);
        showEl(ar, size);
        selectionSort(ar, size);
        showEl(ar, size);
        cout << typeSort(ar, size) << '\n' << endl;
}

void test_mergeSort(int size, int minel, int maxel){
        int ar[size];
        randomFill(ar, size, minel, maxel);
        showEl(ar, size);
        mergeSort(ar, size);
        showEl(ar, size);
        cout << typeSort(ar, size) << '\n' << endl;
}


