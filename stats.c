char getch();

int stats(){
	loading();
	printf("Sign in to see your statistics\n");
	int flag=0;char ch1;
	char * s1=NULL;
	char * s2=NULL;
	char * s3=NULL;
	char * s4=NULL;char ch;char * s5=NULL;
	s5=malloc(100*sizeof(char));
	s1=malloc(100*sizeof(char));
	s2=malloc(100*sizeof(char));
	s3=malloc(100*sizeof(char));
	s4=malloc(100*sizeof(char));
	FILE * fp;FILE * fp1=NULL;int a;char c11;int i=0;
	float b;
	char * c=NULL;
	c=malloc(100000*sizeof(char));
	printf("\t\t\t\t  SIGN IN\n");
	printf("\n\n\n\n\n");
	printf("Enter the username\n");
	scanf("%s",s1);
	printf("Enter the password\n");
	//scanf("%s",s2);
	while(1){
		//scanf("%c",&c[i]);
		c11=getch();
		if(c11=='\n'){
			s2[i]='\0';
			break;
		}
		else
			s2[i]=c11;
		printf("*");
		i++;
	}
	s3=strcat(s1,s2);
	//printf("%s",s3);
	fp=fopen("up.txt","r");
	while(!feof(fp)){
		fscanf(fp,"%s\n",s4);
		//printf("%s\n",s4);
		if(strcmp(s4,s3)==0){
		flag=1;break;
		}
	}
	if(flag==1){
		//printf("\nLOADING YOUR STATS...\n");
		//sleep(2);
		//clear();
		char co[100][100]={";p",";)",":|",":)",":p",":o"};

		int b=0;
		for(b=0;b<6;b++){
			clear();
			printf("\n\n\n\n\n\n\n\n");
			printf("\t\t    Brace yourself...fetching your stats!\n");
			printf("\t\t\t            %s\n",co[b]);
			usleep(400000);
			clear();
		}

		s5=strcat(s1,"stat.txt");
		//printf("%s",s5);
		fp1=fopen(s5,"r");
		printf("\t\t\t         Statistics\n\n");
		printf("\t\tSpeed\tAccuracy\tDate & Time\n\n");

		//fscanf(fp1,"%d\t%f",&a,&b)
		printf("\t\t");
		while(!feof(fp1)){
			//fgets(c,10000,fp1);
			//if(c[strlen(c)]!=EOF)
			fscanf(fp1,"%c",&ch1);
			printf("%c",ch1);
			if(ch1=='\n')
			printf("\n\t\t");
			//strcat(c,"\0");
		}
		printf("\n\n");
		printf("Press 1 to exit to main menu.");
		char po=getch();
		if(po=='1'){
			loading();
			main();
		}
	}
	else{
	printf("\nIncorrect username :(\n");
	sleep(1);
	stats();
	}
	return 0;
}

