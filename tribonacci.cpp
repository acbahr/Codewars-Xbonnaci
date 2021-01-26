using namespace std;
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
  vector<int> emptyVec;
  vector<int> result;
  int vecLen = signature.size();
  if (n < 3) {
    for (int i = 0; i < n; ++i) emptyVec.push_back(signature[i]);
    return emptyVec;
  }
  for (int i = 0; i < vecLen; ++i) result.push_back(signature[i]);
  for (int i = 3; i < n; ++i) result.push_back((result[i - 3] + result[i-2] + result[i-1]));
  
  return (n == 0) ? emptyVec : result;
}
