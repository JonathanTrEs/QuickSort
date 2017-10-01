#ifndef QUICKSORTP_H_
#define QUICKSORTP_H_

#include "Problema.h"
#include "QuickSortS.h"

class QuickSortP: public Problema {
public:
  QuickSortP(int);
  QuickSortP(int n, int* v, int ini, int fin);
  virtual ~QuickSortP();
  
  bool isCasoMinimo();
  pair<Problema*,Problema*> descomponer();
  void solver(Solucion* s);
  
  void iniciarVector();
  int partition(int* v, int ini, int fin);
  
private:
  int _n;
  int* _v;
  int _ini;
  int _fin;
};

#endif /* QUICKSORTP_H_ */