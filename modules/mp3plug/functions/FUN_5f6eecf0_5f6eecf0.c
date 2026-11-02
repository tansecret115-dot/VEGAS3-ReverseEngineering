/* Module: mp3plug.dll
   Function: FUN_5f6eecf0
   Address: 5f6eecf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6eecf0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_24;
  undefined4 uStack_18;
  
  if (param_1 != 0) {
    iVar2 = param_1 + 0x38;
    iVar1 = param_1;
    do {
      if (iVar2 != 0) {
        if (*(int *)(iVar1 + 0x38) != 0) {
          FUN_5f6d97a0(*(int *)(iVar1 + 0x38));
        }
        if (*(int *)(iVar1 + 0x3c) != 0) {
          FUN_5f6d97a0(*(int *)(iVar1 + 0x3c));
        }
        if (*(int *)(iVar1 + 0x40) != 0) {
          FUN_5f6d97a0(*(int *)(iVar1 + 0x40));
        }
        if (*(int *)(iVar1 + 0x44) != 0) {
          FUN_5f6d97a0(*(int *)(iVar1 + 0x44));
        }
      }
      iVar2 = iVar2 + 0x18;
      iVar1 = iVar1 + 0x18;
    } while (iVar1 < param_1 + 0x48);
    FUN_5f6ee680();
    if (param_1 != -0x80) {
      uStack_18 = 0;
      iVar2 = param_1;
      do {
        if (*(int *)(iVar2 + 0x80) != 0) {
          FUN_5f6d97a0(*(int *)(iVar2 + 0x80));
        }
        iVar1 = param_1 + uStack_18;
        do {
          if (*(int *)(iVar1 + 0x88) != 0) {
            FUN_5f6d97a0(*(int *)(iVar1 + 0x88));
          }
          iVar1 = iVar1 + 4;
        } while (iVar1 < param_1 + 0xc + uStack_18);
        iVar2 = iVar2 + 4;
        uStack_18 = uStack_18 + 0xc;
      } while (iVar2 < param_1 + 8);
    }
    if (param_1 != -0xa0) {
      uStack_24 = 0;
      iVar2 = param_1;
      do {
        if (*(int *)(iVar2 + 0xa0) != 0) {
          FUN_5f6d97a0(*(int *)(iVar2 + 0xa0));
        }
        iVar1 = param_1 + uStack_24;
        do {
          if (*(int *)(iVar1 + 0xa8) != 0) {
            FUN_5f6d97a0(*(int *)(iVar1 + 0xa8));
          }
          iVar1 = iVar1 + 4;
        } while (iVar1 < param_1 + 0xc + uStack_24);
        iVar2 = iVar2 + 4;
        uStack_24 = uStack_24 + 0xc;
      } while (iVar2 < param_1 + 8);
    }
    if (param_1 != -0xc0) {
      uStack_24 = 0;
      iVar2 = param_1;
      do {
        if (*(int *)(iVar2 + 0xc0) != 0) {
          FUN_5f6d97a0(*(int *)(iVar2 + 0xc0));
        }
        iVar1 = param_1 + uStack_24;
        do {
          if (*(int *)(iVar1 + 200) != 0) {
            FUN_5f6d97a0(*(int *)(iVar1 + 200));
          }
          iVar1 = iVar1 + 4;
        } while (iVar1 < param_1 + 0xc + uStack_24);
        iVar2 = iVar2 + 4;
        uStack_24 = uStack_24 + 0xc;
      } while (iVar2 < param_1 + 8);
    }
    if (param_1 != -0xe0) {
      uStack_24 = 0;
      iVar2 = param_1;
      do {
        if (*(int *)(iVar2 + 0xe0) != 0) {
          FUN_5f6d97a0(*(int *)(iVar2 + 0xe0));
        }
        iVar1 = param_1 + uStack_24;
        do {
          if (*(int *)(iVar1 + 0xe8) != 0) {
            FUN_5f6d97a0(*(int *)(iVar1 + 0xe8));
          }
          iVar1 = iVar1 + 4;
        } while (iVar1 < param_1 + 0xc + uStack_24);
        iVar2 = iVar2 + 4;
        uStack_24 = uStack_24 + 0xc;
      } while (iVar2 < param_1 + 8);
    }
    FUN_5f6d97a0(param_1);
  }
  return;
}


