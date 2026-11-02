/* Module: sftrkfx1.dll
   Function: FUN_5cbab600
   Address: 5cbab600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbab600(int param_1,int param_2,int param_3)

{
  int local_10 [2];
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_5cba9850(param_1,param_2,*(int *)(param_1 + 0x5c) * 0x20 + 0x30 + param_2,local_10);
    FUN_5cba9850(param_1,param_2,
                 (*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x5c)) * 0x20 + 0x10 + param_2,
                 local_8);
    if ((local_10[0] <= param_3) && (param_3 <= local_8[0])) {
      return 1;
    }
  }
  return 0;
}


