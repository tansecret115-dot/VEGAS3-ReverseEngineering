/* Module: vegas30k.dll
   Function: FUN_010aed20
   Address: 010aed20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010aed20(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    param_3 = param_3 - (int)param_2;
    do {
      uVar1 = uVar1 + 1;
      *param_2 = *(undefined4 *)(param_3 + (int)param_2);
      param_2 = param_2 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return;
}


