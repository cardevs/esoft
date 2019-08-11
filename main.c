/*Carneiros Unidos jamais serão vencidos!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>






int main()
{
	
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
        		break;
        		case 2:
        			
        			break;
        			case 3:
        				break;
        				case 4:
        					
        					break;
        					case 5:
        						
        						break;
        						case 0:
        							
        							printf("\n\n\nObrigado, volte Sempre!");
        							break;
        }

  }




    return 0;
}

