/* Module: sfppack1.dll
   Function: FUN_5cdfc515
   Address: 5cdfc515
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdfc515(undefined4 param_1,int param_2)

{
  uint uVar1;
  int local_8;
  
  local_8 = 0;
  if (0 < DAT_5ce1f3f0) {
    do {
      if (param_2 == 0) {
        uVar1 = FUN_5cdfc460();
      }
      else {
        uVar1 = FUN_5cdfc2d4();
      }
    } while ((-1 < (int)uVar1) && (local_8 = local_8 + 1, local_8 < DAT_5ce1f3f0));
  }
  return;
}


