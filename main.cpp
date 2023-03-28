#include <iostream>
#include <string>
#include <unordered_set>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

// Función que voltea los primeros k pancakes de la pila
void voltear(string& pancakes, int k) {
    int i = 0, j = k - 1;
    while (i < j) {
        char temp = pancakes[i];
        pancakes[i] = pancakes[j];
        pancakes[j] = temp;
        i++;
        j--;
    }
}

// Función que genera una cadena aleatoria de caracteres que representen los pancakes a ordenar
string generar_caracteres_aleatorios(int n) {
    string pancakes = "";
    unordered_set<char> chars_set;
    srand(time(NULL));
    while (chars_set.size() < n) {
        char c = 'a' + rand() % 26;
        if (chars_set.find(c) == chars_set.end()) {
            chars_set.insert(c);
            pancakes += c;
        }
    }
    return pancakes;
}

// Función que verifica si está ordenada
bool esta_ordenada(string pancakes) {
    for (int i = 1; i < pancakes.size(); i++) {
        if (pancakes[i] < pancakes[i-1]) {
            return false;
        }
    }
    return true;
}

// Función que genera los sucesores de una configuración
vector<string> generar_sucesores(string pancakes) {
    vector<string> sucesores;
    for (int i = 1; i <= pancakes.size(); i++) {
        string sucesor = pancakes;
        voltear(sucesor, i);
        sucesores.push_back(sucesor);
    }
    return sucesores;
}

// Función de búsqueda en profundidad
bool dfs(string curr, string end, unordered_set<string>& visited, int depth, int max_depth, int& count){
    visited.insert(curr);
    count++;
    if (curr == end){
        return true;
    }
    if (depth == max_depth){
        return false;
    }
    vector<string> sucesores = generar_sucesores(curr);
    for (string sucesor : sucesores){
        if (visited.count(sucesor) == 0){
            if (dfs(sucesor, end, visited, depth+1, max_depth, count)){
                return true;
            }
        }
    }
    return false;
}

// Función principal
int main() {
    int n;
    cout << "Ingrese el numero de caracteres de pancakes: ";
    cin >> n;
    string pancakes = generar_caracteres_aleatorios(n);
    cout << "Pila de pancakes original: " << pancakes << endl;
    string pancakeEnd = pancakes;
    sort(pancakeEnd.begin(), pancakeEnd.end());
    unordered_set<string> visited;
    int count = 0;
    int max_depth = 30; // profundidad máxima de la búsqueda
    bool found = dfs(pancakes, pancakeEnd, visited, 0, max_depth, count);
    cout << "Pila de pancakes ordenada: " << pancakeEnd << endl;
    if (found){
        cout << "Numero de nodos visitados: " << count << endl;
    }
    else {
        cout << "No se encontro una solucion" << endl;
    }
    return 0;
}
