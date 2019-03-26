#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	for(i=0;i<100;i++){
		if(i%3==0)printf("%d\n","fizz");
		if(i%5==0)printf("%d\n","buzz");
		if(i%3==0 && i%5==0)printf("%d\n","fizz buzz");
	}
}