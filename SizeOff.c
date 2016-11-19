#include<stdio.h>
 	 
int main()
{	 
 	FILE* fichero;
 	 
 	fichero = fopen("datos.txt","w");//abre el fichero para escribir en el
 	fprintf(fichero, "Tipo de dato    | Tamanio en bytes");
 	fprintf(fichero, "\n_______________________________ ");
 	fprintf(fichero,"\nInt              |  %d", sizeof(int));
 	fprintf(fichero,"\nfloat           |  %d", sizeof(float));
 	fprintf(fichero,"\ndouble       |  %d", sizeof(double));
 	fprintf(fichero,"\nchar            |  %d", sizeof(char));
 	fprintf(fichero,"\nlong            |  %d", sizeof(long));
 	 
 	fclose(fichero);//cierra el fichero para su posterior uso
 	 
 	return 0;
}	 
