# Juegos-de-los-Pancakes-aplicando-busqueda-en-profundidad
Juego de los pancakes (pancake sorting) aplicando busqueda en profundidad o tambien DFS en ingles.

Hecho por Marcos Zacarias, ITC-TM, Universidad Autonoma de Baja California Sur

Pequeña explicacion de las funciones:

--"void voltear(string& pancakes, int k)" 
Esta función recibe una cadena de caracteres, en este caso, los pancakes, y un entero k, y voltea los primeros k caracteres de la cadena. Se utiliza para simular la acción de voltear un número determinado de pancakes en una pila.

--"bool esta_ordenada(string pancakes)" 
Esta función recibe una cadena de caracteres pancakes y devuelve true si la cadena está ordenada de forma ascendente, es decir, si cada caracter es mayor o igual al caracter que le precede en la cadena. Se llama para verificar si el parametro que recibe esta ordenado.

--"vector generar_sucesores(string pancakes)" 
Esta función recibe una cadena de caracteres pancakes y devuelve un vector de cadenas de caracteres, son las posibles opciones de voltear distintos numeros de pancakes del arreglo. Se usa para generas sucesores de la cadena actual que recibe y los agrega a la cola de busqueda.

--"string generar_caracteres_aleatorios(int n)" 
Esta función recibe un entero n y devuelve una cadena de caracteres de longitud n, se usa para generar caracteres aleatorios, asi ahorrando estar pidiendo al usuario que se ingrese caracter por caracter.

--"void dfs(string pancakes)"
La función dfs es una función recursiva que implementa la búsqueda en profundidad (DFS). Esta función recibe como parámetros los pancakes actuales(curr), la configuración final ordenada de los pancakes (end), un conjunto de configuraciones visitadas (visited), la profundidad actual (depth), la profundidad máxima permitida (max_depth) y una variable para contar el número de nodos visitados (count).

--"int main()" 
Esta es la función principal del programa. Solicita al usuario el número de caracteres de la pila de pancakes, genera una configuración aleatoria de pancakes utilizando la función generar_caracteres_aleatorios y llama a la función dfs para llevar a cabo la búsqueda por amplitud.
