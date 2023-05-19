#include<iostream>
using namespace std;
int main(){
    int a;
    string s;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        cin>>s;
        if(s=="B" || s=="b"){
            printf("BattleShip\n");
        }if(s=="C" || s=="c"){
            printf("Cruiser\n");
        }if(s=="D" || s=="d"){
            printf("Destroyer\n");
        }
        if(s=="F" || s=="f"){
            printf("Frigate\n");
        }

    }return 0;
}