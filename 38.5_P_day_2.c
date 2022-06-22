#include<stdio.h>
struct Person
{
	    char name[100];
	    int val;
};
struct Person get_max(struct Person *a,int n){
struct Person mx;
int max = a[0].val;

for(int i=0;i<n;i++){
    if(max<a[i].val){
        max=a[i].val;
        mx=a[i];
    }
    }
return mx;
}

int main(){
int n;
scanf("%d",&n);
struct Person arr[n];
for(int i=0;i<n;i++){
    scanf("%s %d",&arr[i].name,&arr[i].val);
}

struct Person max = get_max(arr,n);
printf("%s %d\n",max.name,max.val);
return 0;
}
