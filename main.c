#include<stdio.h>
int main(){
	int a[11]={0},i,j,m,b;

    printf("\nPlease input 10 numbers:\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<10;i++){
		for(j=0;j<i;j++){
			if(a[i]<a[j]){
			m=a[j];a[j]=a[i];a[i]=m;
			}
		}
	}

    printf("\nAfter is:\n");
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}

    printf("\n\nPlease input another number:\n");
	scanf("%d",&b);
	if(b>=a[9]){
        a[10]=b;
	}
	else{
        for(i=0;i<11;i++){
            if(b<=a[i]){
                m=i;break;
            }
        }
        for(i=10;i>m;i--){
            a[i]=a[i-1];
        }
        a[m]=b;
	}

    printf("\nAfter is:\n");
	for(i=0;i<11;i++){
		printf("%d ",a[i]);
	}putchar('\n');

return 0;
}
