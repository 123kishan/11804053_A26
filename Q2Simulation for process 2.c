1.	do {
2.	flag[j] = true;
3.	while (flag[i]) {
4.	if (turn == i) {
5.	flag[j] = false;
6.	while (turn == i)
7.	; /* do nothing */
8.	flag[j] = true;
9.	}
10.	}
11.	/* critical section */
12.	turn = i;
13.	flag[j] = false;
14.	/* remainder section */
15.	} while (true);
