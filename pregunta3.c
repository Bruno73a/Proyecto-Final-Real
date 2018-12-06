void pregunta3(int a, int *n){
	int opc3;
	
	switch(a){
		case 1:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Mexico\n\n");
			printf("En que año fue el sitio a Tenochtitlan?\n\n1)1100\n\n2)2005\n\n3)1521\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 2:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Historia Universal\n\n");
			printf("Cual fue el mayor imperio maritimo de la historia?\n\n1)Español\n\n2)Britanico\n\n3)Holandes\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 3:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Geografia Universal\n\n");
			printf("Cual es el nombre de la montaña mas alta del mundo\n\n1)Cuexcomate\n\n2)Himalaya\n\n3)Everest\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 4:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Quien pinto la noche estrellada?\n\n1)Dali\n\n2)Picasso\n\n3)Van Gogh\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 5:
		    printf("%d\n\n",a);
		    printf("Tema de Pregunta: Ciencia y Teconologia\n\n");
			printf("Quien descrubrio la penicilina?\n\n1)Fleming\n\n2)Bohr\n\n3)Mendel\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 6:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Cultura General\n\n");
			printf("Quien escribio la obra titulada Los Miserables?\n\n1)Quevedo\n\n2)Victor Hugo\n\n3)Sor Juana\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 7:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Mexico\n\n");
			printf("Quien fue el primer presidente de Mexico?\n\n1)Iturbide\n\n2)Quintana Roo\n\n3)Guadalupe Victoria\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 8:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Historia Universal\n\n");
			printf("A quien se le atribuye la conquista del imperio Inca?\n\n1)Pizarro\n\n2)Cortes\n\n3)Carlos 3ero\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 9:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Geografia Universal\n\n");
			printf("Cual es la selva mas grande del mundo?\n\n1)Lacandona\n\n2)Sahra\n\n3)Amazonas\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 10:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Quien fue el mayor exponente de la tendencia cubista?\n\n1)Picasso\n\n2)Otto Dix\n\n3)Salvador Dali\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 11:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Ciencia y Teconologia\n\n");
			printf("Quien planteo el teorema de congruencia de triangulos?\n\n1)Aristoteles\n\n2)Tales\n\n3)Arquimedes\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 12:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Cultura General\n\n");
			printf("Que significa UNAM?\n\n1) Universidad Nacional Autonoma de Mexico\n\n2)Tecnologico de Monterrey\n\n3)Instituto Politecnico Nacional\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 13:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Mexico\n\n");
			printf("Ciudad en Mexico que aporta mayor PIB a la nacion?\n\n1)Puebla\n\n2)Queretaro\n\n3)CDMX\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 14:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Historia Universal\n\n");
			printf("Quien fue el tutor de Alejandro Magno?\n\n1)Aristoteles\n\n2)Tales\n\n3)Arquimedes\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 15:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Geografia Universal\n\n");
			printf("Que pais surge de la desintegracion de Yugoslavia?\n\n1)Serbia\n\n2)Polonia\n\n3)Turquia\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 16:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Quien compuso la Primavera?\n\n1)Bohr\n\n2)Vivaldi\n\n3)Bach\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 17:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Ciencia y Teconologia\n\n");
			printf("Quien fue el autor de la Teoria de la Evolucion?\n\n1)Lamark\n\n2)Darwin\n\n3)Ninguno de los anteriores\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 18:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Cultura General\n\n");
			printf("En que pais fue hecha la estatua de la libertad?\n\n1)EUA\n\n2)Francia\n\n3)Alemania\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 19:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Mexico\n\n");
			printf("En que año se levanto en armas el EZLN?\n\n1)1521\n\n2)1999\n\n3)1994\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 20:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Historia Universal\n\n");
			printf("Entre que reinos fueron las guerras medicas?\n\n1)Romano y Huno\n\n2)Ateniense y Espartano\n\n3)Doctores y Medicos\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 21:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Geografia Universal\n\n");
			printf("Junto a que rio esta asentada la ciudad de Moscu?\n\n1)Eufrates\n\n2)Nilo\n\n3)Volga\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 22:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Quien pinto la capilla sixtina?\n\n1)Miguel Angel\n\n2)Donatello\n\n3)Quevedo\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 23:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Ciencia y Teconologia\n\n");
			printf("Quien fue el padre de la ingenieria genetica?\n\n1)Mendeleiev\n\n2)Mendel\n\n3)Pascal\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 24:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Cultura General\n\n");
			printf("Quien gano el premio nobel de literatura en Mexico?\n\n1)Octavio Paz\n\n2)Gabriel Garcia Marquez\n\n3)Mario Benedetti\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 25:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Mexico\n\n");
			printf("Tipo de Escuela prehispanica\n\n1)Telpochcalli\n\n2)Balam\n\n3)Ometeotl\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 26:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Historia Universal\n\n");
			printf("A quien se le atribuye la unificacion Alemana?\n\n1)Bethoven\n\n2)Hitler\n\n3)Bismarck\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 27:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Geografia Universal\n\n");
			printf("A que pais se le conoce como la naciones de El Sol Naciente?\n\n1)Italia\n\n2)Japon\n\n3)China\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 28:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("A que se le conoce como el septimo arte?\n\n1)Pintura\n\n2)Escritura\n\n3)Cine\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 29:
		    printf("%d\n\n",a);
		    printf("Tema de Pregunta: Ciencia y Teconologia\n\n");
			printf("Quien propuso el modelo atomico del panque de pasas?\n\n1)Bohr\n\n2)Millikan\n\n3)Thompson\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 30:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Cultura General\n\n");
			printf("Cual es el video mas visto de youtube?\n\n1)Despacito\n\n2)Gangnam Style\n\n3)Uptown Funk\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 31:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Mexico\n\n");
			printf("Cual de los siguientes estados tiene una mayor extansion territorial?\n\n1)Chihuahua\n\n2)Quintana Roo\n\n3)Tlaxcala\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 32:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Historia Universal\n\n");
			printf("A que invento se debe la transicion de la prehistoria a la modernidad?\n\n1)Rueda\n\n2)Escritura\n\n3)Imprenta\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 33:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Geografia Universal\n\n");
			printf("En que continente se encuentran los Alpes?\n\n1)Estados Unidos\n\n2)Sudamerica\n\n3)Europa\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 34:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Cual de las siguientes es una serie de Netflix?\n\n1)Breaking Bad\n\n2)Luis Miguel\n\n3)Malcolm\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 35:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Ciencia y Teconologia\n\n");
			printf("Cual es la derivada del Cosh(x)?\n\n1)Senh(x)\n\n2)-Senh(x)\n\n3)Cosh(x)\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 36:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Cultura General\n\n");
			printf("A quien se le atribuye la invencion de la imprenta?\n\n1)Tesla\n\n2)Gutemberg\n\n3)Diderot\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 37:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Mexico\n\n");
			printf("Que ciudad fue famosa durante los 80s por su alto indice de feminicidios?\n\n1)Ecatepec\n\n2)Matamoros\n\n3)Ciudad Juarez\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 38:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Historia Universal\n\n");
			printf("De que continente provenia el imperio Huno?\n\n1)Asia\n\n2)Europa\n\n3)Oceania\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 39:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Geografia Universal\n\n");
			printf("Como se le conoce al extremo sur del continente americano?\n\n1)Malvinas\n\n2)Patagonia\n\n3)Amanzonas\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 40:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Quien es el autor del libro llamado Pedro Paramo?\n\n1)Ciengfuegos\n\n2)Jose Emilio Pacheco\n\n3)Juan Rulfo\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 41:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Ciencia y Teconologia\n\n");
			printf("Cual es la ciencia que estudia las formas de vida?\n\n1)Quimica\n\n2)Fisica\n\n3)Biologia\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 42:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Cultura General\n\n");
			printf("Cual de las siguientes no es una de las 7 maravillas del mundo moderno?\n\n1)Coloso de Rodas\n\n2)Machu Pichu\n\n3)Ciudad de Petra\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 43:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Mexico\n\n");
			printf("En que año sucedio la matanza del 2 de octubre?\n\n1)1969\n\n2)1968\n\n3)1967\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 44:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Historia Universal\n\n");
			printf("A que continente llego Leif Ericson en sus viajes?\n\n1)Rusia\n\n2)America\n\n3)Africa\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 45:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Geografia Universal\n\n");
			printf("Cual es la linea imaginaria que sirve para dividir la tierra en emisferio norte y sur?\n\n1)Meridiano de Grenwich\n\n2)Ecuador\n\n3)Montevideo\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 46:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Artes, Deportes y Entretenimiento\n\n");
			printf("Que cultura construyo el partenon?\n\n1)Romana\n\n2)Italiana\n\n3)Griega\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 47:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Ciencia y Teconologia\n\n");
			printf("En que estructura biologica se encuentra la Informacion Genetica?\n\n1)Cigoto\n\n2)ADN\n\n3)Pared Celular\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==2){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 48:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Cultura General\n\n");
			printf("De donde proviene el termino Almohada?\n\n1)China\n\n2)Rusia\n\n3)Medio Oriente\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 49:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Mexico\n\n");
			printf("En donde sucedio el Brazo de Acatempan?\n\n1)Iguala\n\n2)Oaxaca\n\n3)Guerrero\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==3){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		case 50:
			printf("%d\n\n",a);
			printf("Tema de Pregunta: Historia Universal\n\n");
			printf("Quien lucho contra el dominio español en Peru?\n\n1)Tupac Amaru\n\n2)Simon Bolivar\n\n3)Miguel Hidalgo\n\n\nRespuesta: ");
			scanf("%d",&opc3);
			if(opc3==1){
			*n=*n+3;
			printf("\n\nRespuesta CORRECTA!!!");
			}else printf("\n\nRespuesta incorrecta :(");
			break;
		
		
	}
	
	
	n=n+3;
}

