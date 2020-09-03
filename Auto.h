#ifndef AUTO_H
#define AUTO_H
#include <ctime>

class Auto {
protected:
	int x;
	int y;
	int matriz[5][4];
	int color[5][4];
	int ancho;
	int alto;
	int pasoX;
	int pasoY;
	int xnueva;
	int ynueva;
	int maxLimitX;
	int maxLimitY;
	int minLimitX;
	int minLimitY;
	clock_t tempo;
	clock_t paso; 
	int velocidad;
public:
	void dibujar();
	void borrar();
	void setLimit(int, int,int, int);
	int getX(){return x;}
	int getY(){return y;}
	Auto();
};

#endif

