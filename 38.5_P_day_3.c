#include<stdio.h>
struct Person
{
	    char name[100];
	    int val;
};
struct Person get_min(struct Person *a,int n){
struct Person mn;
int min = a[0].val;

for(int i=0;i<n;i++){
    if(min>a[i].val){
        min=a[i].val;
        mn=a[i];
    }
    }
return mn;
}

int main(){
int n;
scanf("%d",&n);
struct Person arr[n];
for(int i=0;i<n;i++){
    scanf("%s %d",&arr[i].name,&arr[i].val);
}

struct Person min = get_min(arr,n);
printf("%s %d\n",min.name,min.val);
return 0;
}

