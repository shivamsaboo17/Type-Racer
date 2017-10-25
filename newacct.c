//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
int newacct()
{
	loading();
	char * s1=NULL;
	char * s2=NULL;
	char * s3=NULL;
	char * a=NULL;
	char * s4=NULL;
	const char * s6;
	s6=malloc(100*sizeof(char));
	s4=malloc(100*sizeof(char));
	int flag=0;
	s1=malloc(100*sizeof(char));
	s2=malloc(100*sizeof(char));
	s3=malloc(100*sizeof(char));
	a=malloc(100*sizeof(char));char c;int i=0;
	printf("\t\t\t\t  NEW ACCOUNT\n");
	printf("\n\n\n\n\n");
	printf("Enter username\n");
	scanf("%s",s1);

	 
	printf("Enter a password\n");
	//scanf("%s",s2);
	while(1){
		//scanf("%c",&c[i]);
		c=getch();
		if(c=='\n'){
			s2[i]='\0';
			break;
		}
		else
			s2[i]=c;
		printf("*");
		i++;
	}
	FILE * fp;FILE * fp1;
	fp1=fopen("up.txt","r");
	fclose(fp1);
	fp1=fopen("up.txt","a");
	fp=fopen("u.txt","r");
	while(!feof(fp)){
		fscanf(fp,"%s\n",s3);
		if(strcmp(s3,s1)==0){
			flag=1;
			break;
		}
	}
	fclose(fp);
	fp=fopen("u.txt","a");
	if(flag==1){
		printf("The username already exists pl try another one\n");
		sleep(2);
		clear();

		//scanf("%s",a);
		newacct();
	}
	else{
		fprintf(fp,"%s\n",s1);
		printf("\nAccount Created\n");
		clear();
		printf("\n\n\n\n\n\n\n\n");
		printf ("\t\t\t\t   DONE ;)\n");
		sleep(2);
		clear();

		fclose(fp);
	}
	fp1=fopen("up.txt","a");
	if(flag==0){
		printf("\n");
		fprintf(fp1,"%s\n",strcat(s1,s2));
		fclose(fp1);
		s4=strcat(s1,"stat.txt");
		//printf("%s\n",s4);
		fp1=fopen(s4,"a");
		//fprintf(fp1,"%c\n",'1');
		fclose(fp1);
		char * s5;
		s5=malloc(100*sizeof(char));
		s5=strcat(s1,"stat.txt");
		//printf("\n%s",s5);
		//printf("\n%s",s6);
		
		printf("\n");
		//sleep(1);
		printf("\n");
		//loading();
		printf("\n");

		main();
	}
	return 0;
}