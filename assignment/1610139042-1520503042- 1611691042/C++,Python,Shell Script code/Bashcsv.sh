
printf "Press 1 to search for industry:\n%s";
printf "Press 2 to search for level:\n%s";

printf "Press 3 to search for line_code:\n%s";
printf "Press 4 to search for value:\n%s";

read choice;
printf " $choice \n%s";




if [ $choice -eq 1 ]
then
printf "please enter industry to search:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$2 == patt' data1.csv
fi

if [ $choice -eq 2 ]
then
printf "please enter level to search:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$3 == patt' data1.csv
fi


if [ $choice -eq 3 ]
then
printf "please enter line_code to search:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$5 == patt' data1.csv
fi

if [ $choice -eq 4 ]
then
printf "please enter value to search:\n%s"; read pattern; awk -v patt="$pattern" -F',' '$6 == patt' data1.csv
fi

