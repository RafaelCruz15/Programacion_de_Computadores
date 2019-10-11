#include <iostream>

using namespace std;

int main()
{
    int d=1000000;
    int a,e;
    cout << "                              BIENVENIDO\n\n";
    cout << "                      CAJERO AUTOMATICO 24 HORAS\n\n";
    cout << "\nDigite su clave para comenzar: ";
    cin >> e;

    if(e==1234){
        cout << "\nIngrese la opcion que desea utilizar: ";
        cout << "\n\n1. Retiro ";
        cout << "\n\n2. Tasa de Cambio ";
        cin >> a;

    switch(a)
    {
        double b,c;
    case 1:
        cout << "\nCuanto dinero desea retirar? ";
        cin >> b;
        if (b>d)
        {
            cout << "\nSolo puede retirar valores hasta " << d << "\n";
            cout << "\nGracias por estar en nuestro banco, que tenga un feliz dia.\n";
        } else
        {
            c=(d-b)-2000;
            cout << "\nSu dinero esta en progreso... \n";
            cout << "\nLe informamos que el costo del retiro es de 2000";
            cout << "\n\nSu nuevo saldo es: " << c << "\n";
            cout << "\nGracias por estar en nuestro banco, que tenga un feliz dia.\n";
        }

        break;
    case 2:
        cout << "\nConsulte aqui la tasa de cambio:";
        cout << "\n\n1. Pesos a Dolar (Valor del dolar 2130)";
        cout << "\n\n2. Pesos a Euro (Valor del dolar 2810)";
        cin >> e;
        switch(e)
    {
        double f,g,h,i;
    case 1:
        cout << "\nDigite los pesos a convertir: ";
        cin >> f;
        g=f/2130;
        cout << "\nSus " << f << " pesos son " << g << " dolares.\n";
        cout << "\nGracias por estar en nuestro banco, que tenga un feliz dia.\n";
        break;
    case 2:
        cout << "\nDigite los pesos a convertir: ";
        cin >> h;
        i=h/2810;
        cout << "\nSus " << h << " pesos son " << i << " euros.\n";
        cout << "\nGracias por estar en nuestro banco, que tenga un feliz dia.\n";
        break;
    }
    break;
    }
    } else
    {
        cout << "\nSu contraseña es incorrecta, verifique de nuevo e intente nuevamente.\n";
    }
}
