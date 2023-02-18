#include <iostream>
#include "sorts.h"
#include "arraywork.h"
#include "statarray.h"
#include "testsorts.h"

using namespace std;

int main(){
	int size = 10;
	int minel = -100;
	int maxel = 100;
	test_bubbleSort(size, minel, maxel);
	test_countSort(size, minel, maxel);
	test_selectionSort(size, minel, maxel);
	test_insertionSort(size, minel, maxel);
	test_mergeSort(size, minel, maxel);
	test_quickSort(size, minel, maxel);
	return 0;
}
