// Your code here...
#include <stdio.h>
int is_prime(int n){  
    if (n <= 1){
        return 0;
    }
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return 0;
        }  
    }   
    return 1;  
}
int main(){
    int count = 0;
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n+1;i++){
    scanf("%d ",&arr);}
    if(is_prime(arr,n)){
        count++;
    }else{
        printf("No");
    }printf("%d",count);
}