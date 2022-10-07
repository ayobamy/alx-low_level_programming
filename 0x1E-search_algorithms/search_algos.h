#ifndef __SEARCH_ALGOS__
#define __SEARCH_ALGOS__

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#define min

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int _binary_searching(int *array, size_t start, size_t end, int value);
int advanced_binary(int *array, size_t size, int value);
int recursive_binary_search(int *array, size_t start, size_t end, int value);

#endif /* __SEARCH_ALGOS__ */
