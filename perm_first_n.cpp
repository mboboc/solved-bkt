/*
*	Boboc Madalina
*	-- program that does permutations of a number --
*/

#include "header.h"

bool check_perm(int pos, int *solution) {
	for (int i = 0; i <= pos; i++) {
		for (int j = i + 1; j <= pos; j++) {
			if (solution[i] == solution[j])
				return false;
		}
	}

	return true;
}

void perm_first_n(int n, int *solution, int pos) {
	if (pos == n) {
		print_array(solution, n);
	} else {
		for (int i = 1; i <= n; i++) {
			solution[pos] = i;
			if (check_perm(pos, solution)) {
				perm_first_n(n, solution, pos + 1);
			}
		}
	}
}