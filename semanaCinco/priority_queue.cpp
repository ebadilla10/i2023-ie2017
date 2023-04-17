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
#include <vector>

using namespace std;

int main() {
  /* Crear una priority queue de enteros. */
  priority_queue<int> pq;

  /* Insertar elementos en la priority queue. */
  pq.push(10);
  pq.push(20);
  pq.push(5);
  pq.push(15);

  /* Imprimir el elemento más alto de la priority queue. */
  cout << "El elemento mas alto de la priority queue es: " << pq.top() << endl;

  /* Eliminar el elemento más alto de la priority queue */
  pq.pop();

  /* Imprimir el elemento más alto de la priority queue después de eliminar uno */
  cout << "El nuevo elemento mas alto de la priority queue es: " << pq.top() << endl;

  /* Crear una priority queue de vectores de enteros. */
  priority_queue<vector<int>> pq2;

  /* Crear un vector de enteros y agregar algunos elementos. */
  vector<int> v1 = {5, 2, 10};

  /* Insertar el vector en la priority queue. */
  pq2.push(v1);

  /* Crear otro vector y agregar algunos elementos. */
  vector<int> v2 = {3, 8, 1};

  /* Insertar el segundo vector en la priority queue. */
  pq2.push(v2);

  /* Imprimir el vector con la suma de los elementos más alta en la priority queue. */
  vector<int> max_vec = pq2.top();
  int sum = 0;
  for (int i = 0; i < max_vec.size(); i++) {
    sum += max_vec[i];
  }
  cout << "El vector con la suma mas alta es: ";
  for (int i = 0; i < max_vec.size(); i++) {
    cout << max_vec[i] << " ";
  }
  cout << "(suma = " << sum << ")" << endl;

  return 0;
}
