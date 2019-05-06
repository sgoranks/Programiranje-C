/*
Citanje stringova iz tekstualnog fajla.
Vrsi desno poravnanje stringova.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 1000
#define LINELENGTH 120
#define CH ' '
/*
Izbacuje '\n' iz stringa.
*/
void remove_nl(char* s) {
	int n;
	
	n=strlen(s);
	if (s[n-1]=='\n') s[n-1]='\0';
}

/*
Dodaje '\n' na kraju stringa.
*/
void add_nl(char* s) {
	int n;
	
	n=strlen(s);
	s[n]='\n';
	s[n+1]='\0';
}

/*
Prebrojava blanko znake u stringu.
Prepostavlja se da string ima po jedan blanko znak
izmedju dve reci.
*/
int numblstr(char* s) {
	int n,i,b=0;
	
	n=strlen(s);
	for (i=0;i<n;i++) {
		if (s[i]==' ') b++;
	}
	return b;
}

/*
LEVO PORAVNANJE
d - ukupna duzina reda
c - karakter koji se dodaje sleva
s1 - ulazni string
s2 - izlazni string
dodaj - ako je 0 ne dodaje zavrsne karaktere, u suprotnom dodaje     
*/
void align_left(int d, char c, char* s1, char* s2,char dodaj) {
	int n,i;
	
	s2[0]='\0';
	strcat(s2,s1);
	n=strlen(s2);
	if (dodaj) {
		for (i=n;i<d;i++) s2[i]=c;
		s2[i]='\0';		
	}
}

/*
CENTRIRANJE
d - ukupna duzina reda
c - karakter koji se dodaje sleva
s1 - ulazni string
s2 - izlazni string
*/
void align_center(int d, char c, char* s1, char* s2) {
	int n,i;
	
	n=(d-strlen(s1))/2;
	for (i=0;i<n;i++) s2[i]=c;
	s2[i]='\0';
	strcat(s2,s1);
	n=strlen(s2);
	for (i=n;i<d;i++) s2[i]=c;
	s2[i]='\0';
}

/*
DESNO PORAVNANJE
d - ukupna duzina reda
c - karakter koji se dodaje sleva
s1 - ulazni string
s2 - izlazni string
*/
void align_right(int d, char c, char* s1, char* s2) {
	int n,i;
	
	n=d-strlen(s1);
	for (i=0;i<n;i++) s2[i]=c;
	s2[i]='\0';
	strcat(s2,s1);
}

/*
JUSTIFY PORAVNANJE
d - ukupna duzina reda
c - karakter koji se dodaje sleva
s1 - ulazni string
s2 - izlazni string
*/
void align_just(int d, char c, char* s1, char* s2) {
	int n,m,i,bb,b=0,j=0,k;
	int b1; //Koliko treba dodati izmedju dve reci
	int b2; //Broj poslednjih blankova
	
	n=strlen(s1);
	if (d>n) {
		m=d-n;	
		bb=numblstr(s1);
		if (bb>0) {
			b1=m/bb; b2=m%bb;
			for (i=0;i<n;i++) {		
				if (s1[i]!=' ') s2[j++]=s1[i];
				else {
					s2[j++]=s1[i];					
					for (k=0;k<b1;k++) s2[j++]=c;
					if (bb-b<=b2) s2[j++]=c;
					b++;
				}
			}
			s2[j]='\0';			
		} else strcpy(s2,s1);
	} else strcpy(s2,s1);	
}

/*
Glavna funkcija.
*/
void obradi() {
    FILE *fpin,*fpoutleft,*fpoutcenter,*fpoutright,*fpoutjust;
    char str1[MAXCHAR],str2[MAXCHAR];
    //char* fnin="tekst.txt";
    char* fnin="t.txt";
    char* fnoutleft="left.txt";
    char* fnoutright="right.txt";
    char* fnoutcenter="center.txt";
    char* fnoutjust="just.txt";
 
    fpin=fopen(fnin,"r");
    fpoutleft=fopen(fnoutleft,"w");
    fpoutright=fopen(fnoutright,"w");
    fpoutcenter=fopen(fnoutcenter,"w");
    fpoutjust=fopen(fnoutjust,"w");
    if (fpin==NULL){
        printf("Ne mogu da otvorim fajl %s",fnin);        
    }
    else {
    	printf("Obrada...\n\n");
    	printf("Procitani redovi:\n");
	    while (fgets(str1,MAXCHAR,fpin)!=NULL) {
	    	remove_nl(str1);
	    	puts(str1);
			align_left(LINELENGTH,CH,str1,str2,1); add_nl(str2); fputs(str2,fpoutleft);
			align_center(LINELENGTH,CH,str1,str2); add_nl(str2); fputs(str2,fpoutcenter);
	    	align_right(LINELENGTH,CH,str1,str2); add_nl(str2); fputs(str2,fpoutright);
	    	align_just(LINELENGTH,CH,str1,str2); add_nl(str2); fputs(str2,fpoutjust);
		}
		printf("\nKraj.\n");	    	    	
	}
	fclose(fpin);
	fclose(fpoutleft);
	fclose(fpoutcenter);
	fclose(fpoutright);
	fclose(fpoutjust);	
}

int main(int argc, char *argv[]) {
	obradi();
	
	return 0;
}
