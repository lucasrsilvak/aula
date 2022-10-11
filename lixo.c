#include <stdio.h>

int par(int x) {
	return !(x%2);
}

void estrela(int x) {
	int size    = x*5;

	int l_limit = 0;
	int m_limit = 0;

	// Ponta de Cima

	double j_limit = (9*x) * 3/2;
	if (par(x)) {
		j_limit = j_limit + 1;
	}
	double k_limit = 1;

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= j_limit; j++) {
			printf(" ");
		}
		j_limit -= 1;
		for (int k = 1; k <= k_limit; k++) {
			printf("*");
		}
		k_limit += 2;
		printf("\n");
	}

	// Triângulo Central

	int j_limit2 = j_limit + 1;

	k_limit = (k_limit-2)*3;
	int esperado = (int) k_limit;
	j_limit = 0;
	int print_space = 0;

	for (int i = 1; i <= size; i++) {
		if ((2*(int)(j_limit) + (int)(k_limit)) < (esperado - 1)) {
			printf(" ");
		}
		for (int j = 1; j <= j_limit; j++) {
			printf(" ");
		}
		j_limit += 2.15;
		for (int k = 1; k <= k_limit; k++) {
			printf("*");
		}
		if (par(k_limit)) {
			printf("*");
		}
		k_limit -= 4.3;
		printf("\n");
	}

	// Pernas

	j_limit = j_limit2 - 1;
	k_limit = (k_limit+4.3)/2 + 1;
	l_limit = 1;
	m_limit = k_limit;

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= j_limit; j++) {
			printf(" ");
		}
		j_limit -= 1;
		for (int k = 1; k <= k_limit; k++) {
			printf("*");
		}
		k_limit -= 1;
		for (int l = 1; l <= l_limit; l++) {
			printf(" ");
		}
		l_limit += 4;
		for (int m = 1; m <= m_limit; m++) {
			printf("*");
		}
		m_limit -= 1;
		printf("\n");
	}
}

int main() {
	printf("----- Estrela 2 ------\n");
	estrela(2);

	return 0;
}
