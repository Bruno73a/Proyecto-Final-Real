void pregunta1(int a, int *n){
	int opc3;

	switch(a){
		case 1:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Mexico\n\n");
			printf("Cual es la deidad del Mexico antiguo conocida como la Serpiente Emplumada?\n\n1)Coatlicue\n\n2)Huitzilopochtli\n\n3)Quetzalcoatl\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 2:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Historia Universal\n\n");
			printf("En que año se descubrio el continente americano?\n\n1)1492\n\n2)1488\n\n3)1496\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 3:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Geografia Universal\n\n");
			printf("Cual es el oceano que esta en la costa este de EUA?\n\n1)Pacifico\n\n2)Atlantico\n\n3)Indico\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 4:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Como se llama el mas chiquito de los enanos de Blanca Nieves?\n\n1)Gruñon\n\n2)Dormilon\n\n3)Tontin\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 5:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Ciencia y Tecnologia\n\n");
			printf("Como se llama el numero que se resta al minuendo?\n\n1)Residuo\n\n2)Sustraendon\n\n3)Dividendo\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 6:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Cultura General\n\n");
			printf("Quien escribio La Odisea?\n\n1)Homero\n\n2)Socrates\n\n3)Aquiles\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
        case 7:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Mexico\n\n");
			printf("En donde se encuentran las piramides del Sol y la Luna?\n\n1)Teotihuacan\n\n2)Chichen Itza\n\n3)Palenque\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 8:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Historia Universal\n\n");
			printf("Cual era la capital del imperio Inca?\n\n1)Machu Pichu\n\n2)Quito\n\n3)Cuzco\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 9:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Geografia Universal\n\n");
			printf("Cual es el segundo continente mas grande del mundo?\n\n1) Africa\n\n2)America\n\n3)Asia\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 10:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("En que pais se baila y canta la samba?\n\n1)Brazil\n\n2)Nigeria\n\n3)Venezuela\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 11:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Ciencia y Tecnologia\n\n");
			printf("Por que la chinche y la pulga se consideran  insecto hematofagos ?\n\n1)Se alimentan de sangre\n\n2)Emanan de la tierra\n\n3)Tiene un periodo corto de vida\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 12:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Cultura General\n\n");
			printf("Donde se originaron los juegos olimpicos?\n\n1)Esparta\n\n2)Roma\n\n3)Grecia\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
        case 13:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Mexico\n\n");
			printf("Cual era el nombre de Mexico durante el periodo colonial?\n\n1)Mexico\n\n2)Tenochtitlan\n\n3)Nueva Espana\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 14:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Historia Universal\n\n");
			printf("Como se llamo el padre de Alejandro Magno?\n\n1)Filipo II de Macedonia\n\n2)Ptolomeo I\n\n3)Leonidas\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 15:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Geografia Universal\n\n");
			printf("Cual es el rio mas grande del mundo?\n\n1)Amazonas\n\n2)Nilo\n\n3)Yangtse\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 16:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Que pais fue el primero en organizar un mundial de futbol de 24 equipos?\n\n1)EUA\n\n2)España\n\n3)Japon\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 17:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Ciencia y Tecnologia\n\n");
			printf("A que especialista deben acudir las personas que padecen del estomago?\n\n1)Neurologo\n\n2)Cardiologo\n\n3)Gastroenterologo.\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 18:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Cultura General\n\n");
			printf("En que pais nacio Nelson Mandela?\n\n1) Africa\n\n2)Nigeria\n\n3)Sudafrica\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
        case 19:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Mexico\n\n");
			printf("Cual es el nombre del ultimo emperador mexica, a quien los conquistadores españoles torturaron quemandole los pies?\n\n1)Cuauhtmoc\n\n2)Moctezuma\n\n3)Cuitlahuac\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 20:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Historia Universal\n\n");
			printf("En que pais nacio Adolf Hitler?\n\n1)Alemania\n\n2)Austria\n\n3)Suiza\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 21:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Geografia Universal\n\n");
			printf("Cual es el pais mas poblado del mundo?\n\n1)China\n\n2)Japon\n\n3)India\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 22:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Cuantos años transcurrieron entre el primero y segundo mundial mexicano de futbol?\n\n1)16\n\n2)8\n\n3)12\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 23:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Ciencia y Tecnologia\n\n");
			printf("Quien formulo la Teoria de la Relatividad?\n\n1)Isaac newton\n\n2)Albert Einstein\n\n3)Louis-Victor de Broglie\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 24:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Cultura General\n\n");
			printf("Que cantidad de huesos hay en un humano adulto?\n\n1)236\n\n2)206\n\n3)300\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
        case 25:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Mexico\n\n");
			printf("A quien se conoce como El Padre de la Patria??\n\n1)Francisco I. Madero\n\n2)Miguel Hidalgo y Costilla\n\n3)Benito Juarez\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 26:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Historia Universal\n\n");
			printf("Cuando acabo la II Guerra Mundial?\n\n1)1945\n\n2)1940\n\n3)1951\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 27:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Geografia Universal\n\n");
			printf("En que continente se encuentra Israel?\n\n1) Africa\n\n2)Europa\n\n3)Asia\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 28:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("A que celebre escritor español se le conoce como El Manco de Lepanto?\n\n1)Federico Garcia Lorca\n\n2)Miguel de Cervantes \n\n3)Otavio Paz\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 29:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Ciencia y Tecnologia\n\n");
			printf("Cual es la funcion de los globulos blancos en nuestra cuerpo?\n\n1)Combatir las enfermedades\n\n2)Transportar nutrientes\n\n3)Proporcionar oxigeno\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 30:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Cultura General\n\n");
			printf("Quien pinto la ultima cena?\n\n1)Leonid Afremob\n\n2)Vang Gogh\n\n3)Leonardo da Vinci\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
        case 31:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Mexico\n\n");
			printf("Que se celebra en Mexico el 5 de mayo?\n\n1)La promulgacion de la Constitucion\n\n2)La Revolucion mexicana\n\n3)La Batalla de Puebla\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 32:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Historia Universal\n\n");
			printf("Cual de estos hechos es mas antiguo?\n\n1)Nacimiento de Jesucristo\n\n2)Nacimiento de Confucio\n\n3)Nacimiento de Mahoma\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 33:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Geografia Universal\n\n");
			printf("Cuantos oceanos hay en la tierra?\n\n1)11\n\n2)7\n\n3)5\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 34:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Como se llama el ayudante de Sherlock Holmes, en las novelas policiacas de este personaje?\n\n1)Richard\n\n2)Alfred\n\n3)Watson\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 35:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Ciencia y Tecnologia\n\n");
			printf("Como se llama la parte externa de la piel?\n\n1)Hypodermis\n\n2)Dermis\n\n3)Epidermis\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 36:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Cultura General\n\n");
			printf("Quien va a la carcel: el imputado, el acusado, el condenado?\n\n1)imputado\n\n2)acusado\n\n3)condenado\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
        case 37:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Mexico\n\n");
			printf("Entre que facciones fue la guerra de reforma?\n\n1)Mexico y Estados Unidos\n\n2)Liberales y conservadores\n\n3)El Ejercito mexicano y el Ejercito frances\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 38:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Historia Universal\n\n");
			printf("Como se llamaba el primer presidente de los EUA?\n\n1)John Adams\n\n2)Thomas Jefferson\n\n3)George Washington\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 39:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Geografia Universal\n\n");
			printf("Cual es el lago mas profundo del mundo?\n\n1)Baikal\n\n2)Huron\n\n3)Costanza\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 40:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Como se llama el caballo del Llanero Solitario?\n\n1)Silver\n\n2)Rocinante\n\n3)Tornado\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 41:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Ciencia y Tecnologia\n\n");
			printf("Cuales son las tres caracteristicas del agua potable?\n\n1)Insipida, insaturada, flamale\n\n2)Solida, liquido, gaseoso\n\n3)Incolora, Insabora e Inodora\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 42:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Cultura General\n\n");
			printf("Como se llama la estacion espacial rusa?\n\n1)Mir\n\n2)Sputnik \n\n3)Segodnya\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
        case 43:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Mexico\n\n");
			printf("Quien fue el presidente que duro mas de treinta anos en el poder en Mexico?\n\n1)Antonio Lopez de Santa Anna\n\n2)Benito Juarez\n\n3)Porfirio Diaz\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 44:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Historia Universal\n\n");
			printf("Cual fue el primer metal que el hombre empleo?\n\n1)Cobre\n\n2)Oro\n\n3)Plata\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 45:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Geografia Universal\n\n");
			printf("En que frontera se encuentra el Everes?\n\n1)China-Rusia\n\n2)Nepal-India\n\n3)China-Nepal\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 46:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Como se llama el vestidor de los grandes actores o actrices?\n\n1)Suit\n\n2)Balcon\n\n3)Camerino\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 47:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Ciencia y Tecnologia\n\n");
			printf("Como se llama la membrana que vibra en el oido con los sonidos?\n\n1)Timpano\n\n2)Membrana oval\n\n3)Yunque\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 48:
            printf("%d\n\n",a);
            printf("Tema de pregunta: Cultura General\n\n");
			printf("Que es mas pequeño, un atomo o una molecula?\n\n1)Atomo\n\n2)Molecula\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
        case 49:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Mexico\n\n");
			printf("Que hiso el presidente Lazaro Cardenas18 de marzo de 1938 ?\n\n1)Nacionalizo la banca\n\n2)Expropio el petroleo\n\n3)Redacto las Leyes de Reforma\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 50:
			printf("%d\n\n",a);
			printf("Tema de pregunta: Historia Universal\n\n");
			printf(" Que personaje fue conocido como el rey de Macedonia, fue discipulo de Aristoteles y encabezo el imperio Helenistico?\n\n1)Alejandro Severo\n\n2)Carlo Magno\n\n3)Alejandro Magno\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
	}
	n=n+3;
}

