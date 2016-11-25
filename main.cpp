#include <iostream>
#include <string>
#include <sstream> 
#include <stdlib.h>
#include "comune.h"
#include "comuni.h"

#include <fstream>

void string_to_comune(const std::string &str, comune &c){
 
	std::stringstream ss;
	std::string s;

 	ss.str (str);
	std::getline(ss, s, ';');
	c.nome = s;

	std::getline(ss, s, ';');
	c.ind = s;

	std::getline(ss, s, ';');
	c.cap = atoi(s.c_str());

	std::getline(ss, s, ';');
	c.sup = atoi(s.c_str());

	std::getline(ss, s, ';');
	c.asl = s;

	std::getline(ss, s, ';');
	c.cod_istat = atoi(s.c_str());

	std::getline(ss, s, ';');
	c.distanza_mi = atoi(s.c_str());


}

void file_by_row(std::ifstream &stream, comuni &list){

  std::string line;
  int count = 0;

  while(std::getline(stream, line)){ //Finchè c'è qlcs da leggere

  	comune c;
  	string_to_comune(line, c); //trasforma la string in comune
  	//std::cout << "Comune: " << count << c << std::endl;
  	list.add_comune(c); //aggiungilo alla lista di comuni
  	count++;
  }

}



int main(int argc, char const *argv[])
{
	
	std::ifstream infile("comuni_prov_mi.csv");

	comuni list_c; //oggetto comuni

	file_by_row(infile, list_c);

	std::cout << list_c << std::endl;
	return 0;
}