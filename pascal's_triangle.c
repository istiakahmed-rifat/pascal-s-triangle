# include<stdio.h>
int factorial(int r){
    int f;
    if(r==0 || r==1){return 1;}
    else{f= f*factorial(f-1);}
    return f;
}
void triangle(int n){
for(int line=n;line>=0; line--){ //prints n+1 number of lines

    for(int r=0;r<=n;r++){
        printf("%d", (factorial(n))/(factorial(r)*factorial(n-r)));
    }
    printf("\n");
    }
}
int main() {
    int n;
    printf("what is n?\n");
    scanf("%d", &n);
    triangle(n);
    return 0;
}