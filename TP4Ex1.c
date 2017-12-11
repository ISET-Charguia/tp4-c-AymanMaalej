/*
 ============================================================================
 Name        : TP4Ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	int max=100;
	int n,s,i,T[max];
	do
	{
		printf("donner le nbre de case du tab :");
		fflush(stdout);
				scanf("%d",&n);
	}while(n<=0 || n>max);
	s=0;
	for(i=0;i<n;i++)
	{
		printf("donner le %d case :",i+1);
		fflush(stdout);
		scanf("%d",&T[i]);
	}
	for(i=0;i<n;i++)
		s=s+T[i];
	printf("le moy =%f",s/(0.0+n));
}
