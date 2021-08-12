//12.3
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sid,i,n;
	int gr;
    FILE *fp;
    fp=fopen("grade.txt","w");
    printf("How many students in class?");
    scanf("%d",&n);
    printf("Add records to file Student_id (4) Grade out of 100 :\n");
    
	if(fp!=NULL){//Eðer dosya acildiysa
		for(i=0;i<n;i++){
			scanf("%d %d",&sid,&gr);
    		fprintf(fp,"%d %d\n",sid,gr);
		}
    }
	 fclose(fp);
	 return 0;
	 
}
