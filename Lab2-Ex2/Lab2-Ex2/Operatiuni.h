#pragma once
#ifndef OPERATIUNI_H
#define OPERATIUNI_H

class Operatiuni {
public:
	virtual float getSumaTotala() const = 0;
	virtual float getDobanda() const = 0;
	virtual void depunere(float suma) = 0;
	virtual void retragere(float suma) = 0;
	virtual ~Operatiuni() {}
};

#endif 
