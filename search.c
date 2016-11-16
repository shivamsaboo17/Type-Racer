//#include<stdio.h>
//#include<string.h>
///#include<stdlib.h>
char getch();
int loading();
int search()
{
loading();
int flag=0;
char * s1=NULL;
char * s2=NULL;
char * s3=NULL;
char * s4=NULL;char ch;
s1=malloc(100*sizeof(char));
s2=malloc(100*sizeof(char));
s3=malloc(100*sizeof(char));
s4=malloc(100*sizeof(char));char c;int i=0;
FILE * fp;FILE * fp1;
loading();
printf("\t\t\t\t  SIGN IN\n");
printf("\n\n\n\n\n");
printf("Enter the username\n");
scanf("%s",s1);

printf("Enter the password\n");
//scanf("%s",s2);
while(1)
{
//scanf("%c",&c[i]);
c=getch();
if(c=='\n')
{s2[i]='\0';
break;
}
else
s2[i]=c;


printf("*");
i++;
}
printf("\n");
s3=strcat(s1,s2);
//printf("%s",s3);
fp=fopen("up.txt","r");
while(!feof(fp))
{
fscanf(fp,"%s\n",s4);
//printf("%s\n",s4);
if(strcmp(s4,s3)==0)
{
flag=1;break;
}

}
if(flag==1)
{
printf("Account found!\n");
if(acc!=0.0&&speed!=0.0)
{
fp1=fopen(strcat(s1,"stat.txt"),"a");
time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char s[64];
    strftime(s, sizeof(s), "%c", tm);
fprintf(fp1,"%d\t%f\t%s\n",(int)speed,acc,s);
fclose(fp1);
printf("\nStats saved!!\n");
acc=0.0;
speed=0.0;

printf("\nPress 1 to try another lesson\nPress 2 to exit to main menu\n");
char tr=getch();
if(tr=='1')
{
clear();
accuracy();
}
else
{
clear();
main();
}
}

//strcpy(r,s1);
sleep(2);
clear();

accuracy();


}
else
{
printf("\nAccount not found\n");
printf("Dont have an account??\nSign up now! Press 1 to create a new account\n2 to sign in");
 ch=getch();
if(ch=='1')
{clear();
newacct();
}
else
{clear();
search();
}}
return 0;
}


