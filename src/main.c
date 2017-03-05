#include <stdio.h>
#include "IntVector.h"

int main()
{
	size_t initial_capacity = 4;
	IntVector *arr = NULL;

	arr = int_vector_new(initial_capacity);

	printf("%d\n %d\n %p\n", arr -> capacity, arr -> size, arr -> data);
	return 0;
}
