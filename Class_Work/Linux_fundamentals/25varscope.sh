#!/bin/bash
#Script to check scope of varaibles

scope() {
var=$1
echo "whithin the function value of var is $var";

}
var=outside
echo "Before calling function value of var is $var"
scope local
echo "After calling function value of var is $var"
