#include <iostream> // std::cout
#include <fstream>  // std::ifstream
#include <cassert>  // std::assert

#include "picojson.h"

using namespace std;

int main() {
  // ファイルを読み込むための変数
  std::ifstream fs;
  
  // ファイルを読み込む
  fs.open("data.json");
  
  // 読み込みチェック
  // fs変数にデータがなければエラー
  assert(fs);

  // Picojsonへ読み込む
  picojson::value val;
  fs >> val;
  
  // fs変数はもう使わないので閉鎖
  fs.close();
  
  cout << "val is: " << typeid(val).name() << '\n';
  
  // Playerの名前を取得
  // std::string name = val.get<picojson::object>()
  //                     ["Player"].get<picojson::object>()
  //                     ["NAME"].get<std::string>();


  // cout << name << endl;
}
