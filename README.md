# CSV Search in Python, C++ and Bash

CSE425 Programming Language Concepts course project at North South University, Summer 2019.
Team: Sazzad Hossain (Python), Ebna Saykot Rayhan (C++) and Sumaiya Ashfaque Shachcho (Bash).

The same small program was written in three languages to compare how each one handles a common task: reading a CSV file and printing the rows that match a search.

## Dataset

`survey-2018-nature-of-work-csv.csv`: 2018 Nature of Work survey data (2.5 MB, 12,831 rows). Columns: `description`, `industry`, `level`, `size`, `line_code`, `value`.

## What the programs do

A text menu asks the user to search by industry, level, line_code or value, then prints every matching row.

| Language | File | Approach |
|---|---|---|
| Python | `CSVpython.py` | `csv` module |
| C++ | `C++code.cpp` | `ifstream` and `getline` |
| Bash | `Bashcsv.sh` | `awk` with a comma field separator |

## How to run

The programs read a file named `data1.csv`, so copy the dataset under that name first:

```bash
cd "assignment/1610139042-1520503042- 1611691042/C++,Python,Shell Script code"
cp ../../../survey-2018-nature-of-work-csv.csv data1.csv
python3 CSVpython.py
g++ C++code.cpp -o csvsearch && ./csvsearch
bash Bashcsv.sh
```

## Known issue

In the Python version, options 3 and 4 compare against the wrong columns (`size` and `line_code` instead of `line_code` and `value`).
