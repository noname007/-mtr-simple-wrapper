<?php

    $res = file_get_contents("mtr.result");
    $res =     explode(" \r\n",$res);
 var_dump( $res);
