#include <windows.h>
#include <string>
#include <iostream>
#include <cstdio>
#include "heder.h"
using namespace std;

int main() {
    List queue;
    queue.push_back("Ofelia");
    queue.push_back("Hamlet");
    cout << queue.pop_front() << endl;
    queue.push_back("Yorick");
    queue.push_front("Othello");
    queue.push_back("Rurik");
    cout<<"hi i'm is "<<queue[4]<<endl;
    while (!queue.is_empty()) {
        cout << queue.pop_front() << endl;
    }

    List names;
    names.push_back("Olololo");
    names.push_back("tra-la-la-la-la");
    List::iterator b=names.begin();
    cout<<(*b)<<endl;
   /* for(; b!=names.end(); ++b){
        cout<<(*b)<<endl;

    }
    Item* current;*/
    return 0;
}
