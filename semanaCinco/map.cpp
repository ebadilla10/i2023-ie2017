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

#include <map>
#include <iostream>

using namespace std;

int main() {
  map<string, int> scores;

  /* Agregar elementos al mapa. */
  scores["Juan"] = 80;
  scores["Pedro"] = 90;
  scores["Maria"] = 85;

  cout << "La puntuacion de Juan es: " << scores["Juan"] << endl;

  /* Comprobar si un elemento está en el mapa. */
  if (scores.count("Pedro")) {
    cout << "Pedro en el mapa" << endl;
  } else {
    cout << "Pedro no en el mapa" << endl;
  }

  /* Iterar sobre los elementos del mapa. */
  cout << "Todos los elementos del mapa:" << endl;
  for (auto it = scores.begin(); it != scores.end(); ++it) {
    cout << it->first << " -> " << it->second << endl;
  }

  /* Eliminar un elemento del mapa. */
  scores.erase("Maria");

  /* Comprobar si el mapa está vacío. */
  if (scores.empty()) {
    cout << "El mapa vacio" << endl;
  } else {
    cout << "El mapa no vacio" << endl;
  }

  return 0;
}
