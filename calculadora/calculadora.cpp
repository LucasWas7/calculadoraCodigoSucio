#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int opc;
    do {
        system("cls");
        cout << "*****-----CALCULADORA-----*****" << endl;
        cout << "1.- Suma" << endl;
        cout << "2.- Resta" << endl;
        cout << "3.- Multiplicacion" << endl;
        cout << "4.- Division" << endl;
        cout << "5.- Salir" << endl;
        cout << "Ingresa una opcion: ";
        cin >> opc;
        if (opc == 1)
        {
            system("cls");
            int cantNumeros;
            int res = 0;
            cout << "Ingrese la cantidad de numeros a sumar: ";
            cin >> cantNumeros;
            for (int i = 0; i < cantNumeros; i++)
            {
                int num;
                cout << "Numero " << i+1 << ": ";
                cin >> num;
                res = res + num;
            }
            cout << "Resultado: " << res << endl;
            system("pause");
        }
        if (opc == 2)
        {
            system("cls");
            int cantNumeros;
            int res = 0;
            cout << "Ingrese la cantidad de numeros a restar: ";
            cin >> cantNumeros;
            for (int i = 0; i < cantNumeros; i++)
            {
                int num;
                cout << "Numero " << i + 1 << ": ";
                cin >> num;
                if (i == 0)
                {
                    res = num;
                }
                else {
                    res = res - num;
                }
            }
            cout << "Resultado: " << res << endl;
            system("pause");
        }
        if (opc == 3)
        {
            system("cls");
            int cantNumeros;
            int res = 1;
            cout << "Ingrese la cantidad de numeros a multiplicar: ";
            cin >> cantNumeros;
            for (int i = 0; i < cantNumeros; i++)
            {
                int num;
                cout << "Numero " << i + 1 << ": ";
                cin >> num;
                res = res * num;
            }
            cout << "Resultado: " << res << endl;
            system("pause");
        }
        if (opc == 4)
        {
            system("cls");
            int cantNumeros;
            int res = 1;
            cout << "Ingrese la cantidad de numeros a dividir: ";
            cin >> cantNumeros;
            for (int i = 0; i < cantNumeros; i++)
            {
                int num;
                cout << "Numero " << i + 1 << ": ";
                cin >> num;
                if (i == 0)
                {
                    res = res * num;
                }
                else
                {
                    res = res / num;
                }
            }
            cout << "Resultado: " << res << endl;
            system("pause");
        }
    }while(opc != 5);
    return 0;
}
