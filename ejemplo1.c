#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
char pensar(); //Funcion
       char almacen[20]; //Palabras-letras (char)
       int resul; //Utilizamos int porque usaremos numeros (int)
       
main() {
       system("cls"); //Limpia pantalla
       printf("1)Guardar dato\n2)Leer dato\n3)Salir"); //Escribe caracteres
       printf("\n\n>");
      scanf("%s",&resul);//Guarda en una variable
      
       if (resul =='1') {//Se abre parentesis cuando la sentencia IF tiene mas de una linea
          printf("\nIntroduce el dato>");
          scanf("%s",&almacen);}//Y luego se cierra en la ultima linea
               
       if (resul =='2')//Aqui no hace falta "{" porque solo usa una linea
          pensar();//1 linea
       
       if (resul =='3')
          exit(0); //Salir
       
       main(); //Llama a main de nuevo(vuelve al inicio)
                }
                     
char pensar(){//En las funciones siempre abrir los "{" "}"
             printf("Datos: %s\n\n",&almacen);
             system("pause");
             }
