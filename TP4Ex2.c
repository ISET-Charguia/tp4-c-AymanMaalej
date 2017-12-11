/*
 ============================================================================
 Name        : TP4Ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int max = 100;
	int m, j, n, i, T[max], TP[max], TN[max];
	do {
		printf("donner le nbre de case du tab :");
		fflush(stdout);
		scanf("%d", &n);
	} while (n <= 0 || n > max);
	for (i = 0; i < n; i++) {
		printf("donner le %d case :", i + 1);
		fflush(stdout);
		scanf("%d", &T[i]);
	}
	m = 0;
	j = 0;
	for (i = 0; i < n; i++) {
		if (T[i] > 0) {
			TP[m] = T[i];
			m++;
		} else {
			TN[j] = T[i];
			j++;
		}
	}
	printf("le TP est :\n");
	for(i=0;i<m;i++)
		printf("%d \n",TP[i]);
	printf("le TN est :\n");
	for(i=0;i<j;i++)
		printf("%d \n",TN[i]);
}
