//排序 3 5 4 1 2 9
#include <stdio.h>
int main()
{
	int number[6]={3,5,4,1,2,9};
	int i,t,j; 
	for(i=0;i<5;i++){ //循环比较一次得一个数，需循环比较五次 
		for(j=0;j<5-i;j++){ //每次循环后得大的数往右靠，再次比较剩下左边的，但比较次数（剩下数组单元）减少 
			if(number[j]>number[j+1]) //不断替换，使最大的数排到最右边，在第六个单元 
			{
				t=number[j];
				number[j]=number[j+1];
				number[j+1]=t;	
			}
		}
	}
	for(i=0;i<6;i++){
		printf("%d ",number[i]);
	}
	return 0;
 } 
