#include "comune.h"

std::ostream &operator<<(std::ostream &os, const comune &c) {
	
	os << "[] " << c.nome << " " << c.ind << " " << c.cap << " " << c.sup;

	os << c.asl << " " << c.cod_istat << " " << c.distanza_mi;

	return os;
}