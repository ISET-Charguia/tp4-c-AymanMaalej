/*
 ============================================================================
 Name        : TP4Ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, d, r, T[100], i, j;
	do {
		printf("donner un nbre decimale:");
		fflush(stdout);
		scanf("%d", &x);
	} while (x <= 0);
	d = x;
	i = 0;
	do {
		r = d % 2;
		d = d / 2;
		T[i] = r;
		i++;
	} while (d != 0);
	for (j = i - 1; j >= 0; j--)
		printf("%d", T[j]);
}
