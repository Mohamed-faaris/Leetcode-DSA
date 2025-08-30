class Trie{
public:
    Trie* arr[26];
    bool isEnd;
    Trie(){
        for (int i = 0; i < 26; i++) arr[i] = nullptr;
        isEnd = false;
    }
};

class WordDictionary {
public:
    Trie* head = nullptr; 
    WordDictionary() {
        head = new Trie();
    }
    
    void addWord(string word) {
        Trie* temp = head;
        for(char c:word){
            if(temp->arr[c-'a'] == nullptr){
                temp->arr[c-'a'] = new Trie();
            }
            temp = temp->arr[c-'a'];
        }
        temp->isEnd = true;
    }
    
    bool search(string word) {
        bool result = false;
        //cout<<"\n"<<word<<" \n";
        searchBFS(0,head,result,word);
        return result;
    }
private:
    void searchBFS(int index,Trie* head,bool& result,string& word){
        //cout<<index;
        if (result) return;
        if(word.length() == index){
            result = head->isEnd;
            return;
        }
        if(word[index] == '.'){
            for(int i = 0 ;i<26;i++){
                if(head->arr[i]) searchBFS(index+1,head->arr[i],result,word);
            }
        }
        else{
            if(head->arr[word[index]-'a']) 
                searchBFS(index+1,head->arr[word[index]-'a'],result,word);
        }
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */