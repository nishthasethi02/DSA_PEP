class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int s = sentences.size();
        int maxwords = 0;
        for(int i = 0; i < s; i++){
            int count = 1;
            for(int j = 0; j < sentences[i].size(); j++){
                if(sentences[i][j] == ' '){
                    count++;
                }
            }
            maxwords = max(maxwords, count);
        }
        return maxwords;
    }
};