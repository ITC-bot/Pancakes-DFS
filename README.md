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
Esta es la función principal que realiza la búsqueda en profundidad para ordenar los pancakes. Comienza iniciando con una pila y un conjunto no ordenado visitados. Luego, agrega los pancakes originales a la pila y al conjunto de visitados. A continuación, comienza un ciclo mientras la pila no esté vacía. En cada iteración, obtiene el pancake en la parte superior de la pila (curr_pancakes) y lo saca de la pila. Luego, verifica si curr_pancakes está ordenado y, si es así, imprime la solución encontrada y el número de nodos visitados. De lo contrario, genera los sucesores de curr_pancakes utilizando la función generar_sucesores y los agrega a la pila y al conjunto de visitados si no han sido visitados previamente. Finalmente, repite el ciclo con el próximo pancake en la pila. Si la pila se vacía y no se encuentra una solución, imprime un mensaje indicando que no se encontró una solución y el número de nodos visitados.

--"int main()" 
Esta es la función principal del programa. Solicita al usuario el número de caracteres de la pila de pancakes, genera una configuración aleatoria de pancakes utilizando la función generar_caracteres_aleatorios y llama a la función dfs para llevar a cabo la búsqueda por amplitud.
