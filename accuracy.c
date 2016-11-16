//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include <termios.h>
//#include <unistd.h>
//#include<time.h>
//#define clear() printf("\033[H\033[J")
char getch();
//char getch(){
    /*#include <unistd.h>   //_getch*/
    /*#include <termios.h>  //_getch*/
    /*char buf=0;
    struct termios old={0};
    fflush(stdout);
    if(tcgetattr(0, &old)<0)
        perror("tcsetattr()");
    old.c_lflag&=~ICANON;
    old.c_lflag&=~ECHO;
    old.c_cc[VMIN]=1;
    old.c_cc[VTIME]=0;
    if(tcsetattr(0, TCSANOW, &old)<0)
        perror("tcsetattr ICANON");
    if(read(0,&buf,1)<0)
        perror("read()");
    old.c_lflag|=ICANON;
    old.c_lflag|=ECHO;
    if(tcsetattr(0, TCSADRAIN, &old)<0)
        perror ("tcsetattr ~ICANON");
    //printf("%c\n",buf);
    return buf;
 }*/
int accuracy()
{//s6=stry;


//loading();
int i=0;float errors=0.0;int y;
char * s1=NULL;char c;s1=malloc(100000*sizeof(char));
time_t start_t, end_t;
   double diff_t;
char x;
FILE *fp5;
//char * str=NULL;
//str=malloc(100000*sizeof(char));
//loading();
clear();
//printf("\n\n\n\n\n\n");
char co[100][100]={"Hi","Hello","OLÀ","Bonjour","Hallo","Namaste"};

int b=0;
for(b=0;b<6;b++)
{
printf("\n\n\n\n\n\n\n\n");
printf("\t\t\t       %s, Typer!\n",co[b]);
usleep(400000);
clear();
}

printf("\t\t  SELECT FROM THE GIVEN 5 LESSONS TO BEGIN\n\n\n\n");
printf("\t\t 1. A Lesson to be Remembered\n\n");
printf("\t\t 2. Literature\n\n");
printf("\t\t 3. Communication\n\n");
printf("\t\t 4. The Secret of Success\n\n");
printf("\t\t 5. Old Men\n");
//scanf("%d",&x);
x=getch();
switch(x){

	case '1':
	fp5=fopen("lesson1.txt","r");
	fgets(s1,10000,fp5);
	printf("\n%s",s1);
	fclose(fp5);
	break;
 	
case '2':
fp5=fopen("lesson2.txt","r");
fgets(s1,10000,fp5);
	printf("\n%s",s1);
	fclose(fp5);
	break;
case '3':
fp5=fopen("lesson3.txt","r");
fgets(s1,10000,fp5);
	printf("\n%s",s1);
	fclose(fp5);
	break;
case '4':
fp5=fopen("lesson4.txt","r");
fgets(s1,10000,fp5);
	printf("\n%s",s1);
	fclose(fp5);
	break;

case '5':
fp5=fopen("lesson5.txt","r");
fgets(s1,10000,fp5);
	printf("\n%s",s1);
	fclose(fp5);
	break;
default:
clear();
accuracy();
}

  
   for( y=5;y>=1;y--)

{
clear();
 printf("\t\t  Starting of the program in %d...\n",y);

sleep(1);

}
clear();
   time(&start_t);

//s1=malloc(10000*sizeof(char));
//s1= "It seems to me what is called for is an exquisite balance between two conflicting needs: the most skeptical scrutiny of all hypotheses that are served up to us and at the same time a great openness to new ideas... If you are only skeptical, then no new ideas make it through to you.";
printf("\n\t\t\t  Type the given sentence :\n\n\n\n%s",s1);
int len=strlen(s1);
if(len%80==0)
len=len/80;
else
len=(int)((len/80)+1);
int tr;
for(tr=1;tr<=len;tr++)
printf("\x1B[1m\033[A\x1B[30m");
//printf("Press enter to start typing");
//scanf("%c\n",&a);
while(i<strlen(s1))
{
c=getch();
if(c==s1[i])
{

printf("%c", c);
i++;
}
else
{
errors++;
}

}
time(&end_t);
diff_t = difftime(end_t, start_t);
 speed;
int l=strlen(s1);
float f;
f=l/5;
speed=(f/diff_t)*60;
printf("\x1B[22m\x1B[39m");
printf("\n\n");
printf("\t\t\t\tWell done!\n");
sleep(2);
clear();
printf("\n\n\n\n\n\n");

  // printf("Execution time = %f\n", diff_t);
   printf("\t\t\t\tWPM gross: %d\n",(int)speed);
   //printf("Exiting of the program...\n");
 acc=errors*100/strlen(s1);
acc=100-acc;

printf("\n\t\t\t\tThe accuracy is: %.001f\n",acc);
printf("\n\t\t  Press 1 to try again and 2 to save statistics");
char d;
d=getch();
if(d=='1')
{
clear();
accuracy();
}
else
{
clear();
printf("\n\tYou will be redirected to sign in page. Sign in to save statistics\n");
sleep(3);

search();
}
//FILE * fp3;
/*r=strcat(r,"stat.txt");
fp3=fopen(r,"a");
time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char p[64];
    strftime(p, sizeof(p), "%c", tm);
fprintf(fp3,"\n%d\t%f\t%s",(int)speed,acc,p);*/
return 0;
}


					
					
						
		


