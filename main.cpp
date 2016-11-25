#include <iostream>
#include <string>
#include <sstream> 
#include <stdlib.h>
#include "comune.h"
#include "comuni.h"

#include <fstream>

comune &string_to_comune(const std::string &str){
 
	std::stringstream ss;
	std::string s;
	comune c;

 	ss.str (str);
	std::getline(ss, s, ',');
	c.nome = s;

	std::getline(ss, s, ',');
	c.ind = s;

	std::getline(ss, s, ',');
	c.cap = atoi(s.c_str());

	std::getline(ss, s, ',');
	c.sup = atoi(s.c_str());

	std::getline(ss, s, ',');
	c.asl = s;

	std::getline(ss, s, ',');
	c.cod_istat = atoi(s.c_str());

	std::getline(ss, s, ',');
	c.distanza_mi = atoi(s.c_str());
	

	return c;
}

void file_by_row(std::ifstream &stream, comuni &list){

  std::string line;

  while(std::getline(stream, line)){ //Finchè c'è qlcs da leggere

  	comune c;
  	c = string_to_comune(line); //trasforma la string in comune
  	list.add_comune(c); //aggiungilo alla lista di comuni

  }

}



int main(int argc, char const *argv[])
{
	std::ifstream infile("thefile.txt");

	comuni list_c; //oggetto comuni

	file_by_row(infile, list_c);

	return 0;
}