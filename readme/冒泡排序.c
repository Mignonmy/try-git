//���� 3 5 4 1 2 9
#include <stdio.h>
int main()
{
	int number[6]={3,5,4,1,2,9};
	int i,t,j; 
	for(i=0;i<5;i++){ //ѭ���Ƚ�һ�ε�һ��������ѭ���Ƚ���� 
		for(j=0;j<5-i;j++){ //ÿ��ѭ����ô�������ҿ����ٴαȽ�ʣ����ߵģ����Ƚϴ�����ʣ�����鵥Ԫ������ 
			if(number[j]>number[j+1]) //�����滻��ʹ�������ŵ����ұߣ��ڵ�������Ԫ 
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
