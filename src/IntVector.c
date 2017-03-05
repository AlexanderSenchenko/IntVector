#include "IntVector.h"
#include <string.h>
#include <stdlib.h>

IntVector *int_vector_new(size_t initial_capacity){
	IntVector *arr = malloc(sizeof(IntVector));

	arr -> data = malloc(sizeof(int) * initial_capacity);
	arr -> size = 0;
	arr -> capacity = initial_capacity;

	return arr;	
}
