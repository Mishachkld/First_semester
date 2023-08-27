#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>

std::string remover(std::string str, bool flag=false) {
    std::string ret = "";
    std::string exceptions = "\t ,;'"\n.?!:()[]*&^%$#¹@-_=+\|/";
    if (flag) {
        exceptions += "0123456789";
    }
    for (int i = 0; i <= str.length(); i++) {
        if (exceptions.find(str[i]) == std::string::npos)
            ret += str[i];
    }
    return ret;
}

bool comp(std::string a, std::string b) { return (size(a) > size(b)); }

int counts(std::vector<std::string> s, std::string what) {
    int ans = 0;

    for (int i = 0; i < size(s); ++i) {
        if (s[i] == what)
            ans++;
    }
    return ans;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    std::ifstream in("input.txt", std::ios::in);
    std::ofstream out("output.txt", std::ios::out);


    int i = 0;
    int n = 10;
    char a;
    char b;

    std::vector<std::string> slov;
    int size_slov=0;
    int size_res=0;
    std::string str;


    in >> str;
    in >> a;
    in >> b;
    n = std::stoi(str);

    while (!in.eof())
    {
        in >> str;
        str = remover(str);
        std::transform(str.begin(), str.end(), str.begin(), std::tolower);
        if (size(str) != 1) {
            slov.push_back(str);
            size_slov++;
        }
    }
    std::vector<std::string> res(n);
    std::cout << "Слов в тексте: " << size_slov << "\n";
    std::cout << "Нужно слов: " << n << "\n";
    sort(slov.begin(), slov.end(), comp);
    //for (int i = 0; i < size_slov; i++)
    //    std::cout << slov[i] << "\n";
    for (int i = 0; size_res < 10 and i < size_slov; i++) {
        if (counts(res, slov[i]) < 1 and (slov[i][0] == a or slov[i][0] == b)) {
            res[size_res] = slov[i];
            size_res++;
        }
    }
    for (int i = 0; i < size_res; i++) {
        std::cout << res[i] << "\n";
        out << res[i] << "\n";
    }
}