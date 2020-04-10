ALGORITHM of dekker's Critical Section problem:


var flag: array [0..1] of boolean;
turn: 0..1;
repeat

 flag[i] := true;
 while flag[j] do
 if turn = j then
 begin
 flag[i] := false;
 while turn = j do no-op;
 flag[i] := true;
 end;

 critical section

 turn := j;
 flag[i] := false;

 remainder section

until false;
