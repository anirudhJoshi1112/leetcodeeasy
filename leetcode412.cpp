class Solution {
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> akku;
        for(int i=1;i<=n;i++){
            if(i % 3 == 0 && i % 5 == 0){
                akku.push_back("FizzBuzz");
            }
            else if(i % 3 == 0){
                akku.push_back("Fizz");
            }
            else if(i % 5 == 0){
                akku.push_back("Buzz");
            }
            else{
                akku.push_back(to_string(i));
            }
        }
        return akku;
    }
};
