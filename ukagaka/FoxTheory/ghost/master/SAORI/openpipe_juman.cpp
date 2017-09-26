#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(int argc, char* argv[]) {
  //argv[0]にはプログラムの名前が入るので実質argv[1]から
  //argv[1]を実行したいプログラムの名前、argv[2]が渡す文字列
  if (argc == 3){
  	string Arg = string(argv[1]);
  	string all = Arg+"--enc cp932";
  	string str(all);
  	const char* cstr = str.c_str();
    FILE *fp = popen(cstr, "w");
    if (fp == NULL){
      return -1;
    }
    else{
      fputs(argv[2], fp);
      fflush(fp);
      pclose(fp);

    }
  }
  else{
    //引数の数が不正の時
    cout<<"The number of arguments is wrong"<<endl;
  }
}
