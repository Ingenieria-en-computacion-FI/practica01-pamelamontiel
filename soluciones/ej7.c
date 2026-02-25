
// Ejercicio 7
//Sin ejecutar determina cuál dirección es mayor: &m[0][3] o &m[1][0]
// Primero se van a llenar los elementos horizontales, es decir (m[0][0], m[0][1], m[0][2],m[0][3]…) 
// y despues de llenarse se cambia de fila para comenzar con m[1][0].
// &m[0][3]:Base + (3 lugares de distancia desde el inicio x 4 bytes) = Base + 12 bytes
// &m[1][0]:Base + (4 lugares de distancia desde el inicio x 4 bytes) = Base + 16 bytes
// Como 16 > 12. Entonces, &m[1][0] está en una posición de memoria mayor que &m[0][3]

