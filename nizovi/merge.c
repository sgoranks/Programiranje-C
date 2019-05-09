/*
Ucitati dva niza uredjena u rastuci poredak. Napraviti treci niz
od dva ulazna ali tako da poredak bude sacuvan.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX	1000

//Prikazuje niz od x elemenata
void prikazi_niz(int niz[],int x) {
	int i;
	
	for (i=0;i<x;i++) printf("%d ",niz[i]);
	printf("\n");
}

int main(int argc, char *argv[]) {
	int n,m,q,i,j,k;
	int a[MAX],b[MAX],c[MAX];
	
	//Unos broja elemenata
	printf("Broj elemenata prvog niza: "); scanf("%d",&n);
	printf("Broj elemenata drugog niza: "); scanf("%d",&m);
	
	//Unos elemenata prvog niza
	printf("Unesi elemente prvog niza u rastucem poretku:\n");
	for (i=0;i<n;i++) {
		printf("a[%d]=",i); scanf("%d",&a[i]);	
	}
	
	//Unos elemenata drugog niza
	printf("Unesi elemente drugog niza u rastucem poretku:\n");
	for (i=0;i<m;i++) { 
		printf("b[%d]=",i); scanf("%d",&b[i]);
	}
		
	//Ubacivanje elemenata u treci niz
	q=n+m; i=0; j=0; 
	for (k=0;k<q;k++) {
		if (i<n) {
			if (j<m) {
				if (a[i]<b[j]) c[k]=a[i++]; else c[k]=b[j++];
			} else c[k]=a[i++];
		} else if (j<m) c[k]=b[j++];
	}
	
	//Prikazivanje nizova	
	printf("Elementi prvog niza:\n");
	prikazi_niz(a,n);
	printf("Elementi drugog niza:\n");
	prikazi_niz(b,m);
	printf("Elementi treceg niza:\n");
	prikazi_niz(c,q);	

	return 0;
}
