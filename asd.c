#include <stdio.h>
#include <stdlib.h>

int main(){
	for(int i=0;i<100;i++){
		if(i%3==0)printf("%d\n","fizz");
		if(i%3==0)printf("%d\n","buzz");
		if(i%3==0 && i%5==0)printf("%d\n","fizz buzz");
	}
}