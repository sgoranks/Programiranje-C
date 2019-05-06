/*
Pokazivaci.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x=5,y=1;
	int niz[10];
	int *p,*q;		/* p i q su pokazivaci na int */
	
	printf("x=%d   y=%d   p=%d   adresa x=%d   adresa y=%d\n",x,y,p,&x,&y);
	
	p=&x;   		/* p sada pokazuje na x */
	y=*p;   		/* y sada ima vrednost 5 */
	printf("Posle naredbi p=&x; i y=*p; imamo: x=%d  y=%d  p=%d\n",x,y,p);

	*p=0;   		/* x sada ima vrednost 0 */
	p=&niz[0]; 	   	/* p sada pokazuje na z[0] */
	printf("Posle naredbi *p=0; i p=&niz[0]; imamo: x=%d  y=%d  p=%d\n",x,y,p);

	p=&y;			/* p sada pokazuje na y */
	*p=*p+10;		/* uvecavamo vrednost y za 10 */
	printf("Posle naredbi p=&y; i *p=*p+10; imamo: x=%d  y=%d  p=%d\n",x,y,p);
	
	x=*p+3;			/* x sada ima vrednost y+3 */
	printf("Posle naredbe x=*p+3; imamo: x=%d  y=%d  p=%d\n",x,y,p);
	
	*p+=1;			/* uvecava vrednost na adresi p za 1 */
	printf("Posle naredbe *p+=1; imamo: x=%d  y=%d  p=%d\n",x,y,p);
	
	++*p;			/* uvecava vrednost na adresi p za 1 */
	printf("Posle naredbe ++*p; imamo: x=%d  y=%d  p=%d\n",x,y,p);
	
	(*p)++;			/* uvecava vrednost na adresi p za 1 */
	printf("Posle naredbe (*p)++; imamo: x=%d  y=%d  p=%d\n",x,y,p);
	
	q=p;			/* dodeljivanje vrednosti jednog pokazivaca drugom */
	printf("Posle naredbe q=p; imamo: x=%d  y=%d  q=%d\n",x,y,q);
	
	(*q)--;			/* umanjuje vrednost na adresi q za 1 */
	printf("Posle naredbe (*q)--; imamo: x=%d  y=%d  q=%d\n",x,y,q);
	
	return 0;
}
