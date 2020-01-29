#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int ch;
int cdigit=0;
int cspace=0;
int cnewline=0;
int calpha=0;

FILE* filePointer;
FILE* fileptr;
filePointer = fopen("file.txt", "r");

do{
 ch=fgetc(filePointer);
 if(isdigit(ch))
  cdigit++;
 if(ch==' ')
  cspace++;
 if(ch=='\n')
  cnewline++;
 if(isalpha(ch))
 calpha++;
}while(ch!=EOF);
printf("Digits:%d\n Spaces:%d\n NewLine:%d\n Alphabets:%d\n",cdigit,cspace,cnewline,calpha);

fileptr = fopen("file1.txt","w");
fprintf(fileptr,"%s","No of digits:");
fprintf(fileptr,"%d\n",cdigit);
fprintf(fileptr,"%s","No of spaces:");
fprintf(fileptr,"%d\n",cspace);
fprintf(fileptr,"%s","No of newlines:");
fprintf(fileptr,"%d\n",cnewline);
fprintf(fileptr,"%s","No of alphabets:");
fprintf(fileptr,"%d\n",calpha);

fclose(fileptr);
fclose(filePointer);

}
