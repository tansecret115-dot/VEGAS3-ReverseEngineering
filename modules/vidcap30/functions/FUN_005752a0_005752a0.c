/* Module: vidcap30.exe
   Function: FUN_005752a0
   Address: 005752a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005752a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  param_1 = param_1 - (int)param_2;
  iVar1 = 6;
  do {
    *param_2 = *(undefined4 *)(param_1 + (int)param_2);
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


