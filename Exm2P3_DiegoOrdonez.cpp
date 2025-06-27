#include"Jugador.h"
#include"Apuesta.h"
#include <iostream>
using namespace std;

void registrar_Nuevo_Jugador(vector<Jugador*> casino) {
    vector<Apuesta*> apuestas;
    int id, saldo,level;
    string name;

    cout << "ingrese el Id del jugador";
    cin >> id;
    cout << "ingrese el nombre del Jugador";
    cin >> name;
    cout << "Ingrese el saldo inicias del Jugador";
    cin >> saldo;
    cout << "Ingrese la hablilidad del Jugador";
    cin >> level;

   // Jugador = new Jugador(apuestas, id, name, saldo, level)
    casino.push_back(new Jugador(apuestas, id, name, saldo, level));
    
};

void menu()
{
    int opcion;
    do {
        cout << "MENU" << endl;
        cout << "1. Registrar nuevo jugador" << endl;
        cout << "2. Listar Jugador " << endl;
        cout << "3. Eliminar Jugador" << endl;
        cout << "4. Buscar Jugador por ID" << endl;
        cout << "5. Registrar una apuesta " << endl;
        cout << "6. Guardar Jugadores" << endl;
        cout << "7. Cargar Jugadoers" << endl;
        cout << "8. Salir" << endl;

        cin >> opcion;
        switch (opcion != 0)
        {
        case 0: {

            break;
        };

        case 1: {
            


        };
              break;
        case 2: {
            
        };
              break;
        default:
            menu();
            break;
        };
    } while (opcion != 0);
};

int main()
{
    vector<Jugador*> casino;
    menu();
}

