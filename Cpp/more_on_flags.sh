#!/bin/bash


# This is cool: ./more_on_flags.sh -f 'John Smith' -a 25 -u john -g noway
while getopts u:a:f:g: flag
do
    case "${flag}" in
        u) username=${OPTARG};;
        a) age=${OPTARG};;
        f) fullname=${OPTARG};;
        g) thiswild=${OPTARG};;
    esac
done
echo "Username: $username";
echo "Age: $age";
echo "Full Name: $fullname";
echo "This wild: $thiswild";