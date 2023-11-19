#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <bits/stdc++.h>

using namespace std;

class SparseGraph
{

public:
    SparseGraph()
    {
        node = 3;
        edges = new unordered_set<int>[node]();
    }

    SparseGraph(int n_in)
    {
        node = n_in;
        edges = new unordered_set<int>[node]();
    }

    SparseGraph(const SparseGraph &G)
    {
        node = G.node;
        unordered_set<int> *new_set = new unordered_set<int>[node]();
        for (int i = 0; i < node; i++)
            new_set[i] = G.edges[i];
        delete[] edges;
        edges = new_set;
    }

    void AddEdge(int a, int b)
    {
        edges[a].insert(b);
    }

    void RemoveEdge(int a, int b)
    {
        edges[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const
    {
        if (edges[a].find(b) != edges[a].end())
            return true;
        return false;
    }

    SparseGraph Transpose() const
    {
        SparseGraph result;
        for (int i = 0; i < node; i++)
            for (auto e : edges[i])
                result.AddEdge(e, i);
        return result;
    }

protected:
    int node;
    unordered_set<int> *edges;
};
#endif // __SPARSE_GRAPH_H__
