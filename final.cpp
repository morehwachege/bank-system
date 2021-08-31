#include<fstream>
using namespace std;
int main(){
    ofstream myFile("deal.csv");
    myFile << "Foo\n";
    myFile << "1\n";
    myFile << "2\n";
    myFile << "3\n";

    // close
    myFile.close();
    return 0;
}