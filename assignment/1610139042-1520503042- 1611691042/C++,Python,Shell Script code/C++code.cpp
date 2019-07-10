#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

    ifstream ip("data1.csv");

  if(!ip.is_open()) std::cout << "ERROR OPENING FILE" << '\n';

    //Column name
   string description;
   string industry;
   string level;
   string size;
   string line_code;
   string value;

    // Search Criteria
   string industry_input;
   string level_input;
   string line_code_input;
   string value_input;

    cout<<"Press 1 to search Industry\n";
    cout<<"Press 2 to search Level\n" ;
    cout<<"Press 3 to search Line_code\n";
    cout<<"Press 4 to search value\n";

    string choice;
    cin>> choice;

    if (choice == "1"){
     cout<<"Enter Industry\n";
    cin>> industry_input;

  while(ip.good()){
    getline(ip,description,',');
    getline(ip,industry,',');
    getline(ip,level,',');
    getline(ip,size,',');
    getline(ip,line_code,',');
    getline(ip,value,'\n');

    if (industry_input == industry)
        {
            std::cout<<description <<" "<<industry<< " " <<level<<" "<<size<<" " <<line_code<<" "<<value<< '\n';
        }
  }

  ip.close();
}


if (choice == "2"){
    cout<<"Enter Level\n";
    cin>> level_input;

  while(ip.good()){
    getline(ip,description,',');
    getline(ip,industry,',');
    getline(ip,level,',');
    getline(ip,size,',');
    getline(ip,line_code,',');
    getline(ip,value,'\n');


    if (level_input == level)
        {
           std::cout<<description <<" "<<industry<< " " <<level<<" "<<size<<" " <<line_code<<" "<<value<< '\n';
        }
  }

  ip.close();
}



if (choice == "3"){

     cout<<"Enter Line_code\n";
    cin>> line_code_input;

  while(ip.good()){

    getline(ip,description,',');
    getline(ip,industry,',');
    getline(ip,level,',');
    getline(ip,size,',');
    getline(ip,line_code,',');
    getline(ip,value,'\n');
    if (line_code_input == line_code)
        {
            std::cout<<description <<" "<<industry<< " " <<level<<" "<<size<<" " <<line_code<<" "<<value<< '\n';
        }
  }

  ip.close();
}


if (choice == "4"){
    cout<<"Enter value\n";
    cin>> value_input;

  while(ip.good()){

    getline(ip,description,',');
    getline(ip,industry,',');
    getline(ip,level,',');
    getline(ip,size,',');
    getline(ip,line_code,',');
    getline(ip,value,'\n');
    if (value_input == value)
        {
            std::cout<<description <<" "<<industry<< " " <<level<<" "<<size<<" " <<line_code<<" "<<value<< '\n';
        }
  }

  ip.close();
}



}
