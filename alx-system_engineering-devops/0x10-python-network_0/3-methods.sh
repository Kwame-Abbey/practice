#!/bin/bash
# Option verb
curl -sX OPTIONS "$1" | grep "Allow" | cut -d " " -f2-
