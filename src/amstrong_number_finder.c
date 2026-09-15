#include<stdio.h>
int xpow(int n, int p)
{
int k=1,x=0;

while(x<p){
	x++;
	k=k*n;
	
	}
return k;
}


int main()
{
int l,r;

scanf("%d",&l);
scanf("%d",&r);
for(int x=l;  x<=r ;x++){
	int s=x;
	int a=0;
	int b=x;
	int k=0;
	while(s>=1){
		s=s/10;
		k++;	
		}

	for (int t=1;t<=k ;t++ ){
		a+=xpow(b%10,k);
		b=b/10;
		
		}
	if (x==a){
		printf(" %d",x);
		}
			
	}
return 0;
"""
input:
100  500
output:
153 370 371 407
"""
