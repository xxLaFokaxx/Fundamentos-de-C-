#include <iostream>
#include <string>

using namespace std;

const int MAX_PRODUCTOS = 100;
const int MAX_LONG_NOMBRE = 30;
const int MAX_LONG_PROVEEDOR = 30;

struct Producto {
    char nombre[MAX_LONG_NOMBRE];
    float precio;
    int cantidad;
    char proveedor[MAX_LONG_PROVEEDOR];
};

Producto inventario[MAX_PRODUCTOS];
int cantidadProductos = 0;

void agregarProducto() {
    if (cantidadProductos < MAX_PRODUCTOS) {
        Producto nuevoProducto;
        cout << "Ingrese el nombre del producto: ";
        cin.getline(nuevoProducto.nombre, MAX_LONG_NOMBRE);
        cout << "Ingrese el precio del producto: ";
        cin >> nuevoProducto.precio;
        cout << "Ingrese la cantidad en stock del producto: ";
        cin >> nuevoProducto.cantidad;
        cin.ignore();
        cout << "Ingrese el proveedor del producto: ";
        cin.getline(nuevoProducto.proveedor, MAX_LONG_PROVEEDOR);
        inventario[cantidadProductos] = nuevoProducto;
        cantidadProductos++;
        cout << "Producto agregado correctamente" << endl;
    } else {
        cout << "El inventario esta lleno" << endl;
    }
}

void mostrarInventario() {
    cout << "Inventario de la tienda:" << endl;
    cout << "Nombre\tPrecio\tCantidad\tProveedor" << endl;
    for (int i = 0; i < cantidadProductos; i++) {
        cout << inventario[i].nombre << "\t" << inventario[i].precio << "\t" << inventario[i].cantidad << "\t" << inventario[i].proveedor << endl;
    }
}

void buscarProductoPorNombre() {
    char nombreBuscado[MAX_LONG_NOMBRE];
    cout << "Ingrese el nombre del producto que desea buscar: ";
    cin.getline(nombreBuscado, MAX_LONG_NOMBRE);
    bool encontrado = false;
    for (int i = 0; i < cantidadProductos; i++) {
        if ((inventario[i].nombre, nombreBuscado) == 0) {
            cout << "Producto encontrado:" << endl;
            cout << "Nombre\tPrecio\tCantidad\tProveedor" << endl;
            cout << inventario[i].nombre << "\t" << inventario[i].precio << "\t" << inventario[i].cantidad << "\t" << inventario[i].proveedor << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Producto no encontrado" << endl;
    }
}

void actualizarStock() {
    char nombreBuscado[MAX_LONG_NOMBRE];
    cout << "Ingrese el nombre del producto que desea actualizar el stock: ";
    cin.getline(nombreBuscado, MAX_LONG_NOMBRE);
    bool encontrado = false;
    for (int i = 0; i < cantidadProductos; i++) {
        if ((inventario[i].nombre, nombreBuscado) == 0) {
            cout << "Ingrese la nueva cantidad en stock del producto: ";
            cin >> inventario[i].cantidad;
            encontrado = true;
            cout << "Stock actualizado correctamente" << endl;
            break;
        }
    }
    if (!encontrado) {
        cout << "Producto no encontrado" << endl;
    }
}
void eliminarProducto() {
    char nombreBuscado[MAX_LONG_NOMBRE];
    cout << "Ingrese el nombre del producto que desea eliminar: ";
    cin.getline(nombreBuscado, MAX_LONG_NOMBRE);
    bool encontrado = false;
    for (int i = 0; i < cantidadProductos; i++) {
        if ((inventario[i].nombre, nombreBuscado) == 0) {
            encontrado = true;
            for (int j = i; j < cantidadProductos - 1; j++) {
                inventario[j] = inventario[j + 1];
            }
            cantidadProductos--;
            cout << "Producto eliminado correctamente" << endl;
            break;
        }
    }
    if (!encontrado) {
        cout << "Producto no encontrado" << endl;
    }
}

int main() {
    int opcion;
    do {
        cout << "Bienvenido al programa de gestion de inventario" << endl;
        cout << "1. Agregar producto" << endl;
        cout << "2. Mostrar inventario" << endl;
        cout << "3. Buscar producto por nombre" << endl;
        cout << "4. Actualizar stock de un producto" << endl;
        cout << "5. Eliminar producto" << endl;
        cout << "6. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cin.ignore();
        switch (opcion) {
            case 1:
                agregarProducto();
                break;
            case 2:
                mostrarInventario();
                break;
            case 3:
                buscarProductoPorNombre();
                break;
            case 4:
                actualizarStock();
                break;
            case 5:
                eliminarProducto();
                break;
            case 6:
                cout << "Gracias por utilizar el programa de gestion de inventario" << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while (opcion != 6);
    return 0;
}
