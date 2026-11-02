/* Module: mp3plug.dll
   Function: FUN_5f6c4800
   Address: 5f6c4800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6c4800(int param_1)

{
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x3b8) = 1;
  uVar1 = *(uint *)(param_1 + 0x2d8) & 0xf;
  if ((uVar1 == 0) || ((uVar1 & uVar1 - 1) != 0)) {
    FUN_5f6c4910(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0x2d8);
  if ((uVar1 & 8) == 0) {
    uVar1 = uVar1 & 0x1e0;
    if ((uVar1 == 0) || ((uVar1 & uVar1 - 1) != 0)) {
      FUN_5f6c4910(param_1);
    }
    if ((*(uint *)(param_1 + 0x2d8) & 0x800) == 0) {
      FUN_5f6c4910(param_1);
    }
    else {
      if ((*(int *)(param_1 + 0x290) < 1) || (10 < *(int *)(param_1 + 0x290))) {
        FUN_5f6c4910(param_1);
      }
      if (((*(uint *)(param_1 + 0x2d8) & 0x1000) != 0) &&
         ((*(uint *)(param_1 + 0x300) &
          ~((1 << ((byte)*(undefined4 *)(param_1 + 0x290) & 0x1f)) - 1U)) != 0)) {
        FUN_5f6c4910(param_1);
        return;
      }
    }
  }
  else {
    uVar1 = uVar1 & 0x180;
    if ((uVar1 == 0) || ((uVar1 & uVar1 - 1) != 0)) {
      FUN_5f6c4910(param_1);
    }
    if ((*(uint *)(param_1 + 0x2d8) & 0x7860) != 0) {
      FUN_5f6c4910(param_1);
      return;
    }
  }
  return;
}


