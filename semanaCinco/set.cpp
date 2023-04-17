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

#include <set>
#include <iostream>

using namespace std;

int main() {
  /* Crear un set de enteros. */
  set<int> mySet;

  mySet.insert(10);
  mySet.insert(20);
  mySet.insert(30);

  /* Imprimir el set. */
  cout << "Set inicial: ";
  for (auto it = mySet.begin(); it != mySet.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  /* Insertar un elemento repetido. */
  mySet.insert(20);

  /* Imprimir el set nuevamente. */
  cout << "Set con elemento repetido: ";
  for (auto it = mySet.begin(); it != mySet.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  /* Eliminar un elemento del set. */
  mySet.erase(20);

  /* Imprimir el set final. */
  cout << "Set final: ";
  for (auto it = mySet.begin(); it != mySet.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}
