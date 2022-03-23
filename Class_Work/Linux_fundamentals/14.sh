#!/bin/bash

exec 2>log.txt 2>log1.txt
exec 1>log1.txt
exec 2<&-
exec 1<&-

