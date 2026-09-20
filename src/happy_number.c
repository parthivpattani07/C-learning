"""
Question: Determine if a given positive integer N is a "Happy Number." A
happy number reaches 1 when continuously replaced by the sum of
the squares of its digits. Non-happy numbers fall into an endless cycle
containing the number 4.
Solution:
"""
#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
int p=n;
while(1){
	
	int s=0;
	while (p>0){
		s+=(p%10)*(p%10);
		p=p/10;
		}
	if (s==4){
		printf("Unhappy Number.");
		break;
	}
	else if (s==1){
		printf("Happy Number.");
		break;
	
	}
	p=s;
	
	

}
	
return 0;
}
