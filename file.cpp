#include <iostream>
#include <fstream>

using namespace std;
int main()
{
fstream st;     //fstream is class
st.open("C:/Users/Soham Nimbalkar/Desktop/New Folder/program.txt",ios::out);   //creation of file
st<<"hello";      //writing the file

st.close();

return 0;
}