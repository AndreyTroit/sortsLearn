#ifndef _arraywork_h_
#define _arraywork_h_

#include <iostream>
#include <time.h>
#include <limits>
#include <cstring>

void swap(int&, int&);
void randomFill(int*, int, int, int);
void showEl(int*, int);
void fillNu(int*, int, int);
void randomFill(int* ar, int size, int minel = 0, int maxel = std::numeric_limits<int>::max());


#endif /*_arraywork_h_*/
