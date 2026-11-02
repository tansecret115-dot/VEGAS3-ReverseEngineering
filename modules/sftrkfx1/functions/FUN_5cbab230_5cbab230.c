/* Module: sftrkfx1.dll
   Function: FUN_5cbab230
   Address: 5cbab230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbab230(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int local_8;
  int local_4;
  
  if (param_1[0x18] != 0) {
    uVar1 = param_1[0x17] + -1 + param_1[0x18];
    if (uVar1 <= *(int *)(param_2 + 0x28) - 1U) {
      FUN_5cba9850((int)param_1,param_2,uVar1 * 0x20 + 0x30 + param_2,&local_8);
      local_8 = local_8 + 10;
      local_4 = local_4 + -1;
      uVar1 = FUN_5cba9d80((int)param_1,param_2,local_8,local_4);
      if ((uVar1 != 0xffffffff) && (uVar1 != 0)) {
        param_1[0x18] = param_1[0x18] + 1;
        FUN_5cbaa380(param_1);
      }
    }
  }
  return;
}


