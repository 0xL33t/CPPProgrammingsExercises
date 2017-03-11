struct vectorInfo {
        double largest;
        double smallest;
        double mean;
        double median;
};

struct vStringInfo {
        string longest;
        string shortest;
        string first;
        string last;
};
vStringInfo analyseVec(vector<string> s);
vector<int> stringLengths(vector<string> v);
void print(string label, vector<int> v);
void print(string label, vector<double> v);
void print(string label, vector<string> v);
void print_until_s(vector<string> v, string quit);
void print_until_ss(vector<string> v, string quit);
void fibonacci(int x, int y, vector<int>& v, int n);
int maxVE(vector<int> v);
int maxVI(vector<int> v);
int minVE(vector<int> v);
int minVI(vector<int> v);
vectorInfo analyseVec(vector<int> v);
double index(vector<double> price, vector<double> weight);
void revVector(vector<int>& v);
void revVector(vector<string>& v);
vector<int> newReversed(vector<int>& v);
vector<string> newReversed(vector<string>& v);
