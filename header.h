#pragma once

#define OVERFLOW (unsigned int)INT_MAX+1

typedef int *Matr;

typedef struct Graph Graph;
struct Graph {
    int V;
    int E;
    Matr *Adj;
};

typedef struct distance distance;
struct distance {
    unsigned int length;
    int from;
    int overflow;
};


void dijkstra(char *in, char *out);

Graph *create_graph(unsigned int n_vertices, unsigned int n_edges);

void free_graph(Graph *G);

void errors(int err);

void print_help(void);
