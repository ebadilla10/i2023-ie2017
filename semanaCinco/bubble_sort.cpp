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
#include <time.h>

using namespace std;

#define SIZE_ARRAY 15

void bubbleSort(int arr[], int n){
  int temp = 0;
  for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - i - 1; j++){
      if(arr[j] > arr[j + 1]){
        temp   = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arreglito[SIZE_ARRAY] = {};
  srand(time(NULL));
  int aleat = rand();
  cout << "Aleat: " << aleat << endl;

  for(int i = 0; i < SIZE_ARRAY; i++){ arreglito[i] = rand() % 10000; }

  for(int i = 0; i < SIZE_ARRAY; i++){ cout << arreglito[i] << " "; }

  bubbleSort(arreglito, SIZE_ARRAY);
  cout << endl;
  for(int i = 0; i < SIZE_ARRAY; i++){ cout << arreglito[i] << " "; }

  return 0;
}
