class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        vector<int> left;
        int boat=0;
        int n = people.size();
        int i=0, j=n-1 ;

        
        sort(people.begin(),people.end());
        while(i<=j)
        {
            if(people[i] + people[j] <= limit)
            {
                boat++;
                i++;
                j--;
            }
            else if (people[i] + people[j] > limit)
            {
                boat++;
                j--;
            }
        }

        return boat;
    }
};