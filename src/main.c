#include <stdio.h>
#include "IntVector.h"
#include <stdlib.h>

int main()
{
	size_t initial_capacity = 0;

//int_vector_new
	printf("\tint_vector_new\n");

	IntVector *v = int_vector_new(initial_capacity);
	if (v == NULL){
		int_vector_free(v);
	}


	/*for (int i = 0; i < initial_capacity; i++){
		v->data[i] = i;
		v->size++;
	}
	for (int i = 0; i < v->size; i++){
		printf("%d ", v->data[i]);
	}
	printf("\n");
	printf("Capacity = %d Size = %d Data = %p\n", v->capacity, v->size, v->data);*/

//int_vector_copy
	printf("\tint_vector_copy\n");

	IntVector *copy_v = int_vector_copy(v);
	if (copy_v == NULL){
		int_vector_free(copy_v);
	}

	/*printf("Capacity = %d Size = %d Data = %p\n", copy_v->capacity, copy_v->size, copy_v->data);

	for (int i = 0; i < copy_v->size; i++){
		printf("%d ", copy_v->data[i]);
	}
	printf("\n");*/

//int_vector_free
	printf("\tint_vector_free\n");

	int_vector_free(v);

/*	printf("Capacity = %d Size = %d Data = %p\n", v->capacity, v->size, v->data);
	for (int i = 0; i < v->size; i++){
		printf("%d ", v->data[i]);
	}
	printf("\n");*/

//int_vector_set_index(no trable)
	printf("\tint_vector_set_index\n");

	int index = 3;
	printf("%d\n", int_vector_get_item(copy_v, index));

//int_vector_set_item(no trable)
	printf("\tint_vector_set_item\n");

	int item = 7;

	int_vector_set_item(copy_v, index, item);
	
	/*for (int i = 0; i < copy_v->size; i++){
		printf("%d ", copy_v->data[i]);
	}
	printf("\n");*/

//int_vector_get_size
	printf("\tint_vector_get_size\n");

	printf("Size = %d\n", (int) int_vector_get_size(copy_v));

//int_vector_get_capacity
	printf("\tint_vector_get_capacity\n");

	printf("Capacity = %d\n", (int) int_vector_get_capacity(copy_v));

//int_vector_push_back
	printf("\tint_vector_push_back\n");

	printf("%d\n", int_vector_push_back(copy_v, item));

	printf("Capacity = %d Size = %d Data = %p\n", copy_v->capacity, copy_v->size, copy_v->data);
	for (int i = 0; i < copy_v->size; i++){
		printf("%d ", copy_v->data[i]);
	}
	printf("\n");

	printf("%d\n", int_vector_push_back(copy_v, item));

	printf("Capacity = %d Size = %d Data = %p\n", copy_v->capacity, copy_v->size, copy_v->data);
	for (int i = 0; i < copy_v->size; i++){
		printf("%d ", copy_v->data[i]);
	}
	printf("\n");

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
