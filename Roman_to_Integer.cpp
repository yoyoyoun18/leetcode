class Solution {
public:
    int romanToInt(string s) {
        // 변수 I - M 까지를 크기에 맞춰 선언
        unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        // 결과값을 저장할 변수 선언
        int result = 0;
        
        // s를 글자별로 나눠 vector에 넣음
        vector<char> romanChars;
        for (char c : s) {
            romanChars.push_back(c);
        }
        
        // vector의 길이만큼 반복문을 돌려 변수와 매칭하여 결과값 산출
        for (int i = 0; i < romanChars.size(); i++) {
            // 현재 로마 숫자의 값
            int currentValue = romanValues[romanChars[i]];
            
            // 뺄셈 규칙 적용: 다음 문자가 현재 문자보다 더 큰 값을 가질 경우
            if (i + 1 < romanChars.size() && romanValues[romanChars[i]] < romanValues[romanChars[i + 1]]) {
                // 다음 값에서 현재 값을 빼는 형태로 작동해야 함 (IV = 5-1 = 4)
                result -= currentValue;
            } else {
                // 일반적인 경우: 현재 값을 결과에 더함
                result += currentValue;
            }
        }
        
        return result;
    }
};
