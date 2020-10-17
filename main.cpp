/*
################################## PARCIAL_1 INFORMATICA II ##################################
 ############################# DIEGO ALEJANDRO LONDOÑO JIMENEZ ##############################
  #########################################71377279#########################################
*/

#include <iostream>
#include <math.h>

using namespace std;

# define M_PI  3.14159265358979323846  /* pi */


void dispOfenDananCaDefen();
float fnAngulo(int angulo);

int main()
{
    int opcion = 0;


    do
    {

        cout << "****************** MENU DE OPCIONES ******************" << endl
             << endl;
        cout << "Seleccione la opcion que desee usar" << endl
             << endl;
        cout << "0  salir" << endl;
        cout << "1  Generar disparos (al menos tres) ofensivos que comprometan la integridad del cañón defensivo" << endl;
        cout << "2  Generar disparos (al menos tres) defensivos que comprometan la integridad del cañón ofensivo." << endl;
        cout << "3  Dado un disparo ofensivo, generar (al menos tres) disparos defensivos que impida que el cañón defensivo sea destruido sin importar si el cañón ofensivo pueda ser destruido" << endl;

        cout << "4  Dado un disparo ofensivo, generar (al emnos tres) disparo defensivos que impidan que los cañones defensivo y ofensivo puedan ser destruidos." << endl;

        cout << endl;
        cout << "Ingrese su opcion :";
        cin >> opcion;

        enum CasosEnunciados
        {
            salir,
            integridad_canon_defensivo,
            integridad_canon_ofensivo,
            caracteres_numero,
            fjadlksjfklas
        };

        switch (opcion)
        {

        case salir:
            //opcion 0
            cout << endl
                 << "Gracias por usar el programa, no olvide darle like :)" << endl
                 << endl;
            break;

        case        integridad_canon_defensivo      :
            //opcion 1


           dispOfenDananCaDefen();
            break;

        case integridad_canon_ofensivo:
            //opcion 2

            break;

        case caracteres_numero:
            //opcion 3

            break;

        case fjadlksjfklas:
            //opcion 4

            break;

        default:
            cout << "Opcion no valida" << endl;
            break;
        } //fin  switch

    } while (opcion != 0);

    return 0;
}
float fnAngulo(int angulo){
    float radianes = cos((angulo*M_PI)/180);

    return radianes;
}

void dispOfenDananCaDefen(){

    int angulo=0;
    float impre=0;
    cout<<"ingrese el angulo"<<endl;
    cin>>angulo;


    impre=fnAngulo(angulo);

    cout<<"El angulo es "<<impre<<endl;


}
