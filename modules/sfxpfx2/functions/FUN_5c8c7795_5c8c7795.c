/* Module: sfxpfx2.dll
   Function: FUN_5c8c7795
   Address: 5c8c7795
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8c7795(undefined4 param_1,int param_2)

{
  uint uVar1;
  int local_8;
  
  local_8 = 0;
  if (0 < DAT_5c8e7170) {
    do {
      if (param_2 == 0) {
        uVar1 = FUN_5c8c76e0();
      }
      else {
        uVar1 = FUN_5c8c7554();
      }
    } while ((-1 < (int)uVar1) && (local_8 = local_8 + 1, local_8 < DAT_5c8e7170));
  }
  return;
}


