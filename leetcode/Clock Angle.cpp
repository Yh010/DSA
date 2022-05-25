int solve(int hour, int minutes) {
    /*int a = 30*hour ;
    int b =6*minutes ;
    int c = (a-b) ;*/
    
   
   
   /* float c = 30 * hour - (11/2) * minutes ;

    if(c<0){
        c = -1 * c ;
    }
    if(c >180){
        c = 360 - c ;
        int x = floor(c) ;
        return x ;
    }else{
        int x = floor(c) ;
        return x ;
    }*/

    /*double x = abs((5.5 * (60*hour + minutes))/360 ) ;
    int ans = 360 * (x - ceil(x)) ;
    if(ans>180) {
        return abs(360-ans) ;
    }

    return abs(ans) ;
    int c = abs(30*hour - 5.5*minutes) ;
    if(c>180){
        c = 360- c ;
    }
    
    return c ;*/
    float h = (hour%12 + (float)minutes/60)*30 ;
    float m= minutes*6 ;
    float angle= abs(h-m) ;
    if(angle > 180){
        angle=360-angle ;
    }

    return angle ;
}