#include <iostream>
#include <queue>
using namespace std;
int main() {
  priority_queue<int> pq1; //max heap 
   
   pq1.push(90);
   pq1.push(80);
   pq1.push(888);
   cout<<pq1.top()<<" is the largest value"<<endl;//returns the largest value
   priority_queue<int,vector<int>,greater<int>> pq2; //min heap 
   
   pq2.push(90);
   pq2.push(80);
   pq2.push(888);
   cout<<pq2.top()<<" is the smallest  value"<<endl;//returns the smallest value
}
