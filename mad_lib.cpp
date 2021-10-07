#include <bits/stdc++.h>
using namespace std;
typedef long ld;
#define FOR(i,a,b)\
	for (auto i = a; i != b; i++)
#define fi first
#define se second

//Store all the words
vector <string> words, user_words;
//Storing where the replacing words are
vector <ld> replacing_words;

void inputingStory(){
    ifstream inp("story.txt");
    string word;

    while (!inp.eof()){
        string sentence;
        
        //Read the whole sentence and break them into words
        getline(inp, sentence);
        word = "";
        //Check if reading a gap or not
        bool readingGap = 0;
        FOR(i,0,sentence.size()){
            //Eliminating double space
            if (sentence[i] == ' ' && (i != sentence.size() - 1) && sentence[i + 1] == ' '){
                continue;
            }

            if (sentence[i] == '<'){
                    replacing_words.push_back(words.size());
                    readingGap = 1;
            }

            word += sentence[i];
            if (sentence[i] == '>'){
                    words.push_back(word);
                    word = "";
                    readingGap = 0;
            }
            //if space is detected, break the words
            if (sentence[i] == ' ' && !readingGap){
                words.push_back(word);
                word = "";
            }

           
        }
        //Inputing the last word
        if (word[0] == '<'){
            replacing_words.push_back(words.size());  
        }
        words.push_back(word + "\n");     
    }

    inp.close();
}
//Removing the bracket in in the words we are supposed to replace
string removeBracket(string x){
    string res = "";
    //Go through them one by one
    /*FOR(i,0, x.size()){
        if (x[i] == '>'){
            return res;
        }
        if (x[i] == '<'){
            continue;
        }

        res += x[i];;
    }*/

    res = x.substr(1, x.size() - 2);
    return res;
}
//Inputing user's words
void inputReplacingWords(){
    FOR(i,0,replacing_words.size()){
        string x = words[replacing_words[i]];
        cout << "Give me a(n) " << removeBracket(x) << "\n";
        cin >> x;
        user_words.push_back(x);
    }
}

//Replacing them
void replaceWords(){
    FOR(i,0,user_words.size()){
        words[replacing_words[i]] = user_words[i];
    }
}

int main(){

    cout << "Instruction\n\t";
    cout << "The story is written in story.txt file\n\t";
    cout << "The gaps are identified using a pair of <>\n\t";  
    cout << "Between this pair is what type of word the user should be replacing\n\t";
    cout << "Example: <proper noun> went to the <place> to get some <thing>\n\n";

    inputingStory();
    inputReplacingWords();
    replaceWords();

    cout << "Here is the new story!!!\n";
    FOR(i,0,words.size()){
        cout << words[i] ;
    }

    system("pause");
    return 0;
}