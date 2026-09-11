class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
      
     int i=0,j=0;

     while(i<word.length() && j<abbr.length()){

       // Check if letter
       if(isalpha(abbr[j])) {

       if(word[i] != abbr[j]){
          return false;
       }
       i = i+1;
       j = j+1;
       }else{
          // Check if number/digit
        
          if(abbr[j] == '0') return false; // checking digit parsing

          int curr = 0 ; // suppose in question i57n so take 57 as current
          while(j<abbr.length() && isdigit(abbr[j])){
            curr = curr * 10 + (abbr[j] -'0');
            j=j+1;
           }
            i = i + curr; // fir i me curr add kar denge
         }
     }

      return i == word.length() && j == abbr.length();  
    }
};