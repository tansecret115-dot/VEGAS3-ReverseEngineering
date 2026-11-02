/* Module: mp3plug.dll
   Function: FUN_5f6ed7f0
   Address: 5f6ed7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6ed7f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = param_1 + 0x28;
    iVar1 = param_1;
    iVar2 = param_1;
    do {
      if (iVar3 != 0) {
        if (*(int *)(iVar1 + 0x3c) != 0) {
          FUN_5f6d97a0(*(int *)(iVar1 + 0x3c));
        }
        if (*(int *)(iVar1 + 0x38) != 0) {
          FUN_5f6d97a0(*(int *)(iVar1 + 0x38));
        }
        if (*(int *)(iVar1 + 0x34) != 0) {
          FUN_5f6d97a0(*(int *)(iVar1 + 0x34));
        }
        if (*(int *)(iVar1 + 0x30) != 0) {
          FUN_5f6d97a0(*(int *)(iVar1 + 0x30));
        }
        if (*(int *)(iVar1 + 0x2c) != 0) {
          FUN_5f6d97a0(*(int *)(iVar1 + 0x2c));
        }
        if (*(int *)(iVar1 + 0x28) != 0) {
          FUN_5f6d97a0(*(int *)(iVar1 + 0x28));
        }
      }
      if (*(int *)(iVar2 + 0x8c) != 0) {
        FUN_5f6d97a0(*(int *)(iVar2 + 0x8c));
      }
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 0x18;
      iVar1 = iVar1 + 0x18;
    } while (iVar2 < param_1 + 0xc);
    FUN_5f6ed150();
    if (*(int *)(param_1 + 0x88) != 0) {
      FUN_5f6d97a0(*(int *)(param_1 + 0x88));
    }
    FUN_5f705730(*(int *)(param_1 + 0x70));
    FUN_5f705730(*(int *)(param_1 + 0x74));
    if (param_1 != -0x268) {
      if (*(int *)(param_1 + 0x268) != 0) {
        FUN_5f6d97a0(*(int *)(param_1 + 0x268));
      }
      iVar3 = param_1;
      do {
        if (*(int *)(iVar3 + 0x26c) != 0) {
          FUN_5f6d97a0(*(int *)(iVar3 + 0x26c));
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < param_1 + 0xc);
    }
    if (param_1 != -0x278) {
      if (*(int *)(param_1 + 0x278) != 0) {
        FUN_5f6d97a0(*(int *)(param_1 + 0x278));
      }
      iVar3 = param_1;
      do {
        if (*(int *)(iVar3 + 0x27c) != 0) {
          FUN_5f6d97a0(*(int *)(iVar3 + 0x27c));
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < param_1 + 0xc);
    }
    if (param_1 != -0x288) {
      if (*(int *)(param_1 + 0x288) != 0) {
        FUN_5f6d97a0(*(int *)(param_1 + 0x288));
      }
      iVar3 = param_1;
      do {
        if (*(int *)(iVar3 + 0x28c) != 0) {
          FUN_5f6d97a0(*(int *)(iVar3 + 0x28c));
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < param_1 + 0xc);
    }
    FUN_5f6d97a0(param_1);
  }
  return;
}


