//12.4
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sid=0;
	char lgrade;
    FILE *fp;
    fp=fopen("letter.txt","w");
    printf("Add records to file Student_id (4) Letter Grade:\n");
    
	if(fp!=NULL){//Eðer dosya acildiysa
		while(sid!=-999){
			scanf("%d %c",&sid,&lgrade);
    		if(sid!=-999)
			fprintf(fp,"%d %c\n",sid,lgrade);
		}
    }
	 fclose(fp);
	 return 0;
	 
}
