#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	FILE *f1,*f2,*f3,*f4;
	f1=fopen("input.txt","r"); 
	f3=fopen("symtab.txt","w");
	f4=fopen("output.txt","w");
	int locctr,startadr;
	char label[20],opcode[20],operand[20];
	
	fscanf(f1,"%s %s %s",label,opcode,operand);

	if(strcmp(opcode,"START")==0)
	{
		startadr=strtol(operand,NULL,16);
		fprintf(f4,"%X\t%s\t%s\t%s\n",startadr,label,opcode,operand); 
	}
	else
		startadr=0;
	locctr=startadr;

	fscanf(f1,"%s %s %s",label,opcode,operand);
	while(strcmp(opcode,"END")!=0)
	{
		fprintf(f4,"%X\t%s\t%s\t%s\n",locctr,label,opcode,operand);
		
		if(strcmp(label,"-")!=0)
		{
			fprintf(f3,"%s\t%X\n",label,locctr);
		}
		
		char tempcode[20],tempval[20];
		f2=fopen("optab.txt","r");
		fscanf(f2,"%s %s",tempcode,tempval);
		while(!feof(f2))
		{
			if(strcmp(opcode,tempcode)==0)
			{
				locctr+=3;
				break;
			}
			fscanf(f2,"%s %s",tempcode,tempval);
		}
		fclose(f2);

		if(strcmp(opcode,"WORD")==0)
		{
			locctr+=3;
		}

		if(strcmp(opcode,"RESW")==0)
		{
			locctr = locctr+(3*(strtol(operand,NULL,10)));
		}

		if(strcmp(opcode,"RESB")==0)
		{
			locctr = locctr + strtol(operand,NULL,10);
		}

		if(strcmp(opcode,"BYTE")==0)
		{
			if(operand[0]=='X') 
				locctr++;
			else
				locctr = locctr + strlen(operand)-3;
		}
		fscanf(f1,"%s %s %s",label,opcode,operand);
	}
	fprintf(f4,"%X\t%s\t%s\t%s\n",locctr,label,opcode,operand);
	fclose(f1);
	fclose(f3);
	fclose(f4);
}
