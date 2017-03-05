#include <stdio.h>
#include "IntVector.h"

int main()
{
	IntVector *v = int_vector_new(5);
	printf("Capacity = %d\nSize = %d\nData = %p\n", v->capacity, v->size, v->data);
	*v->data = 3;
	printf("%p\n", v->data);

	IntVector *copy_v = int_vector_copy(v);
	printf("Capacity = %d\nSize = %d\nData = %p\n", copy_v->capacity, copy_v->size, copy_v->data);
	printf("%p\n", copy_v->data);

	return 0;
}
