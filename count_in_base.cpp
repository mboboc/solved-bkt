/*
*	Boboc Madalina
*	-- program that counts in a specific base with a defined size using
*	backtracking--
*/

#include "header.h"

bool check_count_in_base(int pos) {
	return true;
}

void count_in_base(int size, int *solution, int pos, int base) {
	if (pos == size) {
		print_array(solution, size);
	} else {
		for (int i = 0; i < base; i++) {
			solution[pos] = i;
			if (check_count_in_base(pos)) {
				count_in_base(size, solution, pos + 1, base);
			}
		}
	}
}