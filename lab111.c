#include<stdio.h>
int main(){
    int n,key;
    printf("enter no of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter array\n");
    for(int i=0;i<n;i++){
     scanf("%d",&a[i]);}
     printf("enter key\n");
     scanf("%d\n",&key);
    for(int i=0;i<n;i++){
      if(a[i]==key){
        print("1\n");}
      else{
        printf("-1\n");
      }

  }
  
    return 0;
}
