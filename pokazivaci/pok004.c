/*
Pokazivaci.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {	
	char x=10,y=20,z=30;
	char c='A';
	char string[]="ABCD";
	char *p,*q,*r,*s,*t;
	
	p=&x; q=&y; r=&z; s=&c; t=string;
	printf("adr x=%d adr y=%d adr z=%d adr c=%d adr string=%d\n",p,q,r,s,t);
	printf("%s\n",string);
	*(t+2)=0;
	printf("%s\n",string);
	q=p-50;
	while (p>q) {
		printf("adr=%d   vrednost=%d\n",p,*p);
		p--;
	}
			
	return 0;
}
