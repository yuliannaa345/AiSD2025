//Карасс Виталий, МХ-201,Инициализация графа, L0702_242

#include <iostream>
#include "L0702_242.hpp"
using namespace std;

#define MAXV 100



int main() {
Graph graph; 
initialize_graph (graph, 0);
if (graph.nvertices != 0 or graph.nedges != 0 or graph.degree.size() != MAXV or graph.edges.size() != MAXV) {	// Проверка инициализации
  cout << "error initialize_graph";
    }

 return 0;
}