class MyCalendarThree {
public:
    MyCalendarThree() {
        
    }
    map <int,int> m;
    int book(int start, int end) {
        m[start]++;
        m[end]--;
        int ans=0;
        int temp=0;
        for(auto i: m )
        {
            temp += i.second;
            ans = max(ans,temp);
        }
        return ans ;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */