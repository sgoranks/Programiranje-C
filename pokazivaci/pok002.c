/*
Pokazivaci.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,x;
	int niz[5]= {1,2,3,4,5};
	int *p,*q;		/* p i q su pokazivaci na int */
	
	printf("Elementi niza: ");
	for (i=0;i<5;i++) printf("%d ",niz[i]); printf("\n");

	p=&niz[0];		/* p sada pokazuje na niz[0] */	
	printf("Posle naredbe p=&niz[0]; imamo: adr niza=%d  p=%d\n",&niz[0],p);
	
	x=*p;			/* x=niz[0] */
	printf("Posle naredbe x=*p; imamo: niz[0]=%d  x=%d\n",niz[0],x);
	
	p++;			/* sada je pointer pozicioniran na niz[1] */
	printf("Posle naredbe p+=1; imamo: niz[1]=%d  *p=%d\n",niz[1],*p);
	
	*p+=10;			/* niz[1]=niz[1]+10 */
	printf("Posle naredbe *p+=10; imamo: niz[1]=%d  *p=%d\n",niz[1],*p);

	printf("Elementi niza: ");
	for (i=0;i<5;i++) printf("%d ",niz[i]); printf("\n");
	
	q=niz;			/* q sada pokazuje na niz[0] */
	printf("Posle naredbe q=niz; imamo: adr niza=%d  q=%d\n",&niz[0],q);
	
	x=*(q+2); 		/* sadrzaj elementa na poziciji niz[2] */
	printf("Posle naredbe x=*(p+2); imamo: niz[2]=%d  x=%d\n",niz[2],x);

	
	return 0;
}
