 #include <iostream>
 using namespace std;
 int strStr(string haystack, string needle) {
         int len = needle.length();
         int len2 = haystack.length();
         int j=0,index;
        if(len > len2)
              return -1;
        if(len==0)
             return 0;
     for(int i=0; i<len2; i++){
            j=0;
          index = i;
           if(needle[j]==haystack[index]){
  while(needle[j++]==haystack[index++] ){
            
                  if(j==len)
                  return i;
                }
                  }
          }
        return -1;
        
    }

int main()
{   string str1,str2;
     cin>>str1>>str2;
    cout<<strStr(str1,str2);

    return 0;
}
