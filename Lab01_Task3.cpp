/*
*Lab      :01 - T1
*Name     : Uzair Bukhari
*Roll NO  :NILL
*Date     :11/24/2026
*Purpose  :Finding error and fixing error
*/

#include <iostream> 
using namespace std; // BUG 1:Missing semicolon after std fixed
int main()
{
cout<<"Welcome to the lab!"<< endl; // BUG 2:Missing semicolon fixed 
cout<<"Today we learn\"C++\"."<<endl;// BUG 3:Capital C in the cout fixed
cout<<"Files are in C:\\Lab01"<<endl;// BUG 4:Folder Path fixed
cout<<"Bye!"<<endl;//					BUG 5:Missing closing quotation mark fixed

return 0;
	
}