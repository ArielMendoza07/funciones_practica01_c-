// practica01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

///archivos cabecera
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <iomanip>
#include <string.h>

///prototipos de funciones
void portada(void);
void menu(void);
void adios(void);
void cuadrados(void);
void rectangulos(void);
void triangulos(void);
///bool validar_entrada(const string& entrada);

using namespace std;

///definiciones #define
#define NUM 10;
#define Pi 3.1416
///variables globales
char resp; ///respuesta del usuario

int main()
{
    int op; ///declaracion de variables

    do { ///inicio de bucle do-while
        system("cls");
        system("color 0f");
        setlocale(LC_CTYPE, "Spanish");
        cout << "\t\t" << " _____             _                           _____ _       " << endl;
        cout << "\t\t" << "|   __|_ _ ___ ___|_|___ ___ ___ ___    _ _   |   __|_|___" << endl;
        cout << "\t\t" << "|   __| | |   |  _| | . |   | -_|_ -|  | | |  |   __| | . | | |  _| .'|_ -|" << endl;
        cout << "\t\t" << "|__|  |___|_|_|___|_|___|_|_|___|___|  |_  |  |__|  |_|_  |___|_| |__,|___|" << endl;
        cout << "\t\t" << "                                       |___|          |___|                    " << endl;
        cout << endl << endl;

        system("pause");

        ///llamadas a funciones
        portada(); 
        menu();
        cin >> op;

        switch (op) {
        case 0:
            adios();
            break;
        case 1:
            cuadrados();
            break;
        case 2: 
            rectangulos();
            break;
        case 3: 
            triangulos();
            break;
        default:
            cout << "\t\t" << "Opcion no valida!" << endl;
            cout << "\t\t" << "Favor de validar..." << endl;
            break;
        }///cierre de switch

        cout << "¿Desea repetir? (s/si): ";

        ///validacion de entrada de tipo try-catch
        try{
            cin >> resp;
            if (!isalpha(resp)){
                throw invalid_argument("Entrada invalida. Ingresa datos correctos...");
            }
        }
        catch (const exception& e) {
            cerr << "Se ha producido una excepcion. " << e.what() << endl;
            resp = 'n';
        }

    } while (resp == 's' or resp == 'si');

    return 0;
} ///cierre de main

///cuerpo de prototipos de las funciones
void portada(void) {
    system("cls");
    system("color 0a");

    ///UAEH portada
    cout << "\t\t" << "  _   _   _    _____ _   _ " << endl;
    cout << "\t\t" << " | | | | / \  | ____| | | | " << endl;
    cout << "\t\t" << " | | | |/ _ \ |  _| | |_| |" << endl;
    cout << "\t\t" << " | |_| / ___ \| |___|  _  | " << endl;
    cout << "\t\t" << "  \___/_/   \_\_____|_| |_|" << endl;
    cout << endl << endl;

    cout << "\t\t" << " _____ _             _            _____                   _           _             _      " << endl;
    cout << "\t\t" << "|     |_|___ ___ ___|_|___ ___   |     |___ _____ ___ _ _| |_ ___ ___|_|___ ___ ___| |___ " << endl;
    cout << "\t\t" << "|   --| | -_|   |  _| | .'|_ -|  |   --| . |     | . | | |  _| .'|  _| | . |   | .'| | -_|_ -|" << endl;
    cout << "\t\t" << "|_____|_|___|_|_|___|_|__,|___|  |_____|___|_|_|_|  _|___|_| |__,|___|_|___|_|_|__,|_|___|___|" << endl;
    cout << endl << endl;

    cout << "\t\t" << "Fundamentos de Programacion" << endl;
    cout << "\t\t" << "Nombre: Angel Ariel Mendoza Lopez"<<endl;
    cout << "\t\t" << "N. de cuenta: 499084"<<endl;
    cout << "\t\t" << "Semestre: 1°" <<endl;
    cout << "\t\t" << "Grupo: 2" << endl;
    cout << "\t\t" << "Correo: me499084@uaeh.edu.mx" << endl;
    cout << endl << endl;
    system("pause");
}

void menu(void) {
    system("cls");
    system("color 0a");
    cout << "\t\t\t" << "********************************" << endl;
    cout << "\t\t\t" << "+        1) Cuadrados          +" << endl;
    cout << "\t\t\t" << "+        2) Rectangulos        +" << endl;
    cout << "\t\t\t" << "+        3) Triangulos         +" << endl;
    cout << "\t\t\t" << "+        0) Salir              +" << endl;
    cout << "\t\t\t" << "********************************" << endl;
    cout << "\t\t\t" << "Elegir la opcion: ";



}

void cuadrados(void) {
    system("cls");
    system("color 0a");

    cout << "********************************" << endl;
    cout << "*****       CUADRADOS       ****" << endl;
    cout << "********************************" << endl;
    cout << endl;

    cout << "Cuadrado ancho" << endl;
    for (int i = 1; i <= 10; i++) {///ciclo externo
        for (int j = 1; j <= 10; j++) { ///ciclo interno
            cout << setw(2) << '*';
        }
        cout << endl;
    }

    cout << endl;

    cout << "Cuadrado delgado" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << setw(1) << '*';
        }
        cout << endl;
    }
    cout << endl;
} ///fin de funcion de cuadrados

void rectangulos(void) {
    system("cls");
    system("color 0a");

    cout << endl;
    cout << "********************************" << endl;
    cout << "*****      RECTANGULOS      ****" << endl;
    cout << "********************************" << endl << endl;

    cout << endl;

    cout << "Rectangulo horizontal" << endl;
    for (int i = 1; i <= 5; i++) {///ciclo externo
        for (int j = 1; j <= 20; j++) { ///ciclo interno
            cout << setw(1) << '*';
        }
        cout << endl;
    }

    cout << endl;

    cout << "Rectangulo vertical" << endl;
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << setw(1) << '*';
        }
        cout << endl;
    }

    cout << endl;
} ///fin de funcion de rectangulos

void triangulos(void) {
    system("cls");
    system("color 0a");

    cout << endl;
    cout << "********************************" << endl;
    cout << "*****      TRIANGULOS      *****" << endl;
    cout << "********************************" << endl << endl;

    cout << endl;

    cout << "1) Original" << endl;

    for (int i = 1; i <= 10; i++) {///ciclo externo
        for (int j = 1; j <= i; j++) { ///ciclo interno
            cout << setw(4) << '*';
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "2) Reflejo" << endl;
    ///reflejo
    for (int i = 1; i <= 10; i++) {
        // Espacios en blanco antes de los asteriscos en cada fila
        for (int j = 1; j <= 10 - i; j++) {
            std::cout << setw(4) << " ";
        }
        // Asteriscos en cada fila
        for (int k = 1; k <= i; k++) {
            cout << setw(4) << "*";
        }
        std::cout << endl;
    }

    cout << endl << endl;

    cout << "3) Original" << endl;
    int v = 1; // Cambia el valor inicial de var
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < v; j++) { // Cambia la condición en el bucle interno
            cout << setw(2) << '*';
        }
        cout << endl;
        v++; // Cambia la dirección en la que var aumenta
    }


    cout << endl << endl;

    cout << "4) Reflejo" << endl;
    int var = 10;
    for (int i = 0; i < 10; i++) {
        for (int j = var; j >= 1; j--) {
            cout << setw(2) << '*';
        }
        cout << endl;
        var--;
    }

    cout << endl << endl;


} ///cierre de triangulos

void adios(void) { ///funcion de despedida
    system("cls");
    system("color 0a");

    cout << "..........................................." << endl;
    cout << "..... Gracias por utilizar el programa ....." << endl;
    cout << "............................................" << endl;
}

