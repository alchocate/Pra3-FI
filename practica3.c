#include <stdio.h>

int main(){
        int i;
	int a[4]={1,2,3,4};
	int b[4]={5,6,7,8};
	int c[4];
	while (i<4){
		c[i]=a[i]*b[i];
		i++;
	}
	return 0;
}
