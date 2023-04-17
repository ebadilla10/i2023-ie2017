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

#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<int> v;
  /* Agregar elementos al vector v. */
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);

  cout << "Vector original: ";
  for (int i = 0; i < v.size(); i++) {
    /* Impresión del vector elemento por elemento. */
    cout << v[i] << " ";
  }
  cout << endl;

  /* Eliminando el último elemento del vector. */
  v.pop_back();

  cout << "Vector despues de eliminar el ultimo elemento: ";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  /* Se inserta el valor 4 en la posición 1 del vector. */
  v.insert(v.begin() + 1, 4);

  cout << "Vector despues de insertar el valor 4 en la posicion 1: ";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  /* Se elimina el primer elemento del vector. */
  v.erase(v.begin());

  cout << "Vector despues de eliminar el primer elemento: ";
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}
