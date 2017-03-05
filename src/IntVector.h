#ifndef INTVECTOR_H
#define INTVECTOR_H
#include <stddef.h>

typedef struct{	
	int capacity;
	int size;
	int *data;
} IntVector;

IntVector *int_vector_new(size_t initial_capacity);
IntVector *int_vector_copy(const IntVector *v);

#endif
