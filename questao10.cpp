#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int horaEntrada, horaSaida, minutosEntrada, minutosSaida;
    int minutosGeral, v1;
    float pagamento;
    printf("Informe o horário de chegada: ");
    scanf("%d %d", &horaEntrada, &minutosEntrada);
    printf("Informe o horário de saida: ");
    scanf("%d %d", &horaSaida, &minutosSaida);
    
    
    if(horaSaida>=horaEntrada){
        minutosGeral=(horaSaida-horaEntrada)*60 +(minutosSaida-minutosEntrada);
        
    }else{
        minutosGeral=((24-horaEntrada)+horaSaida)*60+(minutosSaida-minutosEntrada);
    }
    if(minutosGeral<=120){
            v1=minutosGeral%60;
            if(v1==0){
                v1=minutosGeral/60;
                pagamento=v1*1;
            }else{
                v1=minutosGeral/60;
                pagamento=v1*1+1;
            }
            
        }else if(minutosGeral>120 && minutosGeral<=240){
            v1=minutosGeral%60;
            if(v1==0){
                v1=minutosGeral/60;
                pagamento=v1*1.4;
            }else{
                v1=minutosGeral/60;
                pagamento=v1*1.4+1.4;
            }
        }else if(minutosGeral>240){
            v1=minutosGeral%60;
            if(v1==0){
                v1=minutosGeral/60;
                pagamento=v1*2;
            }else{
                v1=minutosGeral/60;
                pagamento=v1*2+2;
            }
        }
    printf("Valor a pagar: %.2f \n", pagamento);
    
    return 0;
}
