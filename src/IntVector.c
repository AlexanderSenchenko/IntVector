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
	copy_v->data = malloc(sizeof(int) * v->capacity);
	memcpy(copy_v->data, v->data, sizeof(int) * v->capacity);
	copy_v->size = v->size;
	copy_v->capacity = v->capacity;
	return copy_v;
}

void int_vector_free(IntVector *v){
	free(v->data);
	free(v);
}

int int_vector_get_item(const IntVector *v, size_t index){
	int elem_index = v->data[index];
	return elem_index;	
}

void int_vector_set_item(IntVector *v, size_t index, int item){
	v->data[index] = item; 
}
