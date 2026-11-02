/* Module: vegas30.exe
   Function: FUN_00605d10
   Address: 00605d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00605d10(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  param_1 = param_1 - (int)param_2;
  iVar1 = 3;
  do {
    *param_2 = *(undefined4 *)(param_1 + (int)param_2);
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


