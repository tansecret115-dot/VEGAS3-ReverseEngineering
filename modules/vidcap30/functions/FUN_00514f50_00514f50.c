/* Module: vidcap30.exe
   Function: FUN_00514f50
   Address: 00514f50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00514f50(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 8) != 0) {
    param_2 = param_2 - (int)param_3;
    do {
      if (*(int *)(param_2 + (int)param_3) != *param_3) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      param_3 = param_3 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return 1;
}


