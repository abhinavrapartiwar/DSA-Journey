#include <iostream>
#include <fstream>
#include <vector>
#include <limits>
using namespace std;

const int inf = numeric_limits<int>::max();
const string output_dir = "step";

void printMatrix(const vector<vector<int>> &matrix, const string &filename)
{
    ofstream file(filename);
    for (const vector<int> &row : matrix)
    {
        for (int val : row)
        {
            if (val == inf)
            {
                file << "inf\t";
            }
            else
            {
                file << val << "\t";
            }
        }
        file << endl;
    }
    file.close();
}

int main()
{
    // Read input graph from a text file
    int V, E;
    ifstream input("input.txt");
    input >> V >> E;
    vector<vector<int>> dist(V, vector<int>(V, inf));

    for (int i = 0; i < V; ++i)
    {
        dist[i][i] = 0;
    }

    for (int i = 0; i < E; ++i)
    {
        int u, v, w;
        input >> u >> v >> w;
        dist[u][v] = w;
    }
    input.close();

    // Perform Floyd-Warshall algorithm
    for (int k = 0; k < V; ++k)
    {
        for (int i = 0; i < V; ++i)
        {
            for (int j = 0; j < V; ++j)
            {
                if (dist[i][k] != inf && dist[k][j] != inf)
                {
                    if (dist[i][k] + dist[k][j] < dist[i][j])
                    {
                        dist[i][j] = dist[i][k] + dist[k][j];
                        printMatrix(dist, output_dir + to_string(k) + ".txt");
                    }
                }
            }
        }
    }
    cout << "End of code" << endl;
    return 0;
}
