/* Module: vegas30.exe
   Function: FUN_00580a60
   Address: 00580a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00580a60(int *param_1,int param_2)

{
  if ((1 < *(int *)(*param_1 + -0xc)) || (*(int *)(*param_1 + -4) < param_2)) {
    FUN_00580970();
    FUN_00580920(param_2);
  }
  return;
}


