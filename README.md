# CSCI_151_MadLib

## Instruction 

The story is written in story.txt file

The gaps are identified using a pair of \<>  

Between this pair is what type of word the user should be replacing 

Example: **\<proper noun>** went to the **\<place>** to get some **\<thing>** 


## About Mad lib

A mad lib is a word game where you take a short story (usually only a paragraph long) and remove several words from it and replace them with alternative words with matching grammatical structure. The fun comes from the fact that the replacement words are provided by somebody who has not yet read the story, and so once the story is re-composed, it becomes silly and non-sensical.

For example, if you have the sentence:
    
_Johnny went to the store to get some milk._

You might remove the following three words: "Johnny", "store", "milk". _Johnny_ is a proper noun,  _store_ is a place, and _milk_ is a thing. The sentence with words removed becomes:

__________ went to the _________ to get some ________.

You would then ask your friend to provide alternatives for these words by only telling him or her the type of word you are looking for. You might say: "give me a proper noun" and he or she would give you the first name that comes to mind: "Sam". The you might say "give me a place" and he or she might say "The Grand Canyon". Finally you would ask "give me a thing" and he or she might say "lawnmower".

You then re-compose the story by injecting the words provided by your friend. Our hypothetical mad lib becomes:

_Sam went to the Grand Canyon to get a lawnmower._

## Project Requirements
1. Find a mad lib online, in a book, or write one yourself. You need to have at least _10_ replacement words.
2. Reproduce the mad lib game with a program which plays the role of the story editor.
   1. The program will ask a series of questions at the console and the user of the program will provide the answers to those questions. 
   2. Finally the program will print out the full mad lib with the input words replaced into the story

For example:
   ```
   Give me a proper noun: Sam
   Give me a place: Grand Canyon
   Give me a thing: Lawnmower
   Sam went to the Grand Canyon to get a Lawnmower.