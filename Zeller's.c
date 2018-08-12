Zeller's algorithm used to find the day for given date

FORMULA



h=[q+(13*(m+1))/5+k+k/4+j/4-2*j]%7

--h is the day of the week (0 = Saturday, 1 = Sunday, 2 = Monday, …, 6 = Friday)
--q is the day of the month
--m is the month (3 = March, 4 = April, 5 = May, …, 14 = February)
--K the year of the century ( year % 100).
--J is the zero-based century (actually ⌊ year/100 ⌋ ) For example, the zero-based centuries for 1995 and 2000 are 19 and 20 respectively (to not be confused with the common ordinal century enumeration which indicates 20th for both cases).

