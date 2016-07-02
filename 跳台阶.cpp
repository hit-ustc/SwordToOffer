class Solution {
public:
    int jumpFloor(int number) {
        if(number < 1) {
            return 0;
        }
        if(number == 1 || number == 2) {
            return number;
        }
        return jumpFloor(number - 1) + jumpFloor(number - 2);
    }
};