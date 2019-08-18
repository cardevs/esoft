/*Carneiros Unidos jamais serão vencidos!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
/*O carneiro Edson kay já esteve aqui*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
double hiperfatorial(int n)
{
	if(n==0)
	return 0;
	
	double produto=1;
	int i;
	
	for(i=1; i<=n;i++)
	produto*=pow(n,n);
	return produto;
	
	
	
}

int fatDuplo(int n){
	int i=1,num=1;
	for(i;i<=n;i++){
		if(i%2!=0){
			num=i*num;
		}
	}
	return num;
}

int Tribo(int n){
	if((n==0)||(n==1)){
		return 0;
	}else{
		if(n==2){
			return 1;
		}else{
			return Tribo(n-1)+Tribo(n-2)+Tribo(n-3);
		}
	}
}


int main()
{

int valor;//Variavel que será usada para inserir valores a pedido do utilizador	
//    printf("Hello world!\n");
int op=1;//variavel que servirá para armazenar valores das opções do menu

  while(op!=0)
  {

        printf("===================================================================");
        printf("\n\"                                                                 \"\n");
        printf("\" 1- Numero de Tribonanci                                         \"\n");
        printf("\" 2- Mostrar a sequencia de Padovan                               \"\n");
        printf("\" 3- Calcular Superfatorial                                       \"\n");
        printf("\" 4- Calcular Fatorial Duplo                                      \"\n");
        printf("\" 5- Hiperfatorial                                                \"\n");
        printf("\"                                                                 \"\n");
        printf("\" 0- Sair                                                         \"\n");
        printf("===================================================================\n");
    	printf("\nOpcao: ");
        
        scanf("%d",&op);
        fflush(stdin);
        switch(op)
        {
        	case 1:
        		printf("\nInsira o valor a  para calcular o 	Tribonancci: ");
				scanf("%d",&valor);
				printf("\nO Tribonancci de %d e %d.\n\n\n",valor,Tribo(valor));
        		break;
        		case 2:
        			
        			break;
        			case 3:
        				break;
        				case 4:
        						printf("\nInsira o valor a  para calcular o Fatorial Duplo: ");
        						scanf("%d",&valor);
        						printf("\nO Fatorial Duplo de %d e %d.\n\n\n",valor,fatDuplo(valor));
        						
        					break;
        					case 5:
        						printf("\nInsira o valor a  para calcular o hiperfatorial: ");
        						scanf("%d",&valor);
        						printf("\nO hiperfatorial de %d e %f.\n\n\n",valor,hiperfatorial(valor));
        						
        						break;
        						case 0:
        							
        							printf("\n\n\nObrigado, volte Sempre!");
        							break;
        }

  }




    return 0;
}

