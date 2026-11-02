/* Module: vegas30k.dll
   Function: FUN_010a77d0
   Address: 010a77d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010a77d0(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(uint *)(param_1 + 0x24) != 0) {
    param_2 = param_2 - (int)param_3;
    do {
      if (*(int *)(param_2 + (int)param_3) != *param_3) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      param_3 = param_3 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x24));
  }
  return 1;
}


