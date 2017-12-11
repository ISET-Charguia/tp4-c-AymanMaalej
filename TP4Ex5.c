/*
 ============================================================================
 Name        : TP4Ex5.c
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
	int l, p, k, m, min, j, i, n, x, test, T[max];
	printf("Bienvenue \n");
	fflush(stdout);
	do {
		do {

			printf("Voulez choisir quelque chose : \n");
			fflush(stdout);
			printf("0. Remlpir le Tableau \n");
			fflush(stdout);
			printf("1. Déterminer le minimum de ses éléments \n");
			fflush(stdout);
			printf(
					"2. Remplacer toutes les occurrences d’un entier x dans le tableau par un entier y \n");
			fflush(stdout);
			printf(
					"3. Insérer un entier x à une position p donnée du tableau, sans écraser son contenu. \n");
			fflush(stdout);
			printf(
					"4. Supprimer toutes les occurrences d’un entier x, du tableau, en décalant les éléments du tableau à chaque suppression. \n");
			fflush(stdout);
			printf("5. Quiter \n");
			fflush(stdout);
			printf("===> ");
			fflush(stdout);
			scanf("%d", &x);
		} while (x >= 6 || x < 0);
		test = 1;
		switch (x) {
		case 0: {
			printf("donenr le nbre de cases:");
			fflush(stdout);
			scanf("%d", &n);
			for (i = 0; i < n; i++) {
				printf("donenr la %d case :", i + 1);
				fflush(stdout);
				scanf("%d", &T[i]);
			}
			break;
		}
		case 1: {
			min = T[0];
			m = i;
			for (i = 0; i < n; i++)
				if (T[i] < min) {
					min = T[i];
					m = i;
				}
			printf("le min : T[%d]=%d", m + 1, min);

			;
			break;
		}
		case 2: {
			printf("donner un entier a changer :");
			fflush(stdout);
			scanf("%d", &l);
			printf("donner un entier a change avec :");
			fflush(stdout);
			scanf("%d", &k);
			for (i = 0; i < n; i++) {
				if (T[i] == l)
					T[i] = k;
				printf("le tableau est :\n");
				fflush(stdout);
				for (i = 0; i < n; i++) {
					printf("%d\n", T[i]);
				}
			}
		}
			;
			break;
		case 3:
			printf("donner un entier a inserer :");
			fflush(stdout);
			scanf("%d", &k);
			printf("donner la position a inserer :");
			fflush(stdout);
			scanf("%d", &p);
			for (i = n - 1; i >= p - 1; i--) {
				T[i + 1] = T[i];
			}
			n++;
			T[p - 1] = k;
			printf("le tableau est :\n");
			fflush(stdout);
			for (i = 0; i < n; i++) {
				printf("%d \n", T[i]);
			}
			;
			break;
		case 4:
			printf("donner un entier a supprimer :");
			fflush(stdout);
			scanf("%d", &m);
			for (i = 0; i < n; i++) {
				if (T[i] == m) {
					for (j = i; j < n; j++)
						T[j] = T[j + 1];
					i = -1;
					n--;
				}
			}
			printf("le tableau est :\n");
			fflush(stdout);
			for (i = 0; i < n; i++) {
				printf("%d \n", T[i]);
			}
			;
			;
			break;
		case 5:
			printf("Au revoir");
			test = 0;
			break;
		}
		printf("\n \n \n");
	} while (test);
}
