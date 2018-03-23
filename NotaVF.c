#include <stdio.h>

int main(){
    int N, i;
    float VE[50] = {0};
    float MVE = 0;
    float VC, VF;

    printf("Insira o numero de notas de VE:\n");
    scanf("%d", &N);
    //printf("N RECEBIDO\n");

    for(i=0; i<N; i++){
        printf("%d a VE: ", i+1);
        scanf("%f", &VE[i]);
        //printf("%d a VE: %f\n", i+1, VE[i]);
        MVE += VE[i]/N;
    }
    printf("VC: ");
    scanf("%f", &VC);
    VF = 10 - (MVE + VC)/2;
    if(VF > 4.0){
        printf("Precisa de: %f.\n", VF);
    }
    else {
        printf("Precisa de 4,0.\n");
    }
    return 0;
}
