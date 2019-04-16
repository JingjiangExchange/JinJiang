#!/bin/sh    
exe="address_01" #此处不用修改 
des="/home/*******/Address_Book1.0" #安装所在的目录名字,请填写自己的  
deplist=$(ldd $exe | awk  '{if (match($3,"/")){ printf("%s "),$3 } }')    
cp $deplist $des  

