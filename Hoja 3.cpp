#include "pch.h"
#include <iostream>
#include <string>
#include <locale.h>

using namespace System;
using namespace std; 

//Hice lo que pude :'v, espero este bien

typedef struct Fechas {
    int dia=31; 
    string meses = "febrero";
    int anio=2022; 
};
typedef struct NImaginarios {
    string arr[5] = { "1i", "2i", "3i", "4i", "5i" }; 
};

typedef struct Persona {
    int dni = 12345678; 
    string nombre = "Juan "; 
    string apellido = "Mesias"; 
};
typedef struct Empleados {
    int sueldo = 1092; 
    string codigo = "C14FAW134F"; 
    int horas = 12; 
    int produccion = 100; 
};
typedef struct Juego {
    string nombreper = "Tsubasa"; 
    string nombreproyec = "Ice Wind vector";
    string nomBoss = "Sobek"; 
    int nivel = 80; 
    string nombreMundo = "Aesperia"; 
    string nombreJuego = "Tower of Fantasy"; 
    string catalago = "Aventura"; 

};


int main()
{
    setlocale(LC_ALL, "");
    Fechas fch;
    NImaginarios num;
    Persona p;
    Empleados emp;
    Juego jg;

    cout << "Es el dia " << fch.dia << " de " << fch.meses << " del año " << fch.anio << endl;
    cout << "Numeros imaginarios: " << endl; for (int i = 0; i < 5; i++)
    {
        cout << num.arr[i] << endl;
    }
    cout << endl;
    cout << "La persona " << p.nombre << p.apellido << " tiene como DNI: " << p.dni <<
        " y su fecha de nacimiento es el dia " << fch.dia << " de " << fch.meses <<
        " del año " << fch.anio << endl;
    cout << endl;
    cout << "El empleado 1 tiene sueldo de " << emp.sueldo <<
        " y su codigo de empleado es " << emp.codigo << endl;
    cout << endl;
    cout << "El empleado trabaja " << emp.horas << "hrs" << endl;
    cout << endl;
    cout << "El empleado a destajo gana " << emp.produccion << "por produccion" << endl;
    cout << endl;

    cout << endl; 
    cout << "El juego " << jg.nombreJuego << "es un juego de " << jg.catalago << " que se da en el mundo de " << jg.nombreMundo <<
        " en la cual el personaje " << jg.nombreper << " de nivel " << jg.nivel << " tendra que derrotar a " << jg.nomBoss << " con su proyectil " <<
        jg.nombreproyec << endl; 

    return 0;
}
