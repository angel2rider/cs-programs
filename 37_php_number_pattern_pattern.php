<?php
$num=$_POST['num'];
for($i=1;$i<=$num;$i++)
{
    for($j=1;$j<=$i;$j++)
    {
        echo $j;
        echo "\t";
    }
    echo '<br>';
}
?>