//38.5_P_day_1
#include<stdio.h>

struct Person
{
    char name[100];
    int val1;
    int val2;
};
void structure_sort(struct Person *a,int n){
//FILE * outputFile = fopen("output.txt","a");
for(int pos=0;pos<n-1;pos++){
    for(int check=pos+1;check<n;check++){
        if(a[pos].val2 > a[check].val2){
            struct Person temp = a[pos];
            a[pos] = a[check];
            a[check] =temp;
        }
    }
}

}

int main(){
    FILE * inputFile = fopen("input.txt","r");
    FILE * outputFile = fopen("output.txt","a");
    if(inputFile == NULL){
        fprintf(outputFile,"NO FILE FOUND\n");
    }

    int n;
    fscanf(inputFile,"%d",&n);
struct Person arr[n];

for(int i=0;i<n;i++){
    fscanf(inputFile,"%s %d %d",&arr[i].name,&arr[i].val1,&arr[i].val2);
}

structure_sort(arr,n);
for(int i=0;i<n;i++){
    fprintf(outputFile,"%s %d %d\n",arr[i].name,arr[i].val1,arr[i].val2);
}
return 0;
}

