#include <stdio.h>

int main ()
{
	
	int opc, hacer;
	FILE*furbero;
	printf("\t\t\t CUENCA TAMPICO-MISANTLA CAMPO FURBERO\n");
	hacer='s';
	do
	{
	printf("Selecciona el pozo del Campo Furbero del que requieres informacion \n1) Furbero 1559  \n2) Furbero 1511  \n3) Furbero 2336  \n4) Furbero 1543  \n5) Furbero 1797  \n6) Furbero 2328\n");
	scanf("%d",&opc);
	switch(opc)
	{
		case 1:
			furbero=fopen("Furbero.txt", "a+t");	
			fprintf(furbero,"%s", "Pozo Furbero 1559 \n\n1. Jurásico medio está caracterizado por depósitos de 65 m de terrígenos continentales (litoarenitas de grano grueso), que se acumularon sobre un basamento ígneo-metamórfico. \n\n2. Durante el Jurásico superior se depositaron sedimentos depositando sedimentos calcáreo-arcillosos con altos contenidos de materia orgánica con espesores de aproximadamente 95 m,sedimentos terrígenos depositados sobre los altos de basamento aún emergentes.\n\n3. En el Cretácico inferior se depositaron calizas tipo mudstone con intercalación de calizas tipo packstone en ambientes marinos abiertos (Formación Tamaulipas Inferior) con el inicio de desarrollo de grandes plataformas carbonatadas de 55 m de espesor.\n\n");
			fclose(furbero);
			printf("La informacion del pozo Furbero 1559 se ha guardado en el archivo Furbero.txt");
			break;
		
		case 2:
			furbero=fopen("Furbero.txt", "a+t");
			fprintf(furbero, "%s", "Pozo Furbero 1511 \n\n1. Jurásico medio está caracterizado por depósitos de 40 m de terrígenos continentales (litoarenitas de grano grueso), que se acumularon sobre un basamento ígneo-metamórfico. \n\n2. Durante el Jurásico superior se depositaron sedimentos depositando sedimentos calcáreo-arcillosos con altos contenidos de materia orgánica con espesores de aproximadamente 105 m, sedimentos terrígenos depositados sobre los altos de basamento aún emergentes. \n\n3. En el Cretácico inferior se depositaron calizas tipo mudstone con intercalación de calizas tipo packstone en ambientes marinos abiertos (Formación Tamaulipas Inferior) con el inicio de desarrollo de grandes plataformas carbonatadas de 25 m de espesor.\n\n");
			fclose(furbero);
			printf("La informacion del pozo Furbero 1511 se ha guardado en el archivo Furbero.txt");
			break;
		case 3:
			furbero=fopen("Furbero.txt", "a+t");
			fprintf(furbero, "%s","Pozo Furbero 2336 \n\n1. Jurásico medio está caracterizado por depósitos de 28 m de terrígenos continentales (litoarenitas de grano grueso), que se acumularon sobre un basamento ígneo-metamórfico.\n\n2. Durante el Jurásico superior se depositaron sedimentos depositando sedimentos calcáreo-arcillosos con altos contenidos de materia orgánica con espesores de aproximadamente 145 m, sedimentos terrígenos depositados sobre los altos de basamento aún emergentes.\n\n3. En el Cretácico inferior se depositaron calizas tipo mudstone con intercalación de calizas tipo packstone en ambientes marinos abiertos (Formación Tamaulipas Inferior) con el inicio de desarrollo de grandes plataformas carbonatadas de 98 m de espesor.\n\n");
			fclose(furbero);
			printf("La informacion del pozo Furbero 2336 se ha guardado en el archivo Furbero.txt");
			break;
		case 4:
			furbero=fopen("Furbero.txt", "a+t");
			fprintf(furbero, "%s","Pozo Furbero 1543 \n\n1. Jurásico medio está caracterizado por depósitos de 134 m de terrígenos continentales (litoarenitas de grano grueso intercaladas con limolitas), que se acumularon sobre un basamento ígneo-metamórfico\n\n 2. Durante el Jurásico superior se depositaron sedimentos depositando sedimentos calcáreo-arcillosos con altos contenidos de materia orgánica con espesores de aproximadamente 80 m, sedimentos terrígenos depositados sobre los altos de basamento aún emergentes.\n\n3. Durante el Cretácico Superior, del Turoniano al Mastrichtian, rocas caracterizadas por elevado contenido de materia orgánica (Formación Agua Nueva) que varían verticalmente de carbonatos tipo wackstone y packstone a margas con contenido fósil de ambientes de cuenca (Formación San Felipe, Formación Méndez) los espesores presentes son de 78 m\n\n");
			fclose(furbero);
			printf("La informacion del pozo Furbero 1543 se ha guardado en el archivo Furbero.txt");
			break;
		case 5:
			furbero=fopen("Furbero.txt", "a+t");
			fprintf(furbero, "%s","Pozo Furbero 1797\n\n1. Jurásico medio está caracterizado por depósitos de 200 m de terrígenos continentales (litoarenitas de grano grueso), que se acumularon sobre un basamento ígneo-metamórfico\n\n2. En el Cretácico inferior se depositaron calizas tipo mudstone con intercalación de calizas tipo packstone en ambientes marinos abiertos (Formación Tamaulipas Inferior) con el inicio de desarrollo de grandes plataformas carbonatadas de 98 m de espesor.\n\n3. Durante el Cretácico Superior, del Turoniano al Mastrichtian, rocas caracterizadas por elevado contenido de materia orgánica (Formación Agua Nueva) que varían verticalmente de carbonatos tipo wackstone a packstone de ambientes de cuenca (Formación San Felipe, Formación Méndez) los espesores presentes son de 48 m.\n\n");
			fclose(furbero);
			printf("La informacion del pozo Furbero 1797 se ha guardado en el archivo Furbero.txt");
			break;
		case 6:
			furbero=fopen("Furbero.txt", "a+t");
			fprintf(furbero, "%s","Pozo Furbero 2328\n\n1. Jurásico medio está caracterizado por depósitos de 105 m de terrígenos continentales (litoarenitas de grano grueso), que se acumularon sobre un basamento ígneo-metamórfico\n\2. Durante el Jurásico superior se depositaron sedimentos depositando sedimentos calcáreo-arcillosos con altos contenidos de materia orgánica con espesores de aproximadamente 68 m, sedimentos terrígenos depositados sobre los altos de basamento aún emergentes.\n\n3. En el Cretácico inferior se depositaron calizas tipo mudstone con intercalación de calizas tipo packstone en ambientes marinos abiertos (Formación Tamaulipas Inferior) con el inicio de desarrollo de grandes plataformas carbonatadas de 76 m de espesor.\n\n");
			fclose(furbero);
			printf("La informacion del pozo Furbero 2328 se ha guardado en el archivo Furbero.txt");
			break;
		default:
			printf("Opncion invalida");	
	}
	hacer= 's';
	do
    {
    printf("\nDesea informacion de otro pozo (s/n): \n");
    scanf("%c",&hacer);	
    }
    while(hacer != 's' && hacer != 'n');
	}
	while(hacer != 'n');
	printf("Adios");
	return 0;
	
}
