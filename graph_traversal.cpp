#include <iostream>
#include <vector>
bool in(int *child,int *parent){
    if (child[1]==parent[1] && child[0]==parent[0]){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int arr1[2][2]={{2,1},{3,1}};
    int arr2[2]={2,1};

}