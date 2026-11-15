/*========================================= Brute Force ================================================*/

class Solution {
    const int MOD = 1e9 + 7;
public:
    int numOfSubarrays(vector<int>& arr) {
        int count = 0;

        for(int i  = 0 ; i < arr.size() ; i++){
            for(int j = i ; j < arr.size() ; j++){
                int sum = 0;
                for(int k = i ; k <= j ; k++){
                    sum += arr[k];
                }
                if(sum % 2 != 0){
                    count = (count % MOD) + 1;
                }
            }
        }
        return count;
    }
};





/* =======================================Better Solution==================================================*/

class Solution {
    const int MOD = 1e9 + 7;
public:
    int numOfSubarrays(vector<int>& arr) {
        vector<int> prefixsum(arr.size() + 1, 0);
        int count = 0;
        prefixsum[1] = arr[0];
        for(int i = 1 ; i < arr.size() ; i++){
            prefixsum[i+1] = prefixsum[i] + arr[i];
        }

        for(int l = 1 ; l <= arr.size() ; l++){
            int st = 0;
            int end = l-1;

            while(end < arr.size()){
                int sum = prefixsum[end + 1] - prefixsum[st];
                if(sum % 2 != 0){
                    count = (count % MOD) + 1;
                }
                st++;
                end++;
            }
        }
        return count;
    }
};


/*========================================= Optimal Solution ==============================================*/

class Solution {
    const int MOD = 1e9 + 7;
public:
    int numOfSubarrays(vector<int>& arr) {
        vector<int> prefixsum(arr.size(), 0);
        int count = 0;
        prefixsum[0] = arr[0];
        for(int i = 1 ; i < arr.size() ; i++){
            prefixsum[i] = prefixsum[i - 1] + arr[i];
        }

        int even = 1;
        int odd = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(prefixsum[i] % 2 != 0){
                count = (count % MOD) + (even % MOD);
                odd++;
            }
            else{
                count = (count % MOD) + (odd % MOD);
                even++;
            }
        }
        return count;
    }
};



/*=========================================== Optimised Solution ==============================================*/

class Solution {
    const int MOD = 1e9 + 7;
public:
    int numOfSubarrays(vector<int>& arr) {
        int count = 0;
        int even = 1;
        int odd = 0;
        int sum = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            sum += arr[i];
            if(sum % 2 != 0){
                count = (count % MOD) + (even % MOD);
                odd++;
            }
            else{
                count = (count % MOD) + (odd % MOD);
                even++;
            }
        }
        return count;
    }
};