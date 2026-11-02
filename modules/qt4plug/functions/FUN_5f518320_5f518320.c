/* Module: qt4plug.dll
   Function: FUN_5f518320
   Address: 5f518320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f518320(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0x736f7774;
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 2);
  *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)(param_1 + 0xe);
  uVar1 = FUN_5f518370(*(int *)(param_1 + 4));
  param_2[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  return;
}


