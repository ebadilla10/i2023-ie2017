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

#include <list>
#include <iostream>

using namespace std;

int main() {
  list<int> my_list;

  /* Agregar elementos a la lista. */
  my_list.push_back(1);
  my_list.push_back(5);
  my_list.push_front(9);
  my_list.push_back(6);
  my_list.push_back(2);
  my_list.push_back(3);
  my_list.push_front(0);

  cout << "Elementos de la lista: ";
  for (int x : my_list) {
    cout << x << " ";
  }
  cout << endl;

  /* Eliminar el segundo elemento de la lista. */
  auto it = my_list.begin();
  it++;
  my_list.erase(it);

  cout << "Elementos de la lista despues de eliminar el segundo: ";
  for (int x : my_list) {
    cout << x << " ";
  }
  cout << endl;

  /* Ordenar la lista. */
  my_list.sort();

  cout << "Elementos de la lista ordenados: ";
  for (int x : my_list) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
