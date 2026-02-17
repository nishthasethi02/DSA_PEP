class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n = emails.size();
        unordered_set<string> uniqueEmails;
        for(int i = 0; i < n; i++){
            string email = emails[i];
            string local = "";
            string domain = "";
            int atindex = email.find('@');

            local = email.substr(0, atindex);
            domain = email.substr(atindex);

            string cleanedlocal = ""; 

            for(int j = 0; j < local.size(); j++){
                if(local[j] == '+'){
                    break;
                }
                if(local[j] == '.'){
                    continue;
                }
                cleanedlocal += local[j];
            }
            string cleanedEmail = cleanedlocal + domain;
            uniqueEmails.insert(cleanedEmail);
        }
        return uniqueEmails.size();
    }
};