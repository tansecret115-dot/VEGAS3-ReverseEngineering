/* Module: sfxpfx1.dll
   Function: FUN_5c975e65
   Address: 5c975e65
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c975e65(undefined4 param_1,int param_2)

{
  uint uVar1;
  int local_8;
  
  local_8 = 0;
  if (0 < DAT_5c996190) {
    do {
      if (param_2 == 0) {
        uVar1 = FUN_5c975db0();
      }
      else {
        uVar1 = FUN_5c975c24();
      }
    } while ((-1 < (int)uVar1) && (local_8 = local_8 + 1, local_8 < DAT_5c996190));
  }
  return;
}


