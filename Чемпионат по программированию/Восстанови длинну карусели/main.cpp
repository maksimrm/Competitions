#include <iostream>

using namespace std;


bool is_rec(const string& s, const string& pod_s){
    bool ans = true;
    for (int i = 0; i < s.size(); i += pod_s.size()){
        for (int j = 0; (j < pod_s.size()) && (i + j < s.size()) ; j++){
            if (s[i+j] != pod_s[j] && s[i+j] != '#' && pod_s[j] != '#'){
                ans = false;
                break;
            }
        }
        if (!ans){
            break;
        }
    }
    return ans;
}



int main() {

    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 1;
    for(; i < n; i++){
        if (is_rec(s, s.substr(0, i))){
            break;
        }
    }
    cout << i;
    return 0;
}