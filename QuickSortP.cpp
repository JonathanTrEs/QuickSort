
#include "QuickSortP.h"

QuickSortP::QuickSortP(int n) : Problema::Problema() {
  _n = n;
  _ini = 0;
  _fin = _n - 1;
  _v = new int[_n];
  iniciarVector();
}

QuickSortP::QuickSortP(int n, int* v, int ini, int fin) {
  _n = n;
  _v = v;
  _ini = ini;
  _fin = fin;
}

QuickSortP::~QuickSortP() {

}

void QuickSortP::iniciarVector() {
  cout << "Introduzca " << _n << " elementos del vector" << endl;
  for (int i = 0; i < _n; i++)
    cin >> _v[i];
}

bool QuickSortP::isCasoMinimo() {
  return (_fin <= _ini);
}

pair<Problema*,Problema*> QuickSortP::descomponer() {
  int pivote = partition(_v, _ini, _fin);
  pair<Problema*,Problema*> subProblemas;
  subProblemas.first = new QuickSortP(_n, _v, _ini, pivote - 1);
  subProblemas.second = new QuickSortP(_n, _v, pivote + 1, _fin);
  return subProblemas;
}

int QuickSortP::partition(int* v, int ini, int fin) {
  int left;
  int right;
  int pivot;
  int temp;
 
  pivot = v[ini];
  left = ini;
  right = fin;
 
  while (left < right) {
    while (v[right] > pivot) {
      right--;
    }
 
    while ((left < right) && (v[left] <= pivot)) {
      left++;
    }
 
    if (left < right) {
      temp = v[left];
      v[left] = v[right];
      v[right] = temp;
    }
  }
 
  temp = v[right];
  v[right] = v[ini];
  v[ini] = temp;
 
  return right; 
}

void QuickSortP::solver(Solucion* s) {
  ((QuickSortS*)s)->setValor(_v, _n); 
}