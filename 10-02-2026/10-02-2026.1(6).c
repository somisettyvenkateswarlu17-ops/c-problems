
    #include <stdio.h>
int main() {
    //Your Code goes here!
    int a,b,c;
    
    scanf("%d %d",&a,&b);
    c=a%b;
    printf("%d",c);
    if(c%2==0){
        printf("even");
    }
    else {
        printf("odd");
    }
    
    return 0;
}
 