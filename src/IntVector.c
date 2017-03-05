#include "IntVector.h"
#include <string.h>
#include <stdlib.h>

IntVector *int_vector_new(size_t initial_capacity){
	IntVector *v = malloc(sizeof(IntVector));

	v->data = malloc(sizeof(int) * initial_capacity);
	v->size = 0;
	v->capacity = initial_capacity;

	return v;	
}

IntVector *int_vector_copy(const IntVector *v){
	IntVector *copy_v = malloc(sizeof(IntVector));

	copy_v = memcpy(copy_v, v, v->capacity);

	return copy_v;
}

void int_vector_free(IntVector *v){
	free(v);
}
