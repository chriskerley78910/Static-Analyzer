#!/bin/sh
bin_path="/cs/home/cse20356/www/3311/oracle/bin"
project_path="/cs/home/cse23056/3311/eecs3311/static_analyzer"
cd "${project_path}"
git pull origin master
source compile.sh

cd "${bin_path}"
cp "${project_path}/oracle" oracle
cp "${project_path}/EIFGENs/static_analyzer/W_code/static_analyzer" static_analyzer
chmod ugo+rx oracle
chmod ugo+rx static_analyzer
