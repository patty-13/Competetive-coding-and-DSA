/*
    ALL quesitons regarding strings.
*/
/*
  1. Basics:
  ->  Funciton to copy a string  
    use strcpy          
*/
/*
   2. Pangram checking
   if the string contains each and every letter from english alphabets.
   algorithm
   -> we iterate all the alphabets and make an array with marks
   if alphabets matches we mark it otherwise we leave it.
*/
// #include "iostream"
// #include "string"
// #include "vector"
// using namespace std;
// bool checkPangram(string str)
// {
//     vector<int> mark(26, false);
//     int index;

//     for(int i = 0; i<str.length() ; i++)
//     {
//         if('A'<= str[i] && str[i] <= 'Z')
//         {
//             index = str[i] - 'A';
//         }
//         else if('a'<=str[i] && str[i] <= 'z')
//         {
//             index = str[i] - 'a';
//         }
//         else
//         {
//             continue;
//         }
//         mark[index] = true;
//     }

//         for(int i = 0;i<=25;i++)
//         {
//             if(mark[i] == false)
//             return (false);
//         }
//         return true;
        
    
// }
// int main()
// {
//     string s,s1;
//     getline(cin,s);
//     getline(cin,s1);
//    if( checkPangram(s))
//    {
//        cout<<"ITS PANAGRAM"<<endl;
//        for(int i = 0;s[i]!='\0';i++)
//        {
//             s[i] == tolower(s[i]);
//        }
//        int count =0 ;
//        for(int i = 0; i<26; i++)
//        {
//      //      int pos = s.find(a)
//        //isdigits is a funciton to check digits.
//        }
//    }
//    else
//    {
//        cout<<"ITS NOT PANAGRAM"<<endl;
//    }
   
// }

/*
    Arithmatic operation in strings
    ->
*/
/*
*/