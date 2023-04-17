/*
 * Copyright (c) 2023 Esteban Badilla Alvarado (@ebadilla10)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Persona {
public:
  string nombre;
  int edad;

  Persona(string n, int e) : nombre(n), edad(e) {}

  bool operator<(const Persona& otra) const {
    /* La función de comparación por defecto utiliza el operador < para
     * comparar las edades. */
    return edad < otra.edad;
  }
};

/* Función de comparación personalizada que establece la prioridad en función
 * del nombre. */
bool cmp_nombre(const Persona& a, const Persona& b) {
  return a.nombre < b.nombre;
}

int main() {
  /* Crear una priority queue de Personas utilizando la función de comparación
   * por defecto. */
  priority_queue<Persona> pq_edad;

  /* Insertar Personas en la priority queue. */
  pq_edad.push(Persona("Ana", 15));
  pq_edad.push(Persona("Carlos", 30));
  pq_edad.push(Persona("Beto", 10));

  /* Imprimir los nombres de las Personas en la priority queue, ordenados por
   * edad. */
  while (!pq_edad.empty()) {
    cout << pq_edad.top().nombre << " ";
    pq_edad.pop();
  }
  cout << endl;

  /* Crear una priority queue de Personas utilizando la función de comparación
   * personalizada. */
  priority_queue<Persona, vector<Persona>, decltype(&cmp_nombre)> pq_nombre(cmp_nombre);

  /* Insertar Personas en la priority queue. */
  pq_nombre.push(Persona("Ana", 50));
  pq_nombre.push(Persona("Carlos", 30));
  pq_nombre.push(Persona("Beto", 25));

  /* Imprimir los nombres de las Personas en la priority queue, ordenados
   * alfabéticamente por nombre. */
  while (!pq_nombre.empty()) {
    cout << pq_nombre.top().nombre << " ";
    pq_nombre.pop();
  }
  cout << endl;

  return 0;
}
