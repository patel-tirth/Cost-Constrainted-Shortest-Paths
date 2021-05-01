
#include <iostream>
#include "Graph.h"


int main(int argc, char *argv[]){
  graph g;

  std::vector<graph::vertex_label> bfs_rpt;
  std::vector<graph::vertex_label> dfs_rpt;

  if(argc != 5) {
    std::cout << "usage:  ./bfs <filename> <source-vertex>\n";
    return 0;
  }
  else {
    if(!g.read_file(argv[1])){
      std::cout << "could not open file '" << argv[1] << "'\n";
      return 0;
    }
  }

//   std::cout << "\nADJACENCY-LIST REPRESENTATION:\n\n";
//   g.display();
  g.cpath(argv[2],argv[3],argv[4]);


  return 0;
}

