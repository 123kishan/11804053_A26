1.	do {
2.	flag[i] = true;
3.	while (flag[j]) {
4.	if (turn == j) {
5.	flag[i] = false;
6.	while (turn == j)
7.	; /* do nothing */
8.	flag[i] = true;
9.	}
10.	}
11.	/* critical section */
12.	turn = j;
13.	flag[i] = false;
14.	/* remainder section */
15.	} while (true);
