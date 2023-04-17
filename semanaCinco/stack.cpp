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

#include <stack>
#include <iostream>

using namespace std;

int main() {
  stack<int> s;

  /* Comprobamos si la pila está vacía. */
  if (s.empty()) {
    cout << "La pila esta vacia" << endl;
  }

  /* Elementos a la pila. */
  s.push(10);
  s.push(20);
  s.push(30);

  /* Obtener el tamaño de la pila. */
  cout << "El tamano de la pila es: " << s.size() << endl;

  /* Mostrar el elemento superior de la pila sin sacarlo. */
  cout << "El elemento superior de la pila es: " << s.top() << endl;

  /* Sacar el elemento superior de la pila. */
  s.pop();

  /* Mostrar el nuevo elemento superior de la pila. */
  cout << "El nuevo elemento superior de la pila es: " << s.top() << endl;

  return 0;
}
