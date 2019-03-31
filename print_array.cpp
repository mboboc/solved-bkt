/*
 *	Boboc Madalina
 *	-- prints an array --
 */
#include "header.h"

void print_array(int *array, int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}