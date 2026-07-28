class Solution {

    public String encode(List<String> strs) {
        StringBuilder ans = new StringBuilder();
        for(String str: strs){
            int len = str.length();
            ans.append(Integer.toString(len));
            ans.append('#');
            ans.append(str);
        }
        System.out.println(ans.toString());
        return ans.toString();
    }

    public List<String> decode(String str) {
        List<String> ans = new ArrayList<>();
        int i = 0;
        while(i< str.length()){
            StringBuilder st = new StringBuilder();     
            while(str.charAt(i)!='#'){
                st.append(str.charAt(i++));
            }
            int stLen = Integer.parseInt(st.toString());
            StringBuilder tAns = new StringBuilder(stLen);
            int j = ++i;
            for(; j<i+stLen; j++){
                tAns.append(str.charAt(j));
            }
            i = j;
            ans.add(tAns.toString());
        }
        return ans;
    }
}
