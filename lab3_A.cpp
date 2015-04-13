#include<vector>
#include<fstream>
#include<cstdlib>
#include<algorithm>
#include<iostream>
using namespace std;

int main(){
    ifstream inFile("lab3file.in",ios::in);
    int size;
    int tot=0;
    int moveItem;
    int insert;
    inFile>>size;
    vector<int>v(size+1);
    for(int i=0;i<size;i++){
    inFile>>v.at(i);
    }
    for(int next=1;next<v.size();++next){
        insert=v.at(next);
        moveItem=next;
        while((moveItem>0)&&(v.at(moveItem-1)>insert)){
              v.at(moveItem) = v.at(moveItem-1);
              --moveItem;
        }
        v.at(moveItem) = insert;
    }
    for(int i=size-4; i<size+1; i++){
        tot=tot+v.at(i);
    }
    cout<<tot<<endl;
}

