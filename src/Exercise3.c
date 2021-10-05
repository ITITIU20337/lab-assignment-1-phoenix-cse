/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	int i,m,t;
    for(i=2;i<testcase;i++){
		 m=0;
	if (i==2)
	 m=0;
	if (i==3)
	 m=0;
    for(t=2; t<=sqrt(i);t++){
		if (i%t==0){
			m=1;
		}
	}
	if (m==0){
		printf("%d ",i);
	}
	}
	return 0;
}