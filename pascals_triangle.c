# include<stdio.h>
int factorial(int r){
    int f;
    if(r==0 || r==1){return 1;}
    else{f= r*factorial(r-1);}
    return f;
}
void triangle(int lines){
for(int n=0;n<=lines; n++){ //prints n+1 number of lines
  printf("n=%d ",n);
  for(int space = lines-n; space>=0;space--){printf(" ");} //gives proper spacing before every line
    for(int r=0;r<=n;r++){
        printf("%d", (factorial(n))/(factorial(r)*factorial(n-r))); //formula for nCr
        printf(" "); //spacing between nCr numbers
    }
    printf("\n");
    }
}
int main() {
    int lines;
    printf("what is n?\n");
    scanf("%d", &lines);
    triangle(lines);
    return 0;
}