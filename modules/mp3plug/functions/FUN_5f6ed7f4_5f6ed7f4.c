/* Module: mp3plug.dll
   Function: FUN_5f6ed7f4
   Address: 5f6ed7f4
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6ed7f4(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (in_EAX != 0) {
    iVar3 = in_EAX + 0x28;
    iVar1 = in_EAX;
    iVar2 = in_EAX;
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
    } while (iVar2 < in_EAX + 0xc);
    FUN_5f6ed150();
    if (*(int *)(in_EAX + 0x88) != 0) {
      FUN_5f6d97a0(*(int *)(in_EAX + 0x88));
    }
    FUN_5f705730(*(int *)(in_EAX + 0x70));
    FUN_5f705730(*(int *)(in_EAX + 0x74));
    if (in_EAX != -0x268) {
      if (*(int *)(in_EAX + 0x268) != 0) {
        FUN_5f6d97a0(*(int *)(in_EAX + 0x268));
      }
      iVar3 = in_EAX;
      do {
        if (*(int *)(iVar3 + 0x26c) != 0) {
          FUN_5f6d97a0(*(int *)(iVar3 + 0x26c));
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < in_EAX + 0xc);
    }
    if (in_EAX != -0x278) {
      if (*(int *)(in_EAX + 0x278) != 0) {
        FUN_5f6d97a0(*(int *)(in_EAX + 0x278));
      }
      iVar3 = in_EAX;
      do {
        if (*(int *)(iVar3 + 0x27c) != 0) {
          FUN_5f6d97a0(*(int *)(iVar3 + 0x27c));
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < in_EAX + 0xc);
    }
    if (in_EAX != -0x288) {
      if (*(int *)(in_EAX + 0x288) != 0) {
        FUN_5f6d97a0(*(int *)(in_EAX + 0x288));
      }
      iVar3 = in_EAX;
      do {
        if (*(int *)(iVar3 + 0x28c) != 0) {
          FUN_5f6d97a0(*(int *)(iVar3 + 0x28c));
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 < in_EAX + 0xc);
    }
    FUN_5f6d97a0(in_EAX);
  }
  return;
}


