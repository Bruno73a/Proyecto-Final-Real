void jtres(){	
	int np1=1, na1=0;
	int np2=1, na2=0;
	int np3=1, na3=0;

	
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
		
		if (na2>41) break;
		
		printf("Tercer Jugador");
		printf("\n\nPregunta: ");
		pregunta3(np3, &na3);
		printf("\n\nJugador 3: %d Kilometros\n\n", na3);
		np3++;
		Sleep(3000);
		system("cls");
		
		
	}while(na3<42);
	
	if (na1>41) printf ("\tFelicidades\n\nEL JUGADOR 1 HA GANADO!!!");
	if (na2>41) printf ("\tFelicidades\n\nEL JUGADOR 2 HA GANADO!!!");
	if (na3>41) printf ("\tFelicidades\n\nEL JUGADOR 3 HA GANADO!!!");
	Sleep(5000);

}
