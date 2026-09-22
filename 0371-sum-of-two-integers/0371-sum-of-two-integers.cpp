class Solution {
public:
    int getSum(int a, int b) {
         // Using unsigned int to prevent runtime errors with negative left shifts 
        // because shifting signed negative integers triggers undefined behavior in C++.
        unsigned int carry; 
        
        while(b != 0) 
        {
            carry = a & b;  // Find where the carry occurs
            a = a ^ b;      // Sum the bits without carrying
            b = carry << 1; // Shift the carry to add it in the next loop iteration
        }
        
        return a;
    }
};