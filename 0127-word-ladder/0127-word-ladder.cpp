class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>s;
        int flag  = 0;
        for(string x: wordList){
            if(x.compare(endWord)== 0){
                flag = 1;
            }
            s.insert(x);
        }
        if(flag == 0)return 0;
        queue<string>q;
        q.push(beginWord);
        int level = 0;
        int levelsize;
        while(!q.empty()){
            level++;
            levelsize = q.size();
            while(levelsize--){
                string curr = q.front();
                q.pop();
                for(int i = 0; i<curr.size(); i++){
                    string temp = curr;
                    for(char c = 'a'; c<='z'; c++){
                        temp[i] = c;
                        if(temp.compare(curr)==0){
                            continue;
                        }
                        if(temp.compare(endWord)==0)
                            return level+1;
                        if(s.contains(temp)){
                            cout<<temp<<endl;
                            q.push(temp);
                            s.erase(temp);
                        }
                    }
                }
            }
        }
        return 0;
    }
};