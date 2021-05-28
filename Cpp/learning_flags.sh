#!/bin/bash

while [[ $# -gt 0 ]]; do 
    arg="$1"
    echo $arg
    case $arg in
        -v|--version) 
        echo "version tag"
        ;;
    esac
    shift # moves to the next command line argument (this is dope)
done 


