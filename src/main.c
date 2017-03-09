#include <stdio.h>
#include "IntVector.h"
#include <stdlib.h>

int main()
{
	size_t initial_capacity = 0;

//int_vector_new
	IntVector *v = int_vector_new(initial_capacity);
	if (v == NULL){
		int_vector_free(v);
	}
	for (int i = 0; i < 5; i++){
		int_vector_push_back(v, i + 1);
	}

//int_vector_copy
	IntVector *copy_v = int_vector_copy(v);
	if (copy_v == NULL){
		int_vector_free(copy_v);
	}
	for (int i = 0; i < int_vector_get_size(copy_v); i++){
		printf("%d ", v->data[i]);
	}
	printf("\nSize = %d Capacity = %d\n", int_vector_get_size(copy_v), int_vector_get_capacity(copy_v));

//int_vector_free
	int_vector_free(v);

//int_vector_get_index
	int index = 3;
	printf("%d\n", int_vector_get_item(copy_v, index));

//int_vector_set_item
	int item = 7;
	int_vector_set_item(copy_v, index, item);

//int_vector_get_size
	printf("Size = %d\n", (int) int_vector_get_size(copy_v));

//int_vector_get_capacity
	printf("Capacity = %d\n", (int) int_vector_get_capacity(copy_v));

//int_vector_push_back
	printf("%d\n", int_vector_push_back(copy_v, item));
	for (int i = 0; i < int_vector_get_size(copy_v); i++){
		printf("%d ", copy_v->data[i]);
	}
	printf("\nSize = %d Capacity = %d\n", int_vector_get_size(copy_v), int_vector_get_capacity(copy_v));

//int_vector_pop_back
	int_vector_pop_back(copy_v);
	printf("Capacity = %d Size = %d\n", int_vector_get_capacity(copy_v), int_vector_get_size(copy_v));
	for (int i = 0; i < copy_v->size; i++){
		printf("%d ", copy_v->data[i]);
	}
	printf("\n");

//int vector shrinck to fit
	printf("%d\n",int_vector_shrink_to_fit(copy_v));
	printf("Capacity = %d Size = %d\n", int_vector_get_capacity(copy_v), int_vector_get_size(copy_v));

//int_vector_resize
	size_t new_size = 15;
	printf("%d\n",int_vector_resize(copy_v, new_size));
	printf("Capacity = %d Size = %d\n", int_vector_get_capacity(copy_v), int_vector_get_size(copy_v));
	for (int i = 0; i < int_vector_get_size(copy_v); i++){
		printf("%d ", copy_v->data[i]);
	}
	printf("\n");
	return 0;

//int_vector_reserve
	printf("\tint_vector_reserve\n");

	size_t new_capacity = 20;

	printf("%d\n", int_vector_reserve(copy_v, new_capacity));
	printf("Capacity = %d Size = %d Data = %p\n", copy_v->capacity, copy_v->size, copy_v->data);

	return 0;
}
