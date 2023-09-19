class Solution {
public:
  bool isHappy(int n) {
    set<int> num;
    while (num.find(n) == num.end()) {
        int sum = 0;
        num.insert(n);
        while (n > 0) {
            int temp = n % 10;
            sum += temp * temp;
            n /= 10;
        }
        n = sum;
    }
    return num.find(1) != num.end();
  }
    
};
