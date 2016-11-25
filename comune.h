#ifndef COMUNE_H
#define COMUNE_H

#include <iostream>
#include <string>

struct comune {

	std::string nome;	
	std::string ind;
	int cap;
	int sup;
	std::string asl;
	int cod_istat;
	int distanza_mi;
	
	comune() : nome(""), ind(""), cap(0), sup(0), asl(""), 
				cod_istat(0), distanza_mi(0) {}

	comune(const std::string &n,
			const std::string &i, 
			const int cap, const int sup, 
			const std::string &asl, 
			const int cod_istat, 
			const int distanza_mi) : nome(n), ind(i),
									cap(cap), sup(sup),
									asl(asl), cod_istat(cod_istat),
									distanza_mi(distanza_mi) {}
	
};

std::ostream &operator<<(std::ostream &os, const comune &c);

#endif