"""This program (written without using arrays and any extra libraries),
  performs Kaprekar's operation on a givien 4 digit number and gives number of iterations it took to get there.."""
#include<stdio.h>


int asc(int n)
{
	int a,b,c,d;
	int k=0;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	if (a>b){k=a;a=b;b=k;}
	if (c>d){k=c;c=d;d=k;}
	if (b>d){k=b;b=d;d=k;}
	if (a>c){k=a;a=c;c=k;}
	if (b>c){k=b;b=c;c=k;}
int asc= (a * 1000)+(b * 100)+(c * 10)+d;
return asc;
}
int dsc(int n)
{
	int a,b,c,d;
	int k=0;
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	n=n/10;
	d=n%10;
	if (a>b){k=a;a=b;b=k;}
	if (c>d){k=c;c=d;d=k;}
	if (b>d){k=b;b=d;d=k;}
	if (a>c){k=a;a=c;c=k;}
	if (b>c){k=b;b=c;c=k;}
int dsc=(d*1000)+(c*100)+(b*10)+a;
return  dsc; 
}
int main()
{
	int n;
	printf("Enter a 4 digit number:");
	scanf("%d",&n);
	int a,b,c,d;
	int k=n;
	a=k%10;
	k=k/10;
	b=k%10;
	k=k/10;
	c=k%10;
	k=k/10;
	d=k%10;
	
	
	if (n< 1000 || n > 9999){
		printf("invalid number");
	}
	else if (a==b && b==c && c==d){
		printf("invalid number");
	}
	else{
	int i=0;
	while(n!=6174){
		i++;
		n=dsc(n)-asc(n);
		}
	printf("Reached 6174 in %d iterations.",i);
	}

}
