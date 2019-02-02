#include <stdio.h>// Question no. 3(c)
#include <conio.h>
#include <stdlib.h> // For exit(0) function
 
void main()
{
   char ch, source_file[20], target_file[20];
   FILE *source, *target;
 
   source = fopen("INPUT.txt", "r");  // INPUT.txt file ta BIN e rakhte hobe
 
   if( source == NULL )
   {
      printf("\nINPUT.txt File Does not Found.");
	  exit(0);
      
   }
 
   target = fopen("output.txt", "w"); //output.txt file ta BIN e rakhte hobe
 
   if( target == NULL )
   {
      fclose(source);
      printf("\noutput.txt File Does not Found.");
	  exit(0);
   }
 
   while( ( ch = fgetc(source) ) != EOF )
      fputc(ch, target);
 
   printf("File copied successfully.\n");
   fclose(source);
   fclose(target); 
   
   getch();
}