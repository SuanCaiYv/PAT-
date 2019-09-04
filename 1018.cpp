#include<bits/stdc++.h>
using namespace std;
void zhuan(int i){
    if(i==0) printf("B");
    if(i==1) printf("C");
    if(i==2) printf("J");
}
int main(){
    int n,cnt1=0,cnt2=0,ch=0,cc;//cnt1表示甲赢的次数，cnt2表示平局次数
    char j,y;
    int  res[2][3]={0};//第一行表示甲，第二行表示乙 ，第零一二列表示bcj（字母序）

    scanf("%d",&n);
    for(int k=0;k<n;k++){
        getchar();
        scanf("%c %c",&j,&y);//输入甲乙手势
        if(j==y) cnt2++;
        else if(j=='C'&&y=='J'){
            cnt1++;
            res[0][1]++;
        }
        else if(j=='C'&&y=='B'){
            res[1][0]++;
        }
        else if(j=='J'&&y=='C'){
            res[1][1]++;
        }
        else if(j=='J'&&y=='B'){
            cnt1++;
            res[0][2]++;
        }
        else if(j=='B'&&y=='C'){
            cnt1++;
            res[0][0]++;
        }
        else if(j=='B'&&y=='J'){
            res[1][2]++;
        }
    }
    cout << cnt1 << ' ' << cnt2 << ' ' << n-cnt1-cnt2 << endl << n-cnt1-cnt2 << ' ' << cnt2 << ' ' << cnt1 << endl;
    ch = 0, cc = 0;
    for(int i=0;i<3;i++){
        if(ch<res[0][i]) {
            ch=res[0][i];
            cc=i;
        }
    }
    zhuan(cc);
    printf(" ");
    ch = 0, cc = 0;
    for(int i=0;i<3;i++){
        if(ch<res[1][i]) {
            ch=res[1][i];
            cc=i;
        }
    }
    zhuan(cc);
    return 0;
}

