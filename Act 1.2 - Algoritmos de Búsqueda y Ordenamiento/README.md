Análisis de complejidad:

Ordena Selección/Selection Sort
#Dos ciclos anidados
En el peor caso cuando se acomoda de manera invertida, podemos ver que se tendria que hacer (n*n+1)/2 pasos. Es por ello que 0(n^2) es la complejidad.


Ordena Bubuja/Bubble Sort
#Dos ciclos anidados
Como en Seleccion Sort su peor caso es cuando esta invertido el arreglo y los pasos son (n*n+1)/2 por lo que O(n^2) es la complejidad.

Ordena Merge /Merge Sort
#Splits recursivos y recorridos lineales.
Se hacen recursiones para partir de complejidad log 2, además de que en cada partición se efectua un recorrido con menor coste que el lineal. Por lo que dejamos la complejidad en (n*log 2)

Busqueda secuencial
#Recorrido lineal
Es fácil ver que el peor caso es cuando se efectuan n operaciones es decir O(n) cuando el elemento buscado es el último del array o ya no esta

Busqueda binaria.
#Split recursivo
Facilmente denotamos la complejidad como log 2, pues se parte a la mitad. Si bien es mas facil que la busqueda secuencial tambien exige un acomodo anterior
