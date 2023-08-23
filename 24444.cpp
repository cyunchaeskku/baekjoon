#include <iostream>
#include <list>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int result[100000];
int visited[100000];

void bfs(vector<int>* graph, int N, int R) {
    // int* visited = new int[N]();
    // int* result = new int[N]();

    int cnt=0;
    visited[R] = 1;
    result[R] = ++cnt;

    queue<int> q;
    q.push(R);

    while (q.size()) {
        int u = q.front();
        q.pop();

        for (vector<int>::iterator it = graph[u].begin(); it != graph[u].end(); ++it) {
            int v = *it;
            if (!visited[v]) {
                result[v] = ++cnt;
                q.push(v);
                visited[v] = 1;
            }
        }
        
    }

}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int N, M, R;
    int u, v;
    cin >> N >> M >> R;

    /*
    // initializing graph
    int** graph = new int*[N];
    for (int i=0;i<N;i++) {
        graph[i] = new int[N];
    }
    for (int i=0;i<N;i++)
        for (int j=0;j<N;j++)
            graph[i][j] = 0;
    */

   vector<int>* graph = new vector<int>[N];



    for(int i=0;i<M;i++) {
        cin >> u >> v;

        // 2d matrix
        // graph[u-1][v-1] = 1;

        // vector
        graph[u-1].push_back(v-1);
        graph[v-1].push_back(u-1);
    }

    for(int i=0;i<N;i++) {
        sort(graph[i].begin(), graph[i].end());
    }



    bfs(graph, N, R-1);

    for (int i=0;i<N;i++) {
        cout << result[i] << "\n";
    }

}