class Solution {
public:
    bool isPalindrome(int x) {
        // 음수는 회문이 될 수 없음
        if (x < 0) return false;
        
        // 0은 회문임
        if (x == 0) return true;
        
        std::vector<int> digits;
        
        // 각 자릿수를 벡터에 저장
        int num = x;
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        
        // 회문 확인: 양쪽 끝에서부터 중앙으로 이동하며 비교
        for (int i = 0; i < digits.size() / 2; i++) {
            if (digits[i] != digits[digits.size() - 1 - i]) {
                return false;
            }
        }
        
        // 모든 비교가 통과되면 회문임
        return true;
    }
};
