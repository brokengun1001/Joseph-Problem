# Joseph-Problem
解决约瑟夫环问题
#include<stdio.h>
#include<stdlib.h>
void Del(int*,int*,int,int*);
int main(){
	int i=0,n,m,j;
	scanf("%d%d",&n,&m);
	int* a=(int*)malloc(n*sizeof(int));
	for(j=0;j<n;j++){
		a[j]=j+1;
	}
	while(n!=1){
		Del(&i,&n,m,a);
	}
	printf("%d",a[0]);
	return 0;
}

void Del(int *i,int *n,int m,int *a){
	int j;
	for(j=(*i+m-1)%*n;j<*n-1;j++)
	{
		a[j]=a[j+1];
	}
	a[*n-1]=0;
	*i=(*i+m-1)%*n;
	*n=*n-1;
}
