/* Module: sftrans1.dll
   Function: FUN_00536330
   Address: 00536330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00536330(int param_1,undefined4 *param_2)

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


