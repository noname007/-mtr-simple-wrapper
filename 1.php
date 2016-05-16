<?php
    $domain =[
        "gs.push.rgbvr.com",
        "dl.push.rgbvr.com"
    ];
    $res_ret = [];
    foreach($domain as $v){
        echo $v," ";
        $res = system("sudo mtr  -i 0.1 --report -c 10 -n $v|awk -f 1.awk");
        $res_ret[$v] = $res;
        #var_dump($res);
    }
    var_dump($res_ret);
    asort($res_ret);
    echo json_encode($res_ret);
