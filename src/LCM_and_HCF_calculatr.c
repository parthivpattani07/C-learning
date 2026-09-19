"""
Question: Continuously read positive integers from the user one by one until the
user enters -1. Maintain and output the running Greatest Common Divisor (GCD)
and Least Common Multiple (LCM) of all numbers entered so far.
Solution:
"""
#include<stdio.h>

int gcd(int a , int b){
	int q=1;
	int r=0;
	while(a%b!=0){
		q=a/b;
		r=a%b;
		a=b;
		b=r;
	}
return b;
}
int lcm(int a, int b){
	int k=a*b/gcd(a,b);
	return k;
}
int main(){
int k=1;
int p=1;
int n;
int GCD,LCM;
while(n!=-1){
	scanf("%d",&n);
	if (n>0){
	GCD=gcd(n,k);
	LCM=lcm(n,p);
	k=n;
	p=LCM;
	}
	else{
		continue;
	}
}	
printf("Lcm: %d and Gcd: %d",LCM,GCD);
return 0;
}
