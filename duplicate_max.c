#include <stdio.h>
int main() {
    int arr[100],size,count=0;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    for(int i=0; i<size;i++){
        printf("Enter the value for position %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for(int i=1; i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0; i<size;i++){
      if(arr[i]==max){
            printf("The maximum value is %d and it's position is %d \n", max,i+1); 
            count++;}
        
    }
    printf("The maximum value occured for %d times.", count);
    return 0;
}
