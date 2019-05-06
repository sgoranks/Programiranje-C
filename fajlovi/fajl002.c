/*
Citanje karaktera iz tekstualnog fajla.
*/
#include <stdio.h>
#include <stdlib.h>

#define MAXCHAR 1000
int main(int argc, char *argv[]) {
	FILE *fp;
	char* imefajla="a.txt";
	char c;

	//Otvaranje fajla
	fp=fopen(imefajla,"r");

	// If file opened successfully, then write the string to file
	if (!fp)
	{
		printf("Nije moguce otvaranje fajla.\n");
	}
	else
	{
		while ((c=fgetc(fp))!=EOF)
    	{
        	printf("%c",c);
    	}		
	}
	
	//Zatvaranje fajla
	fclose(fp);
	
	return(0);
}
