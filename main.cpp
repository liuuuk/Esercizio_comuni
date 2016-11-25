std::string file_by_row(std::ifstream &inf){
  std::string st ;
  if(inf.is_open()){
    std::getline(inf,st);
    
  }
  return st;//nel caso non sia aperta devo tornare una stringa 
}
