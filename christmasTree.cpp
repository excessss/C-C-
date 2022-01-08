#include<iostream>
#include<conio.h>
#define center 90

using namespace std;
bool validLev(unsigned short int);
void top(unsigned short int);
//void spaces(unsigned short int);
void core(unsigned short int);

int main(int argc, char const *argv[])
{
  unsigned short int levels; 
  char op;
  bool validLevels;
  //cout<<endl;
  if (!(argc >= 2))
    cout<<"Use chistmasTree num-of-levels";
  else{
    levels = atoi(argv[1]);
  do{
    validLevels = validLev(levels);
    if (validLevels){
      cout<<"\t\t\t\t\t\t\t\t\t\t HAPPY NEW YEAR!!!"<<endl<<endl;
      top(levels);
      core(levels);
      /* code */
    }
      /* cout<<endl<<endl<<"Do you want to make another christmas tree[y/n]?"; */
      //op = tolower(getch());
      cout<<endl;
  } while (op == 'y');
  return 0;
  }
}

bool validLev(unsigned short int numOfLev){
  //unsigned short int numOfLev;
  bool validNum = false;
  while (!validNum){
    //cout<<"type the number of levels your tree will have this year: ";
    //cin>>numOfLev;
    if(numOfLev > 2 && numOfLev <= 15)
      validNum = true;
    else{
      cout<<endl<<"The range of levels is [3 - 15]"<<endl;
      break;
    }
  }
  return validNum;
}

void top(unsigned short int levels){
  unsigned short int contLev, totalSpaces, sizeBranch = 3,
  contSpaces = 0, floors, contAst, leaves;
  int short raise = -1;
  contLev = 0;
  while (contLev < levels){
    contLev++;
    raise += 2;
    leaves = raise;
    sizeBranch -= 2;
    floors = 1;
    while (floors <= 3){
      totalSpaces = center - sizeBranch;
      contSpaces = 0;
      while (contSpaces < totalSpaces){
        contSpaces++;
        cout<<(char)32;
      }
      contAst = 1;
      while (contAst <= leaves){
        contAst++;
        cout<<(char)42;
      }
      leaves += 2;
      floors++;
      sizeBranch++;
      cout<<endl;
    }
  }
}

void core(unsigned short int levels){
  unsigned short int totalSpaces, contAst, contSpaces, 
  contRows = 1;
  while(contRows <= (levels - 1)){
    contRows++;
    totalSpaces = center - 3;
    contSpaces = 0;
    while (contSpaces < totalSpaces){
      contSpaces++;
      cout<<(char)32;
    }
    contAst = 1;
    while (contAst <= 5){
      contAst++;
      cout<<(char)42;
    }
    cout<<endl; 
  }
  contRows = 0;
  while(contRows < 1){
    contRows++;
    totalSpaces = center - 4;
    contSpaces = 0;
    while (contSpaces < totalSpaces){
      contSpaces++;
      cout<<(char)32;
    }
    contAst = 1;
    while (contAst <= 7){
      contAst++;
      cout<<(char)42;
    }
    cout<<endl;
  }
}
