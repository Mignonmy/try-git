#include <stdio.h>
int main()
{
	int s[11]={1,4,6,9,11,25,31,46,83,100,};
	scanf("%d",&s[10]);
	int i,j,t;
	int k;
	for(i=0;i<10;i++){
		for(j=0;j<11-i;j++){
			if(s[j]>s[j+1]){
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
				for(k=0;k<11;k++) printf("%d ",s[k]);printf("\n");
			}
		}
	}
	printf("\n");
	for(i=0;i<11;i++) printf("%d ",s[i]);
	return 0;
}
