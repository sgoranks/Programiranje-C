/*
Snimanje stringova u tekstualni fajl
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 1000
int main(int argc, char *argv[]) {
 FILE *fp;
 char filename[100];
 char writestr[100];
 char endl[3];

  endl[0]='\n'; endl[1]=0;
  // Read filename
  printf("Enter a filename :");
  gets(filename);
  
  // Read string to write
  printf("Enter the string to write :");
  gets(writestr);
  
  strcat(writestr,endl);
  
   // Open file in write mode
   fp = fopen(filename,"a");

   // If file opened successfully, then write the string to file
   if ( fp )
   {
	   fputs(writestr,fp);
   }
   else
   {
         printf("Failed to open the file\n");
   }
//Close the file
   fclose(fp);
   
return(0);
}
