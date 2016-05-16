BEGIN{
    sum = 0;
    max = 0;
    endpoint = 0;    
    temp = 0;
}

NR!=1 &&NR != 2{
#    print $2,$3;
    temp  += $3;
    if(max < temp){
        max = temp;
    }
    
    endpoint += 1;
    sum += temp;

    temp = 0;
}

END{
    print max;
}
