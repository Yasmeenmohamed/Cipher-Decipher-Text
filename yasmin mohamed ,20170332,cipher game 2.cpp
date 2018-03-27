#include <iostream>

using namespace std;

int main()
{
while (true){
    cout<<endl<<"ahln ya user ya 7abiibi"<<endl;
    cout<<"1-cipher"<<endl;
    cout<<"2-decipher"<<endl;
    cout<<"3-end"<<endl;
    int number;
    cin>>number;
    if(number==1 || number==2){
        char arr1[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        char arr2[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        string message;
        cout<<"enter your message"<<endl;
        cin.ignore();
        getline(cin,message);
        for(int i=0;i<=message.size();i++){
            for(int j=0;j<26;j++){
                if(message[i]==arr1[j]){
                    cout<<arr1[25-j];}
                if(message[i]==arr2[j]){
                    cout<<arr2[25-j];}
                }
            }
        }
    }
}

