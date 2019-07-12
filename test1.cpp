#include<iostream>
#include<string>
#include<vector>
using namespace std;
int getmark(string str)
{
    int score=0;
    vector<char> a1,a2,a3,a4;
    
    int len=str.size();
    if(len<=4)score+=5;
    else if(len>=8)score+=25;
    else score+=10;
    
    for(int i=0;i<len;++i)
    {
        if(str[i]<='z'&&str[i]>='a')a1.push_back(str[i]);
        else if(str[i]<='Z'&&str[i]>='A')a2.push_back(str[i]);
        else if(str[i]<='9'&&str[i]>='0')a3.push_back(str[i]);
        else a4.push_back(str[i]);
    }
    int lena1=a1.size();
    int lena2=a2.size();
    int lena3=a3.size();
    int lena4=a4.size();
    if(lena1==0&&lena2==0);
    else if(lena1&&lena2)score+=20;
    else score+=10;
    
    if(lena3==0);
    else if(lena3==1)score+=10;
    else score+=20;
    
    if(lena4==0);
    else if(lena4==1)score+=10;
    else score+=25;
    
    if(lena1&&lena2&&lena3&&lena4)score+=5;
    else if((lena1||lena2)&&lena3&&lena4)score+=3;
    else if((lena1||lena2)&&lena3)score+=2;
    
    return score;
}
int main()
{
    string str;
    while(cin>>str)
    {
        int score=getmark(str);
        if(score>=90)cout<<"VERY_SECURE"<<endl;
        else if(score>=80)cout<<"SECURE"<<endl;
        else if(score>=70)cout<<"VERY_STRONG"<<endl;
        else if(score>=60)cout<<"STRONG"<<endl;
        else if(score>=50)cout<<"AVERAGE"<<endl;
        else if(score>=25)cout<<"WEAK"<<endl;
        else cout<<"VERY_WEAK"<<endl;
    }
    return 0;
}