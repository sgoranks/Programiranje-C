/*
Tipovi podataka - zauzece memorije.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char c1=1,c2=2;
	short s1=1,s2=2; 
	int i1=1,i2=2;
	long g1=1,g2=2;
	long long n1=1,n2=2;
	float f1=1,f2=2;
	double d1=1,d2=2;
	long double b1=1,b2=2;
	
	printf("CHAR: (ZAUZIMA 1 BAJT)\n");
	printf("c1=%d se nalazi na adresi %d\n",c1,&c1);
	printf("c2=%d se nalazi na adresi %d\n",c2,&c2);
	printf("\nSHORT: (ZAUZIMA 2 BAJTA)\n");
	printf("s1=%d se nalazi na adresi %d\n",s1,&s1);
	printf("s2=%d se nalazi na adresi %d\n",s2,&s2);
	printf("\nINT: (ZAUZIMA 4 BAJTA)\n");
	printf("i1=%d se nalazi na adresi %d\n",i1,&i1);
	printf("i2=%d se nalazi na adresi %d\n",i2,&i2);
	printf("\nLONG: (ZAUZIMA 4 BAJTA)\n");
	printf("g1=%ld se nalazi na adresi %d\n",g1,&g1);
	printf("g2=%ld se nalazi na adresi %d\n",g2,&g2);
	printf("\nLONG LONG: (ZAUZIMA 8 BAJTOVA)\n");
	printf("n1=%lld se nalazi na adresi %d\n",n1,&n1);
	printf("n2=%lld se nalazi na adresi %d\n",n2,&n2);
	printf("\nFLOAT: (ZAUZIMA 4 BAJTA)\n");
	printf("f1=%.2f se nalazi na adresi %d\n",f1,&f1);
	printf("f2=%.2f se nalazi na adresi %d\n",f2,&f2);
	printf("\nDOUBLE: (ZAUZIMA 8 BAJTOVA)\n");
	printf("d1=%.2lf se nalazi na adresi %d\n",d1,&d1);
	printf("d2=%.2lf se nalazi na adresi %d\n",d2,&d2);
	printf("\nLONG DOUBLE: (ZAUZIMA 16 BAJTOVA)\n");
	printf("b1=%.2llf se nalazi na adresi %d\n",b1,&b1);
	printf("b2=%.2llf se nalazi na adresi %d\n",b2,&b2);	

	return 0;
}
