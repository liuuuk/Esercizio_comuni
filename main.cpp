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

std::string string_sep(const std::string &str){
 
	std::stringstream ss;
	std::string s;

 	ss.str (str);
	
	std::getline(ss, s, ',');
  return s;
}
