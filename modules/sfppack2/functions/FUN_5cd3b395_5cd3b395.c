/* Module: sfppack2.dll
   Function: FUN_5cd3b395
   Address: 5cd3b395
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd3b395(undefined4 param_1,int param_2)

{
  uint uVar1;
  int local_8;
  
  local_8 = 0;
  if (0 < DAT_5cd5f2a4) {
    do {
      if (param_2 == 0) {
        uVar1 = FUN_5cd3b2e0();
      }
      else {
        uVar1 = FUN_5cd3b154();
      }
    } while ((-1 < (int)uVar1) && (local_8 = local_8 + 1, local_8 < DAT_5cd5f2a4));
  }
  return;
}


