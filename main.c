#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int opc=0;
    printf("Bienvenido al Maraton Multiple\n\n\n");
    Sleep(1000);
    printf("\nQue desea hacer hoy?\n");
    Sleep(1000);	
    do{
	    printf("\nJugar  (1)\n");
	    Sleep(1000);
	    printf("\nLeer Reglas del Juego (2)\n");
	    Sleep(1000);
	    printf("\nSalir (3)\n");
	    Sleep(1000);
	    printf("\n\n\nPara seleccionar una opcion, teclee el numero deseado y presione enter.\n");
	    Sleep(1000);
	    printf("\nSeleccionar: ");
	    Sleep(1000);
	    scanf("%d",&opc);
	    system("cls");
	    switch(opc){
		    case 1:
				jugadores();
		        Sleep(3000);
		        system("cls");
		        break;
		    case 2:
				instrucciones();
		        Sleep(500);
		        system("cls");
		    	break;
		    case 3:
		        printf("\nQue tenga buen dia!\n");
		    	break;
		    default:
				printf("\nOpcion no valida\n");
		        Sleep(1000);
		        printf("\nFavor de ingresar un numero dentro de nuestro menu.\n");
		        Sleep(3000);
		        system("cls");
		    	printf("\n");
		}
    }while(opc!=3);
    return 0;
}
