//Erick Alexander Solares Rosales - 9959 22 5755
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

// Definir la estructura Usuario
struct Usuario {
    string nombre;
    string contrasena;
};

// Función para verificar si un usuario ya existe en el archivo
bool usuarioExiste(string nombreUsuario) {
    ifstream archivoUsuarios("usuarios.txt");
    bool existe = false;
    Usuario usuarioActual;
    while (archivoUsuarios >> usuarioActual.nombre >> usuarioActual.contrasena) {
        if (usuarioActual.nombre == nombreUsuario) {
            existe = true;
            break;
        }
    }
    archivoUsuarios.close();
    return existe;
}

// Función para autenticar a un usuario
bool autenticarUsuario(string nombreUsuario, string contrasena) {
    ifstream archivoUsuarios("usuarios.txt");
    bool autenticado = false;
    Usuario usuarioActual;
    while (archivoUsuarios >> usuarioActual.nombre >> usuarioActual.contrasena) {
        if (usuarioActual.nombre == nombreUsuario && usuarioActual.contrasena == contrasena) {
            autenticado = true;
            break;
        }
    }
    archivoUsuarios.close();
    return autenticado;
}

// Función para agregar un usuario al archivo
void agregarUsuario(string nombreUsuario, string contrasena) {
    ofstream archivoUsuarios("usuarios.txt", ios_base::app);
    archivoUsuarios << nombreUsuario << " " << contrasena << endl;
    archivoUsuarios.close();
}

int main() {
    // Crear el usuario "Administrador" si no existe
    if (!usuarioExiste("Administrador")) {
        agregarUsuario("Administrador", "1234");
    }
    // Pedir al usuario que ingrese su nombre y contraseña
    string nombreUsuario, contrasena;
    cout << "Ingrese su nombre de usuario: ";
    cin >> nombreUsuario;
    cout << "Ingrese su contrasena: ";
    cin >> contrasena;
    // Autenticar al usuario
    if (autenticarUsuario(nombreUsuario, contrasena)) {
        // Mostrar el menu general
        cout << "Bienvenido, " << nombreUsuario << endl;
        cout << "Menu General" << endl;
        cout << "--------------" << endl;
        cout << "1. Catalogos" << endl;
        cout << "2. Informes" << endl;
        cout << "3. Salir del sistema" << endl;
        int opcionMenu;
        cin >> opcionMenu;
        switch (opcionMenu) {
            case 1: {
                // Mostrar el submenú de catálogos
                cout << "Submenu de Catalogos" << endl;
                cout << "--------------" << endl;
                cout << "1. CRUD de estructuras" << endl;
                cout << "2. Volver al menu general" << endl;
                int opcionCatalogos;
                cin >> opcionCatalogos;
                switch (opcionCatalogos) {
                    case 1: {
                        // Mostrar las opciones de CRUD
                        cout << "CRUD de estructuras" << endl;
                        cout << "--------------" << endl;
                        cout << "1. Alta" << endl;
                        cout << "2. Baja" << endl;
                        cout << "3. Modificacion" << endl;
                        cout << "4. Consulta" << endl;
                        break;
                    }
                    case 2: {
                        // Volver al menú general
                        break;
                    }
                    default: {
                        // Opción inválida
                        cout << "Opcion invalida" << endl;
                        break;
                    }
                }
                break;
            }
            case 2: {
                // Mostrar el submenú de informes
                cout << "Submenu de Informes" << endl;
                cout << "--------------" << endl;
                cout << "1. Impresion a TXT de estructuras" << endl;
                cout << "2. Volver al menu general" << endl;
                int opcionInformes;
                cin >> opcionInformes;
                switch (opcionInformes) {
                    case 1: {
                        // Realizar la impresión a TXT
                        cout << "Impresion a TXT de estructuras" << endl;
                        break;
                    }
                    case 2: {
                        // Volver al menú general
                        break;
                    }
                    default: {
                        // Opción inválida
                        cout << "Opcion invalida" << endl;
                        break;
                    }
                }
                break;
            }
            case 3: {
                // Salir del sistema
                cout << "Saliendo del sistema..." << endl;
                break;
            }
            default: {
                // Opción inválida
                cout << "Opcion invalida" << endl;
                break;
            }
        }
    } else {
        // Credenciales inválidas
        cout << "Credenciales invalidas" << endl;
    }
    return 0;
}
