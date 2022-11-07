/*

Usted deberá realizar un programa en Lenguaje C que permita al usuario seleccionar distintas opciones para el control de una máquina de control numérico.
 El programa consta de la función main() y deberá tener también 2 funciones mas, como se detalla a continuación:

1- Función para Calcular la profundidad de corte de la herramienta: Esta función debe pedir al usuario que ingrese un valor entero con la velocidad de rotación de la 
herramienta (revoluciones por minuto: rpm) un entero entre 1000 y 10000. Con el valor ingresado deberá calcular la profundidad de corte lograda en un minuto.
La profundidad de corte [milímetros] en un minuto es:
profundidad = ( √(PI * rpm) ) / 60, (Raíz cuadrada de (PI multiplicado por el valor de rpm), todo esto dividido 60.
La función mostrará el resultado del cálculo y regresará a mostrar el menú de opciones.

2- Función para Calcular el tiempo de mecanizado de piezas: Esta función controla el mecanizado de una pieza y debe solicitar al usuario 2 valores, el primero es el 
espesor de la pieza, entero entre 1 y 10, que representa los milímetros de espesor. El segundo valor es la velocidad de mecanizado: 1: lento, 2: rápido. Con esos 
valores la función debe calcular el tiempo de mecanizado.
Para espesores menores a 5 milímetros el mecanizado con velocidad lenta toma 18 segundos por cada milímetro de espesor, con velocidad rápida toma 12 segundos por 
cada milímetro de espesor.
Para espesores mayores o igual a 5 milímetros el mecanizado con velocidad lenta toma 25 segundos por cada milímetro de espesor, con velocidad rápida toma 20 
segundos por cada milímetro de espesor.
Finalizado el cálculo la función mostrará el resultado obtenido y regresará a mostrar el menú de opciones.

La función main() mostrará un menú de opciones:
1-	Calcular profundidad de corte
2-	Calcular el tiempo de mecanizado
3-	Salir del programa


Si el usuario ingresa la opción 1 o 2 el programa ejecutará la función correspondiente y luego volverá mostrar el menú. El programa finaliza solamente cuando 
el usuario ingrese la opción 3.
*/