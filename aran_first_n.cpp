/*
 *	Boboc Madalina
 *	-- computes the arangements of the first n numbers starting
 *	with 1 taken k --
 */
#include "header.h"
bool check_aran(int pos, int *solution, int n) {
	for (int i = 0; i <= pos; i++) {
		for (int j = i + 1; j <= pos; j++) {
			if (solution[i] == solution[j])
				return false;
		}
	}
	return true;
}

void aran_first_n(int n, int k, int *solution, int pos) {
	if (pos == k) {
		print_array(solution, k);
	} else {
		for (int i = 1; i <= n; i++) {
			solution[pos] = i;
			if (check_aran(pos, solution, n)) {
				aran_first_n(n, k, solution, pos + 1);
			}
		}
	}
}