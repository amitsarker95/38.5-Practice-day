//38.5_P_day_1
#include<stdio.h>

struct Person
{
    char name[100];
    int val1;
    int val2;
};
void structure_sort(struct Person *a,int n){

for(int pos=0;pos<n-1;pos++){
    for(int check=pos+1;check<n;check++){
        if(a[pos].val2 > a[check].val2){
            struct Person temp = a[pos];
            a[pos] = a[check];
            a[check] =temp;
        }
    }
}
for(int i=0;i<n;i++){
    printf("%s %d %d\n",a[i].name,a[i].val1,a[i].val2);
}

}

int main(){
    int n;
    scanf("%d",&n);
struct Person arr[n];

for(int i=0;i<n;i++){
    scanf("%s %d %d",&arr[i].name,&arr[i].val1,&arr[i].val2);
}

structure_sort(arr,n);
return 0;
}
