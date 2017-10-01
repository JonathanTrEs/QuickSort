#ifndef QUICKSORTS_H_
#define QUICKSORTS_H_

#include "Solucion.h"

class QuickSortS: public Solucion {
public:
  QuickSortS();
  virtual ~QuickSortS();

  void resolver();
  void mezcla(pair<Solucion*,Solucion*>);
  Solucion* getInstance();

  void setValor(int*, int);

private:
  int _n;  
  int* _v;
};

#endif /* QUICKSORTS_H_ */