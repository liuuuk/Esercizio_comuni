#ifndef COMUNI_H
#define COMUNI_H

#include <iostream>
#include <vector>
#include "comune.h"

class comuni{
public:

	typedef unsigned int sz_type;

	comuni();
	explicit comuni(sz_type dim);
	comuni(sz_type dim, const comune &c);
	comuni(const comuni &oth);
	~comuni();

	comuni &operator= (const comuni &oth);
	//comuni &operator+ (const comuni &oth);

	comune &operator[](sz_type index);
	const comune &operator[](sz_type index) const;

	void add_comune(const comune &c);
	void add_comune(const std::string &n,
					const std::string &i, 
					const int cap, const int sup, 
					const std::string &asl, 
					const int cod_istat, 
					const int distanza_mi);

	bool exist(const std::string &nome, comune &out) const;
	
	sz_type get_size() const;
private:
	std::vector<comune> v;
};

std::ostream &operator<<(std::ostream &os, const comuni &c){

	std::vector<comune>::iterator i, ie;
	i = v.begin();
	ie = v.end();

	for (; i != ie; ++i)
		os << *v << std::endl;

	return os;
}

#endif