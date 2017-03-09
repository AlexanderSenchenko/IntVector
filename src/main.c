#include <stdio.h>
#include "IntVector.h"
#include <stdlib.h>

int main()
{
	size_t initial_capacity = 5;

//int_vector_new
	IntVector *v = int_vector_new(initial_capacity);
	if (v == NULL){
		int_vector_free(v);
	}
	for (int i = 0; i < int_vector_get_capacity(v); i++){
		v->data[i] = i + 1;
		v->size++;
	}

//int_vector_copy
	IntVector *copy_v = int_vector_copy(v);
	if (copy_v == NULL){
		int_vector_free(copy_v);
	}
	for (int i = 0; i < int_vector_get_capacity(copy_v); i++){
		printf("%d ", v->data[i]);
	}
	printf("\nSize = %d Capacity = %d\n", int_vector_get_size(copy_v), int_vector_get_capacity(copy_v));

//int_vector_free(no trable)
	int_vector_free(v);

//int_vector_get_index(no trable)
	int index = 3;
	printf("%d\n", int_vector_get_item(copy_v, index));

//int_vector_set_item(no trable)
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
	printf("%d\n%d\n", int_vector_get_size(copy_v), int_vector_get_capacity(copy_v));
	return 0;

//int_vector_pop_back(trable)
	printf("\tint_vector_pop_back\n");

	int_vector_pop_back(copy_v);

	printf("Capacity = %d Size = %d Data = %p\n", copy_v->capacity, copy_v->size, copy_v->data);
	for (int i = 0; i < copy_v->size + 1; i++){
		printf("%d ", copy_v->data[i]);
	}
	printf("\n");

//int vector shrinck to fit
	printf("\tint vector shrinck to fit\n");

	printf("%d\n",int_vector_shrink_to_fit(copy_v));

	printf("Capacity = %d Size = %d Data = %p\n", copy_v->capacity, copy_v->size, copy_v->data);

//int_vector_resize(trable)
	printf("\tint_vector_resize\n");
	
	size_t new_size = 10;

	printf("%d\n",int_vector_resize(copy_v, new_size));

	printf("Capacity = %d Size = %d Data = %p\n", copy_v->capacity, copy_v->size, copy_v->data);
	for (int i = 0; i < copy_v->size; i++){
		printf("%d ", copy_v->data[i]);
	}
	printf("\n");

//int_vector_reserve
	printf("\tint_vector_reserve\n");

	size_t new_capacity = 20;

	printf("%d\n", int_vector_reserve(copy_v, new_capacity));
	printf("Capacity = %d Size = %d Data = %p\n", copy_v->capacity, copy_v->size, copy_v->data);

	return 0;
}
