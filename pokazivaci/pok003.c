/*
Pokazivaci.
*/

#include <stdio.h>
#include <stdlib.h>

void zameni_pogresno(int a,int b)	/* POGRESNO */
{
	int pom;
	
	pom=a;
	a=b;
	b=pom;
}

//Zamena vrednosti dve promenljive.
void zameni(int *pa,int *pb)		/* ISPRAVNO */
{
	int pom;
	
	pom=*pa;
	*pa=*pb;
	*pb=pom;
}

int main(int argc, char *argv[]) {
	int x=10,y=50;
	
	printf("Pre zamene: x=%d  y=%d\n",x,y);
	zameni_pogresno(x, y);
	printf("Posle zamene (neispravna funkcija): x=%d  y=%d\n",x,y);
	zameni(&x,&y);
	printf("Posle zamene (ispravna funkcija): x=%d  y=%d\n",x,y);
			
	return 0;
}
