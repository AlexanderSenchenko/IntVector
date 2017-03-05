#include <stdio.h>
#include "IntVector.h"
#include <stdlib.h>

int main()
{
	size_t initial_capacity = 5;

	IntVector *v = int_vector_new(initial_capacity);
	
	for(int i = 0; i < initial_capacity; i++){
		v->data[i] = i;
		v->size++;
	}
	for(int i = 0; i < initial_capacity; i++){
		printf("%d", v->data[i]);
	}
	printf("\n");
	printf("Capacity = %d Size = %d Data = %p\n", v->capacity, v->size, v->data);

	IntVector *copy_v = int_vector_copy(v);

	printf("Capacity = %d Size = %d Data = %p\n", copy_v->capacity, copy_v->size, copy_v->data);

	for(int i = 0; i < copy_v->size; i++){
		printf("%d", copy_v->data[i]);
	}
	printf("\n");

	int_vector_free(v);

	printf("Capacity = %d Size = %d Data = %p\n", v->capacity, v->size, v->data);
	for(int i = 0; i < v->capacity; i++){
		printf("%d", v->data[i]);
	}
	printf("\n");

	return 0;
}
