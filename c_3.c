#include<stdio.h>
#include<conio.h>
#include<math.h>

long gcd(long a,long b){
	if(b==0){
		return a;
	}
	else return gcd(b,a%b);
}
int main(){
	
	long x,y,hcf,lcm;
	printf("Enter numbers::\n");
	scanf("%d%d", &x,&y);
	
	hcf = gcd(x,y);
	lcm = x*y /hcf;
	
	printf("Hcf of %ld and %ld = %ld",x,y,hcf);
	printf("\x0A");   //to print a new line
	printf("Lcm of %ld and %ld = %ld",x,y,lcm);
	
	return 0;
}
