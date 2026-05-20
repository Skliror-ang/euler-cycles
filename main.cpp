#include <iostream>  
#include<vector>  
#include <set>  
#include<algorithm>  
  
using namespace std;  
  

  
int main() {  
    int N, M;  
  
    cin >> N>>M;  
  
    vector<vector<int>> lista(N);  
  
    for (int i = 0; i < M; i++) {  
          
        int u, v;  
        cin >> u>> v;  
  
            lista[u].push_back(v);  
            lista[v].push_back(v);  
    }  
  
    bool cycle = true;  
  
    for (const auto& komvos : lista) {  
        if (komvos.size() % 2 != 0) {  
            cycle = false;  
            break;  
        }  
    }  
  
    if (cycle) {  
        cout << "CYCLE"<<endl;  
        return 0;  
    }  
  
      
    int i = 0;  
    vector<int> odd;  
  
        for (const auto& komvos : lista) {  
            if (komvos.size() % 2 == 1) {  
                odd.push_back(i);  
                  
            }  
            i++;  
        }  
  
        if (odd.size() != 2) {  
            cout << "IMPOSSIBLE"<<endl;  
            return 0;  
    }  
          
        cout << "PATH "<<odd[0] << " " << odd[1]<<endl;  
  
        return 0;  
  
}  