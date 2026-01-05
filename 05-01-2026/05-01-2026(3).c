
    #include <stdio.h>
int main() {
    //Your Code goes here!
    int n ,i;
    int min;
    int arr[50];
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=1; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d",min);
    
    return 0;
}
    
   