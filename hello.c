//Am formatat codul si am fixat un bug -mih

#include <stdio.h

int main(int argc,char *argv[]){
	if(argc!=2){
		printf("USAGE %s name \n",argv[0]);
		return -1;
	}

	printf("hello, %s!\n",argv[1]);
	return 0;
}



