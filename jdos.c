void jdos (){
	int np1=1, na1=0;
	int np2=1, na2=0;

	
	do{
		printf("Primer Jugador");
		printf("\n\nPregunta: ");
		pregunta1(np1, &na1);
		printf("\n\nJugador 1: %d Kilometros\n\n", na1);
		np1++;
		Sleep(3000);
		system("cls");
		if (na1>41) break;
		
		printf("Segundo Jugador");
		printf("\n\nPregunta: ");
		pregunta2(np2, &na2);
		printf("\n\nJugador 2: %d Kilometros\n\n", na2);
		np2++;
		Sleep(3000);
		system("cls");
		
	}while(na2<42);
	
	if (na1>41) printf ("\tFelicidades\n\nEL JUGADOR 1 HA GANADO!!!");
	else printf ("\tFelicidades\n\nEL JUGADOR 2 HA GANADO!!!");
	Sleep(5000);
	
}	
