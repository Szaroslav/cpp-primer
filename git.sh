#!/bin/bash

if [[ $1 == "add" ]]; then
    echo "python autogen_docs.py $2"
    python autogen_docs.py $2
    echo "git add ."
    git add .
fi
