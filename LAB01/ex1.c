int main(){
    float people[3];
    float premio = 0, amount[3], totalAmount;
    for(int i =0; i<3; i++){
        printf("\nInforme o valor da pessoa %i: ", i+1);
        scanf("%d", &people[i]);
    }
    printf("\nInforme o valor: ");
    scanf("%f", &premio);
    for(int i = 0; i<3; i++){
        totalAmount += people[i];
    }
    for(int i = 0; i<3; i++){
        amount[i] =(people[i]/totalAmount) * premio;
        printf("\n%f", amount[i]);
    }

    return 0;
}