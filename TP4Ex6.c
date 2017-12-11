/*
 ============================================================================
 Name        : TP4Ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {
	int n1, j, k,  n2, i, t1[20], t2[20], t3[40];
	do {
		printf(" Donner N le nombre d'entier N1/N2 : ");
		fflush(stdout);
		scanf("%d/%d", &n1, &n2);
		fflush(stdout);
		fflush(stdin);
	} while ((n1 > 20) || (n2 > 20));
	for (i = 0; i < n1; i++) {
		printf(" Donner une valeur de t1[%d] : ", i + 1);
		fflush(stdout);
		scanf("%d", &t1[i]);
	}
	for (i = 0; i < n2; i++) {
		printf(" Donner une valeur de t2[%d] : ", i + 1);
		fflush(stdout);
		scanf("%d", &t2[i]);
	}
	j = 0;
	i = 0;
	k = 0;
	do {
		if (t1[i] < t2[j]) {
			t3[k] = t1[i];
			i++;
			k++;
		} else {
			t3[k] = t2[j];
			j++;
			k++;
		}

		if (t2[j] < t1[i]) {
			t3[k] = t2[j];
			j++;
			k++;
		} else {
			t3[k] = t1[i];
			i++;
			k++;
		}
		if (t2[j] == t1[i]) {
			t3[k] = t2[j];
			t3[k + 1] = t1[i];
			j++;
			i++;
			k += 2;
		}
	} while (k < n1 + n2);

	for (i = 0; i < n1 + n2; i++) {
		printf("%d \n", t3[i]);
		fflush(stdout);
	}
}
