#include<iostream>
using namespace std;

void sort(int *a, int *b, int *c){//並べ替え処理
    for(int i=0; i<2; i++){//1つ目と2つ目
        if(*a > *b){
            int tmp = *a;
            *a = *b;
            *b = tmp;
        }
    if(*b > *c){//2つ目と3つ目
            int tmp = *b;
            *b = *c;
            *c = tmp;
        }        
    }
}

int main(void){
    int a,b,c;
    cout << "3つの整数を入力してください。" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    sort(&a, &b, &c);//入れ替え関数呼び出し
    cout << "小さな順に並べると" << endl
    << a << endl << b << endl << c << endl << "となります。";

    return 0; 
}
