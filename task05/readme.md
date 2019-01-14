Write program, which works with database of languages

Structure of database file `languages.txt`
```
N
Native_1 Second_1 Name_1
Native_2 Second_2 Name_2
Native_3 Second_3 Name_3
...
Native_N Second_N Name_N
```
`N` - number of languages in file

`Native_N` - number of native speakers (millions) for language N

`Second_N` - number of speakeks (millions) with language N as second language

`Name_N` - name of language N

[Example of file](https://github.com/Nordth/siaod-en-2018/blob/master/task05/languages.txt)


Task
====

1) Declare new structure `Language` that holds information about language

-----

2) Read input file `language` and print languages in following format:

```
N | Language    | Native | Second | Total
-----------------------------------------
1 | Russian     |    145 |    110 |   255
2 | Portuguese  |    203 |     10 |   213
3 | Japanese    |    126 |      1 |   127
...

```

To open  file use `FILE *f = fopen("path/to/languages.txt", "rt")`

To close file use `fclose(f)`


-----

3) Using dynamic memory allocate new array `languages` and store records from file to this array
```
  Language *languages = (Language *)calloc(N, sizeof(Language)); // allocate memory
  // ...
  // At the end of program:
  free(language) // free memory
```

-----

4) Write function `printLanguages(Language *langs, int n)`, which should print n languages from `langs` in same format as before

For now your program's alogirtm should be following:

1. Open file `"languages.txt"`
2. Read number of records `N`
3. Allocate array `languages` with `N` elements
4. Read all records from file to array `languages`
5. print records using function `printLanguages`
6. free memory from array `languages`
7. close file `"languages.txt"`
-----

5) Sort array `language` by total number of speakers in descending order using Bubble Sort algoritm and print array languages in second time

-----

6) Write sorted array of languages to new file "sorted_languages.txt" in same format as input file

Use `FILE * f2 = fopen("path/to/sorted_languages.txt", "wt")` to open output file


