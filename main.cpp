/*
*	Boboc Madalina
*	-- program that prints an array --
*/
#include "header.h"

void test_count_in_base() {
	int size;
	int base;
	int solution[20];

	cout << "Introduceti baza:\n";
	cin >> base;
	cout << "Introduceti size:\n";
	cin >> size ;
	count_in_base(size, solution, 0, base);
}

void test_perm_first_n() {
	int n;
	int solution[20];

	cout << "Introduceti n:\n";
	cin >> n;
	perm_first_n(n, solution, 0);
}

void test_aran() {
	int n;
	int k;
	int solution[20];

	cout << "Intorduceti n:\n";
	cin >> n;
	cout << "Introduceti k:\n";
	cin >> k;

	aran_first_n(n, k, solution, 0);
}



int main() {
	test_aran();
	return 0;
}