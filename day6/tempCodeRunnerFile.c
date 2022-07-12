int ans;
    int a = 0; 
    int b = 1;
    int c = 0; 

    ans = a++ && b++ || c++;
    //    (a++ && b++) || c++
    //    (F++ && XX) || 
    //         F  ||  F++
    //            F    