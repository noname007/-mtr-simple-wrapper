<?php
    $domain =[
        "gs.push.rgbvr.com",
        "dl.push.rgbvr.com"
    ];
    foreach($domain as $v){
        echo $v," ";
        $res = system("sudo mtr  -i 0.1 --report -c 10 -n $v|awk -f 1.awk");
        #var_dump($res);
    }

