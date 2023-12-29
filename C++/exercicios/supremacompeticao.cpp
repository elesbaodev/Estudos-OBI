#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, wil = 0, jon = 0;
    cin >> n;
    int w[n];
    int e[n];
    int i;

    for (i = 0; i < n; i++) {
        cin >> w[i] >> e[i];
        if (w[i] == 0 && e[i] == 1) {
            wil += 1;
        } else if (w[i] == 1 && e[i] == 0) {
            jon += 1;
        } else if (w[i] == 0 && e[i] == 2) {
            wil += 1;
        } else if (w[i] == 2 && e[i] == 0) {
            jon += 1;
        } else if(w[i] == 1 && e[i] == 2)  {
            wil += 1;
        } else if(w[i] == 2 && e[i] == 1)  {
            jon += 1;
        }
        else if (w[i] == 2 && e[i] == 3) {
            wil += 1;
        } else if (w[i] == 3 && e[i] == 2) {
            jon += 1;
        } else if (w[i] == 3 && e[i] == 1) {
            jon += 1;
        } else if (w[i] == 1 && e[i] == 3) {
            wil += 1;
        } else if (w[i] == 3 && e[i] == 0) {
            wil += 1;
        } else if (w[i] == 0 && e[i] == 3) {
            jon += 1;
        } else if (w[i] == 4 && e[i] == 3) {
            jon += 1;
        } else if (w[i] == 3 && e[i] == 4) {
            wil += 1;
        } else if (w[i] == 4 && e[i] == 2) {
            jon += 1;
        } else if (w[i] == 2 && e[i] == 4) {
            wil += 1;
        } else if (w[i] == 4 && e[i] == 1) {
            wil += 1;
        } else if (w[i] == 1 && e[i] == 4) {
            jon += 1;
        } else if (w[i] == 4 && e[i] == 0) {
            wil += 1;
        } else if (w[i] == 0 && e[i] == 4) {
            jon += 1;
        }
    }

    if (wil > jon) {
        cout << "will\n";
    } else {
        cout << "11\n";
    }

    return 0;
}






/*#include <iostream>

using namespace std;

int main(void) {
    int n,wil=0,jon=0;
    cin >> n;
    int w[n];
    int e[n];
    int i;
    for(i = 0; i < n; i++) {
        cin >> w[i] >> e[i];
        if(w[i] == 0 && e[i] == 1) {
            wil += 1;
            jon += 0;

        } else if(w[i] == 1 && e[i] == 0) {
            jon += 1;
            wil += 0;

        } else if(w[i] == 0 && e[i] == 2) {
            wil += 1;
            jon += 0;
        } else if (w[i] == 2 && e[i] == 0) {
            wil += 0;
            jon += 1;
        } 
        else if (w[i] == 2 && e[i] == 3) {
            wil += 1;
            jon += 0;
        } else if(w[i] == 3 && e[i] == 2) {
            wil += 0;
            jon += 1;
            
        } else if(w[i] == 3 && e[i] == 1) {
            wil += 0;
            jon += 1;
        } else if(w[i] == 1 && e[i] == 3) {
            wil += 1;
            jon += 0;
        } else if(w[i] == 3 && e[i] == 0) {
            wil += 1;
            jon += 0;
        } else if(w[i] == 0 && e[i] == 3) {
            wil += 0;
            jon += 1;
        }
        else if (w[i] == 4 && e[i] == 3) {
            wil += 0;
            jon += 1;
        } else if(w[i] == 3 && e[i] == 4) {
            wil += 1;
            jon += 0;
        } else if(w[i] == 4 && e[i] == 2) {
            wil += 0; 
            jon += 1;
        }else if(w[i] == 2 && e[i] == 4) {
            wil += 1;
            jon += 0;
        } else if(w[i] == 4 && e[i] == 1) {
            wil += 1;
            jon += 0;
        } else if(w[i] == 1 && e[i] == 4) {
            wil += 0;
            jon += 1;
        }

        else if(w[i] == 4 && e[i] == 0) {
            wil += 1;
            jon += 0;
        }

    } if(wil > jon) {
        cout << "will\n";
    } else {
        cout << "11\n";
    }
}*/