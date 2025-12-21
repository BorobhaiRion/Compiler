#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool re1 (string s){
    for (int i = 0 ; i < s.size() ; i++){
        if(s[i] != 'a'){
            return false;
            break;
        }
    }
    if (s == "" ){
        return true;
    }
    return true;
}



int main()
{
    ifstream inputFile("input.txt");

    if (!inputFile.is_open())
    {
        cout << "File could not be opened" << endl;
        return 1;
    }

    string firstLine;
    getline(inputFile, firstLine);

    if(re1(firstLine)){
        cout<<"Accepted R.E = a*";
    }
    else{
        cout<<"Rejected R.E = a*";
    }

    inputFile.close();
    return 0;
}
