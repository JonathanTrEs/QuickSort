
#include "QuickSortS.h"

QuickSortS::QuickSortS() : Solucion::Solucion() {
}

QuickSortS::~QuickSortS() {
}

void QuickSortS::resolver() {
  for (int i = 0; i < _n; i++)
    cout << _v[i] << " ";
  cout << endl;
}

void QuickSortS::mezcla(pair<Solucion*,Solucion*> subSoluciones) {
  _v = (((QuickSortS*)subSoluciones.first))->_v;
  _n = (((QuickSortS*)subSoluciones.first))->_n;
}

Solucion* QuickSortS::getInstance() {
  return new QuickSortS();
}

void QuickSortS::setValor(int* v, int n) {
  _v = v;
  _n = n;
}