#include"Jugador.h"
#include"Apuesta.h"
#include <iostream>
using namespace std;

void registrar_Nuevo_Jugador(vector<Jugador*> &casino) {
    vector<Apuesta*> apuestas;
    int id, saldo,level;
    string name;

    cout << "ingrese el Id del jugador"<< endl;
    cin >> id;
    cout << "ingrese el nombre del Jugador" << endl;
    cin >> name;
    cout << "Ingrese el saldo inicias del Jugador" << endl;
    cin >> saldo;
    cout << "Ingrese la hablilidad del Jugador" << endl;
    cin >> level;

    Jugador* jugador = new Jugador(apuestas, id, name, saldo, level);
    casino.push_back(jugador);
};

void listar_Jugadores(vector<Jugador*> casino) {

    for (int i = 0; i < casino.size(); i++) {
        cout << i;
        casino[i]->toString();
    }
       
};

void menu()
{
    vector<Jugador*> casino;
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
        switch (opcion)
        {
        case 1:

            registrar_Nuevo_Jugador(casino);
            break;


        case 2:

            listar_Jugadores(casino);

            break;
        case 3:break;
        case 4: break;
        case 5: break;
        case 6: break;
        case 7: break;

        case 8: 
            opcion = 8 ;
            break;
        default:
            menu();
            break;
        };
    } while (opcion != 8);
};

int main()
{
    
    menu();
}

