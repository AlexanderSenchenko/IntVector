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
void int_vector_free(IntVector *v);
int int_vector_get_item(const IntVector *copy_v, size_t index);
void int_vector_set_item(IntVector *copy_v, size_t index, int item);
size_t int_vector_get_size(const IntVector *copy_v);
size_t int_vector_get_capacity(const IntVector *copy_v);
int int_vector_push_back(IntVector *copy_v, int item);
void int_vector_pop_back(IntVector *copy_v);
int int_vector_shrink_to_fit(IntVector *copy_v);


#endif
