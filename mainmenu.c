#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<termios.h>
#include<unistd.h>
#include<string.h>
//char * stry=NULL;
//stry=malloc(100*sizeof(100));
float acc=0.0;float speed=0.0;
char getch();
int loading();
#define clear() printf("\033[H\033[J")
# include "newacct.c"
# include "search.c"
#include "accuracy.c"
#include "stats.c"
int loading(){
	clear();
	printf("\t");
	char c[10]={'#','!','@','$','*','&','?'};
	int i=0;int k;
	
	while(k<2){
		printf("\n\n\n\n\n\n\n\n");	
		printf("\t\t\t\t      %c\n",c[i]);
		i++;
		printf("\t\t\t\t   Loading\n");
		//sleep(1);
		usleep(100000);
		clear();
		if(i%7==0){
			i=0;k++;
		}
	}
	clear();
}

char getch(){
    /*#include <unistd.h>   //_getch*/
    /*#include <termios.h>  //_getch*/
    char buf=0;
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
}
 
int main(){
	loading();
	clear();
	printf("\t\t\t\tTYPE RACER\n");
	printf("\n\n\n\t  Press the number to open the corresponding sub menu\n");
	printf("\n\n\t\t\t1. New Account");
	printf("\n\n\t\t\t2. Sign in");
	printf("\n\n\t\t\t3. Statistics");
	printf("\n\n\t\t\t4. Exit");
	char c=getch();
	if(c=='1'||c=='2'||c=='3'||c=='4'){
		clear();
		//printf("Hello");
		if(c=='1'){
		newacct();
		}
		if(c=='2'){
		search();
		}
		if(c=='3'){
		stats();
		}
		if(c=='4'){
		printf("\n\n\n\n\n\n\n\n");
		printf ("\t\t\t\t   GOODBYE\n");
		sleep(2);
		clear();
		exit(1);
		}
	}
	else
		main();
	return 0;
}