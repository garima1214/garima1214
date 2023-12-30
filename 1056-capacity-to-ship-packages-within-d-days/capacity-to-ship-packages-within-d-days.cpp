class Solution {
public:

    bool isValid(vector<int>& weights, int days ,int mid ) {
        int d = 1 , sum = 0 ; 
        
        for ( int i = 0 ; i < weights.size() ; i++ ) {

            if ( sum + weights[i] <= mid ) {
                sum += weights[i] ;
            }
            else {
                d++;
                sum = weights[i];

                if( d > days || weights[i] > mid ) return false ;
            }
        }
        return true ;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int start = 0 , end = 0, mid , answer = 0 ;

        for ( int i = 0 ; i < weights.size() ; i++ ) {
            end += weights[i] ;
        }

        while ( start <= end ) {

            mid = start + ( end - start ) / 2 ;

            if(isValid( weights , days ,mid )){
                answer = mid ; 
                end = mid - 1 ;
            }
            else {
                start = mid + 1 ;
            }
        }

        return answer ;
    }
};