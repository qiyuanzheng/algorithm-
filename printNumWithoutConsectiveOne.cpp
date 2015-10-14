#include <iostream>
#include <queue>
using namespace std;

void printNumsWithoutConsectiveOne(int n)
{
    if(n < 1)
        return;
    
    queue<int> q;
    q.push(0);
    q.push(1);
    while(!q.empty())
    {
        int cur = q.front();
        if(cur > n)
            break;
        
        q.pop();
        cout << cur << endl;
        
        if(cur == 0)
            continue;
        
        if(cur <= n)
        {
            if(cur & 0x1)
            {
                q.push(cur << 1);
            }
            else
            {
                q.push(cur << 1);
                q.push((cur << 1)+1);
            }
        }
    }
    
}
int main(int argc, const char * argv[]) {
    printNumsWithoutConsectiveOne(15);
    printNumsWithoutConsectiveOne(30);
    
    return 0;
}
