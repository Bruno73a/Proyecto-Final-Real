void instrucciones() {
	
	int opc1=0;
	
	 printf("OBJETIVO\n\nParticipar en una competencia de conocimientos que simula una carrera de Maraton que los jugadores trataran de ganar llegando primero a la meta de 42 kilometros, mediante la contestacion de preguntas de interes general. ");
	printf("\n\n\nNUMERO DE PARTICIPANTES\n\nHasta 4 jugadores o equipos, mas un arbitro que leera las preguntas y tomara las respuestas, ademas de dirigir el juego.");
	printf("\n\n\nTEMAS\n\n 1. Conocimientos Basicos\n 2. Historia Universal\n 3. Artes, Deportes y Entretenimientos\n 4. Ciencias y Tecnología\n 5. Cultura General");
	printf("\n\n\nTIPO DE PREGUNTAS\n\nDe opcion multiple. Cada pregunta bien contestada otorgara 3 kilometros.");
	printf("\n\n\nMODO DE JUEGO\n\nLos jugadores deben sentarse en torno a la computadora y contestar las preguntas en riguroso orden, en sentido contrario a las manecillas del reloj, empezando por el que esta ubicado a su derecha.El primer jugador en el turno de contestar su respectiva pregunta debe leer en voz alta el tema que la computadora le asigno e intentar resolver la misma. Si acierta el programa le asignara su puntaje correspondiente. Despues, sera el turno del siguiente jugador. Cada jugador dispone de hasta 10 segundos para dar su respuesta, o pasar. Gana el primer jugador que llegue a la meta.\n\n");
	printf("\n(Para regresar al menu principal, teclee 1 y presione enter)\n\n");
	scanf("%d",&opc1);
    system("cls");
    switch(opc1){
	
	case 1: printf("");
         Sleep(500);
         system("cls");
        break;
	default: printf("\nOpcion no valida\n");
        Sleep(1);
            printf("\nFavor de ingresar un numero dentro de nuestro menu.\n");
            Sleep(1000);
            system("cls");}
	
}

