#include <iostream>
#include <vector>
#include <vector>
#include <string.h>
#include <queue>
#include <algorithm>
using namespace std;


vector<int> vec[10002];
vector<int> result_dfs;
vector<int> result_bfs;
bool visit[1002];


void dfs(int v) {
    visit[v] = true;
    result_dfs.push_back(v);
    for(int i = 0 ; i < vec[v].size(); i++){
        if(!visit[vec[v][i]]){
            dfs(vec[v][i]);
        }
    }
}

void bfs( int v) {
    queue<int> que;
    que.push(v);
    visit[v] = true;

    while(!que.empty()){
        int x = que.front();
        que.pop();
        result_bfs.push_back(x);

        for( int i = 0; i < vec[x].size(); i++){
            if(!visit[vec[x][i]]){
                que.push(vec[x][i]);
                visit[vec[x][i]] = true;
            }
        }
    }
}

int main() {
    int n, m, v, a, b;
    cin >> n >> m >> v;
 
    for (int i = 1; i <= m;i++){
        cin >> a >> b;
        vec[a].push_back(b); //양방향 간선처리
        vec[b].push_back(a); //양방향 간선처리
    }
    for(int i = 1; i <= n; i++) {
        sort(vec[i].begin(), vec[i].end());
    }

    dfs(v);
    memset(visit, false, sizeof(visit));
    bfs(v);

    for(int i = 0; i < result_dfs.size() ; i++){
        cout << result_dfs[i] << " ";
    }
    cout << '\n';
    for(int i = 0; i < result_bfs.size() ; i++){
        cout << result_bfs[i] << " ";
    }
}