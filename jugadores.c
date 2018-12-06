void jugadores() {
	
	int opc2=0;
	
	
	do{
		printf("\n\nSeleccione el numero de jugadores:");
		Sleep(1000);
		printf("\n\n\n\t2\t3\t4\n\n\n");
		Sleep(1000);
		printf("(Para regresar al menu principal, teclee 1 y presione enter.)\n\n\n\n");
		Sleep(1000);
		printf("Jugadores: ");
		Sleep(1000);
		scanf("%d",&opc2);
	    system("cls");
		switch(opc2){
			case 1:
				printf("Regresando al menu principal...");
				Sleep(1000);
				break;
			case 2:
				jdos();
				Sleep(1000);
				system("cls");
				break;
			case 3:
				jtres();
			    Sleep(1000);
			    system("cls");
			    break;
			case 4:
			    jcuatro();
			    Sleep(1000);
			    system("cls");
				break;
			default:
				printf("\nOpcion no valida\n");
			    Sleep(1000);
				printf("\nFavor de ingresar un numero dentro de nuestro menu.\n");
			    Sleep(2000);
			    system("cls");
				printf("\n");
		}
	}while(opc2>4);
}
