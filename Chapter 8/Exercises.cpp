#include "std_lib_facilities.h"
#include "Execises.h"


int main(){
        //test here
        return 0;
}

vStringInfo analyseVec(vector<string> s){
        vStringInfo analysis;
        vector<int> v = stringLengths(s);
        analysis.longest = s[maxVI(v)];
        analysis.shortest = s[minVI(v)];
        sort(s.begin(),s.end());
        analysis.first = s[0];
        analysis.last = s[s.size() - 1];

        return analysis;
}

vector<int> stringLengths(vector<string> v){
        if(v.size() == 0) error("String is empty");
        vector<int> length;
        for(int i = 0; i < v.size(); i++)
                length.push_back(v[i].length());
        return length;
}

void print(string label, vector<int> v){
        cout << label << ": ";
        for(int i = 0; i < v.size(); i++)
                cout << v[i] << " ";
        cout << endl;
}

void print(string label, vector<string> v){
        cout << label << ": ";
        for(int i = 0; i < v.size(); i++)
                cout << v[i] << " ";
        cout << endl;
}

void print(string label, vector<double> v){
        cout << label << ": ";
        for(int i = 0; i < v.size(); i++)
                cout << v[i] << " ";
        cout << endl;
}

void print_until_s(vector<string> v, string quit){
        if(v.size() == 0) error("string is empty");
        for(int i = 0; i < v.size(); i++) {
                if(v[i] == quit) return;
                cout << v[i] << endl;
        }
}


void print_until_ss(vector<string> v, string quit){
        if(v.size() == 0) error("string is empty");
        bool occured = false;
        for(int i = 0; i < v.size(); i++) {
                if(v[i] == quit) {
                        if(!occured) occured = true;
                        else return;
                }
                cout << v[i] << endl;
        }
}

void fibonacci(int x, int y, vector<int>& v, int n){

        if(v.size() != 0) error("Vector is not empty!");

        v.push_back(x);
        v.push_back(y);

        for(int i = 2; i < (n + 2); i++) {
                v.push_back(v[i-2] + v[i-1]);
        }
}

vectorInfo analyseVec(vector<int> v){
        vectorInfo analysis;
        //max
        analysis.largest = (double) maxVE(v);
        //min
        analysis.smallest = analysis.largest;
        for(int i = 0; i < v.size(); i++)
                if(v[i] < analysis.smallest) analysis.smallest = (double) v[i];
        //mean
        int sum = 0;
        for(int i = 0; i < v.size(); i++)
                sum += v[i];
        analysis.mean = sum / v.size();
        //median
        if(v.size() % 2 == 0) {
                analysis.median = (v[(v.size() / 2) - 1] + v[v.size() / 2]) / 2;
        }else{
                analysis.median = v[(v.size() - 1) / 2];
        }
        return analysis;
}


int maxVE(vector<int> v){ //returns biggest vector element

        int max = 0;
        for(int i = 0; i < v.size(); i++)
                if(v[i] > max) max = v[i];
        return max;
}

int maxVI(vector<int> v){ //returns index from biggest vector element
        int max = 0;
        int tmp = 0;
        for(int i = 0; i < v.size(); i++)
                if(v[i] > max) {
                        max = v[i];
                        tmp = i;
                }
        return tmp;

}

int minVI(vector<int> v){ //returns smallest vector element
        int min = maxVE(v);
        int tmp = 0;
        for(int i = 0; i < v.size(); i++)
                if(v[i] < min) {
                        min = v[i];
                        tmp = i;
                }
        return tmp;

}

int minVE(vector<int> v){ //returns index from smallest vector element
        int min = maxVE(v);
        for(int i = 0; i < v.size(); i++)
                if(v[i] < min) min = v[i];
        return min;
}

double index(vector<double> price, vector<double> weight){
        if(price.size() != weight.size()) error("Prices and Weights doesnt have an equal size!");
        double sum = 0;
        for(int i = 0; i < price.size(); i++)
                sum += price[i]*weight[i];
        return sum;
}

vector<int> newReversed(vector<int>& v){

        if(v.size() % 2 == 0) {
                for(int i = 0; i < v.size() / 2; i++) swap(v[i], v[(v.size()-1) - i]);
        }else{
                for(int i = 0; i < (v.size() - 1) / 2; i++) swap(v[i], v[(v.size()-1) - i]);
        }
        return v;
}

void revVector(vector<int>& v){

        if(v.size() % 2 == 0) {
                for(int i = 0; i < v.size() / 2; i++) swap(v[i], v[(v.size()-1) - i]);
        }else{
                for(int i = 0; i < (v.size() - 1) / 2; i++) swap(v[i], v[(v.size()-1) - i]);
        }
}

vector<string> newReversed(vector<string>& v){

        if(v.size() % 2 == 0) {
                for(int i = 0; i < v.size() / 2; i++) swap(v[i], v[(v.size()-1) - i]);
        }else{
                for(int i = 0; i < (v.size() - 1) / 2; i++) swap(v[i], v[(v.size()-1) - i]);
        }
        return v;
}

void revVector(vector<string>& v){

        if(v.size() % 2 == 0) {
                for(int i = 0; i < v.size() / 2; i++) swap(v[i], v[(v.size()-1) - i]);
        }else{
                for(int i = 0; i < (v.size() - 1) / 2; i++) swap(v[i], v[(v.size()-1) - i]);
        }
}
