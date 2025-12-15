#include<stdio.h>
int main(){

    int N1,N2;

    printf("Enter the first number: ");
    scanf("%d",&N1);

    printf("Enter the seconf number: "); 
    scanf("%d",&N2);

    printf("Factors of %d are\n",N1);  
    for(int i=1;i<=N1;i++){
        if(N1%i==0){
            printf("%d ",i);
        }
    }

    printf("\nFactors of %d are\n",N2);  
    for(int i=1;i<=N2;i++){
        if(N2%i==0){
            printf("%d ",i);
        }
    }

    int Smallest,HCF;
    if(N1>N2){
        Smallest=N2;
    }
    else{
        Smallest=N1;
    }

    for(int i=1;i<=Smallest;i++){
        if(N1%i==0 && N2%i==0){
            HCF=i;
        }
    }

    printf("\nHCF of %d and %d is\n%d",N1,N2,HCF);


    return 0;
}
