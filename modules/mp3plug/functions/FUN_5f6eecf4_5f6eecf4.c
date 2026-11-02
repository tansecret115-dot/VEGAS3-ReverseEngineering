/* Module: mp3plug.dll
   Function: FUN_5f6eecf4
   Address: 5f6eecf4
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6eecf4(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_18;
  
  if (in_EAX != 0) {
    iVar2 = in_EAX + 0x38;
    iVar1 = in_EAX;
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
    } while (iVar1 < in_EAX + 0x48);
    FUN_5f6ee680();
    if (in_EAX != -0x80) {
      local_18 = 0;
      iVar2 = in_EAX;
      do {
        if (*(int *)(iVar2 + 0x80) != 0) {
          FUN_5f6d97a0(*(int *)(iVar2 + 0x80));
        }
        iVar1 = in_EAX + local_18;
        do {
          if (*(int *)(iVar1 + 0x88) != 0) {
            FUN_5f6d97a0(*(int *)(iVar1 + 0x88));
          }
          iVar1 = iVar1 + 4;
        } while (iVar1 < in_EAX + 0xc + local_18);
        iVar2 = iVar2 + 4;
        local_18 = local_18 + 0xc;
      } while (iVar2 < in_EAX + 8);
    }
    if (in_EAX != -0xa0) {
      local_24 = 0;
      iVar2 = in_EAX;
      do {
        if (*(int *)(iVar2 + 0xa0) != 0) {
          FUN_5f6d97a0(*(int *)(iVar2 + 0xa0));
        }
        iVar1 = in_EAX + local_24;
        do {
          if (*(int *)(iVar1 + 0xa8) != 0) {
            FUN_5f6d97a0(*(int *)(iVar1 + 0xa8));
          }
          iVar1 = iVar1 + 4;
        } while (iVar1 < in_EAX + 0xc + local_24);
        iVar2 = iVar2 + 4;
        local_24 = local_24 + 0xc;
      } while (iVar2 < in_EAX + 8);
    }
    if (in_EAX != -0xc0) {
      local_24 = 0;
      iVar2 = in_EAX;
      do {
        if (*(int *)(iVar2 + 0xc0) != 0) {
          FUN_5f6d97a0(*(int *)(iVar2 + 0xc0));
        }
        iVar1 = in_EAX + local_24;
        do {
          if (*(int *)(iVar1 + 200) != 0) {
            FUN_5f6d97a0(*(int *)(iVar1 + 200));
          }
          iVar1 = iVar1 + 4;
        } while (iVar1 < in_EAX + 0xc + local_24);
        iVar2 = iVar2 + 4;
        local_24 = local_24 + 0xc;
      } while (iVar2 < in_EAX + 8);
    }
    if (in_EAX != -0xe0) {
      local_24 = 0;
      iVar2 = in_EAX;
      do {
        if (*(int *)(iVar2 + 0xe0) != 0) {
          FUN_5f6d97a0(*(int *)(iVar2 + 0xe0));
        }
        iVar1 = in_EAX + local_24;
        do {
          if (*(int *)(iVar1 + 0xe8) != 0) {
            FUN_5f6d97a0(*(int *)(iVar1 + 0xe8));
          }
          iVar1 = iVar1 + 4;
        } while (iVar1 < in_EAX + 0xc + local_24);
        iVar2 = iVar2 + 4;
        local_24 = local_24 + 0xc;
      } while (iVar2 < in_EAX + 8);
    }
    FUN_5f6d97a0(in_EAX);
  }
  return;
}


