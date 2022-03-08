#include<bits/stdc++.h>
#define mp(x,y) make_pair(x,y)
using namespace std;
const int INF=0x3f3f3f3f;
typedef pair<int,int> pii;
typedef long long ll;

typedef struct Lnode{
    char elem;
    int next,rear;
}Lnode;
Lnode *Link = NULL,head,tail;

int main()
{
   string s;
   while (cin>>s){
       list<char> L;
       list<char> :: iterator cur = L.begin();
       for(auto it : s){
           if(it == '[')
               cur = L.begin();
           
           
           else if(it == ']')
               cur = L.end();
           

            else{
                cur = L.insert(cur,it);
                cur++;
            }
       }
       for(auto it : L) printf("%c",it);
       printf("\n");
   }
   

   system("pause");
   return 0;
}
