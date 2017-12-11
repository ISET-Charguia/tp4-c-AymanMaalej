/*
 ============================================================================
 Name        : TP4Ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int x, i, T1[10] ={  10, 20, 5, 8, 102, 56, 84, 59, 23, 24 }, T2[10] = { 52, 65, 87,
			15, 2, 9, 36, 12, 46, 97 }, T3[10];
	for (i = 0; i < 10; i++)
		T3[i] = T1[i];
	for (i = 0; i < 10; i++)
		T1[i] = T2[i];
	for (i = 0; i < 10; i++)
		T2[i] = T3[i];
	for (i = 0; i < 10; i++) {
		x = T1[i];
		T1[i] = T2[i];
		T2[i] = x;
	}
}
