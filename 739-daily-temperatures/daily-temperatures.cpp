class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
      stack <int> st;
      int size=temperatures.size();
      vector<int> nge(size,0);
      
      for(int i=size-1;i>=0;i--){

          while(!st.empty()&& temperatures[st.top()]<=temperatures[i])
          st.pop();
          if(!st.empty())
          nge[i]=st.top()-i;
        st.push(i);
      }
      return nge;  
    }
};