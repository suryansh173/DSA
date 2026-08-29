class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        
        int one_step_behind = 2;
        int two_steps_behind = 1;
        
        for (int i = 3; i <= n; i++) {
            int current = one_step_behind + two_steps_behind;
            two_steps_behind = one_step_behind;
            one_step_behind = current;
        }
        
        return one_step_behind;
    }
};