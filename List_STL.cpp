#include<bits/stdc++.h>
using namespace std;
// Forward_list-  Forward lists are implemented as singly-linked lists
/* List - Lists are sequence containers that (Implemented as doubly linked list)
allow constant time insert and erase operations anywhere within the sequence, and iteration in both directions.*/
/*Some methods are 
- push_back(element)
- push_front(ele)
-erase(idx,ele)
- remove(ele) - Removes all occurences of the ele
- insert(idx,ele) - inserts at specified position
- pop_back()
_pop_front()
// declaration - list<data_type> l1;
/// header file is #include<list>
 */
int main(){
list <int> l1;
// int can be of any data type
list<string> l2 = {"apple","banana","mango","grapes"};
l2.sort(); //sort the list lexiographically
for(auto st:l2){
	cout<<st<<"-->";
}
cout<<endl;
l2.reverse(); // reverse the list;
for(auto st:l2){
	cout<<st<<"-->";
}
cout<<endl;
cout<<l2.front()<<endl;  // Print the first element of list if empty list it will throw an error
cout<<l2.back()<<endl;   // Print the last element of list if empty list it will throw an error
l2.pop_front(); // Removes the first element; if empty list it will throw an error
l2.pop_back();  // Removes the last element;  if empty list it will throw an error
l2.push_front("Kiwi"); // Push at start
l2.push_back("kuch_bhi"); // pushses at the end
l2.push_back("kuch_bhi"); // pushses at the end

for(auto it = l2.begin();it!= l2.end();it++){
	cout<<(*it)<<"-->";
}
cout<<endl;  /// This iterate over thw whole list

l2.remove("kuch_bhik"); // if the passed element is not in the list it does nothing otherwise 
//removes all occurence of the element// 
auto it = l2.begin(); it++;
//l2.erase(it); // takes pointer as argument and removes the pointing element int this case second element
l2.insert(it,"fruit_Le_lo"); // Insert the specified element at (it) here seond position indexing is from 1
for(auto st:l2){
	cout<<st<<"-->";
}
cout<<endl;
return 0;
}

