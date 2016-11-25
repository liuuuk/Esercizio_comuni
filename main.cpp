#include <iostream>
#include <string>
#include <sstream> 
#include <stdlib.h>

std::string file_by_row(std::ifstream &inf){
  std::string st ;
  if(inf.is_open()){
    std::getline(inf,st);
    return st;  
  else{
    throw("File non aperto");  
  }
  //nel caso non sia aperta devo tornare una stringa 
}

comune &string_to_comune(const std::string &str){
 
	std::stringstream ss;
	std::string s;
	comune c;

 	ss.str (argv[1]);
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
