#!/bin/bash
# takes in a url 
curl -sI "$1" | grep "Content-Length" | cut -d " " -f2
