#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	FILE *f1,*f2;
	char label[20],opcode[20],operand[20];
	int textlen =0,len;
	char textrec[80],saddress[20],objcode[20],temp[80],startaddr[20];
	printf("Object Program:\n");
	f1 = fopen("output2.txt","r");
	f2 = fopen("length.txt","r");
	fscanf(f2,"%x",&len);
	fscanf(f1,"%s %s %s %s %s",saddress,label,opcode,operand,objcode);
	strcpy(startaddr,saddress);
	printf("H %s 00%s %06X\n",label,saddress,len);
	fscanf(f1,"%s %s %s %s %s",saddress,label,opcode,operand,objcode);
	strcpy(temp,"");
	strcpy(textrec,"T 00");
	strcat(textrec,saddress);
	while(strcmp(opcode,"END")!=0){
		if((textlen==30)||(strcmp(opcode,"RESW")==0)||(strcmp(opcode,"RESB")==0)||(((strlen(objcode)/2)+textlen)>30))	{
				printf("%s %02X %s\n",textrec,textlen,temp);
				textlen = 0;
				strcpy(temp,"");
				strcpy(textrec,"T 00");
				fscanf(f1,"%s %s %s %s %s",saddress,label,opcode,operand,objcode);
				if(strcmp(objcode,"-")!=0){
					strcat(textrec,saddress);
					strcat(temp,objcode);
					strcat(temp," ");
					textlen = textlen+(strlen(objcode)/2);
				}
		}
		else{
			textlen = textlen + (strlen(objcode)/2);
			strcat(temp,objcode);	
			strcat(temp," ");
		}
		fscanf(f1,"%s %s %s %s %s",saddress,label,opcode,operand,objcode);
	}
	if(textlen!=0){
		printf("%s %x %s\n",textrec,textlen,temp);		
	}
	printf("E 00%s\n",startaddr);
	fclose(f1);
	fclose(f2);
	
}
