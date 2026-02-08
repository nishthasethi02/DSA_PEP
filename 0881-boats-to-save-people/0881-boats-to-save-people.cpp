class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int s = 0;
        int e = n - 1;
        int count = 0;
        while(s <= e){
            int sum = people[s]+people[e];
            if(sum <= limit){
                s++;
                e--;
            }
            else{
                e--;
            }
            count++;
        }
        return count;
    }
};