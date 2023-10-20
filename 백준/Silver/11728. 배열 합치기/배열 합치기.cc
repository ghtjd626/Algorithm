#include<iostream> 
using namespace std; 
int a[1000001]; int b[1000001];
int c[2000002];

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n, m; 
cin >> n>>m;
for (int i = 0; i < n; i++){
cin >> a[i];
}
for (int i = 0; i < m; i++) {
cin>> b[i];
}
int i = 0; // a 4H99 index
int j = 0; // b4|99 index
int k = 0; // c HH99 index
while (i < n && j < m) {
    if (a[i] < b[j]) {
        c[k++] = a[i++];
    }
    else {
        c[k++] = b[j++];
    }
}
while (i < n) {
c[k++] = a[i++];
}
while (j < m) {
c[k++] = b[j++];
}
for (int l = 0; l < n + m; l++) {
cout <<c[l]<<" ";
}
cout<<'\n';

}