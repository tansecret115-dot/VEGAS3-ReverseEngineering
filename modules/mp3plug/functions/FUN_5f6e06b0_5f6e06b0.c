/* Module: mp3plug.dll
   Function: FUN_5f6e06b0
   Address: 5f6e06b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f6e06b0(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_5f7529b8 != 0) {
    iVar1 = 0;
    if (0 < DAT_5f7529bc) {
      do {
        FUN_5f6d97a0(*(int *)(DAT_5f7529b8 + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_5f7529bc);
    }
    FUN_5f6d97a0(DAT_5f7529b8);
    DAT_5f7529bc = 0;
    DAT_5f7529b8 = 0;
  }
  if (DAT_5f7529c8 != 0) {
    iVar1 = 0;
    if (0 < DAT_5f7529c4) {
      do {
        FUN_5f6d97a0(*(int *)(DAT_5f7529c8 + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_5f7529c4);
    }
    FUN_5f6d97a0(DAT_5f7529c8);
    DAT_5f7529c4 = 0;
    DAT_5f7529c8 = 0;
  }
  if (DAT_5f7529b0 != 0) {
    iVar1 = 0;
    if (0 < DAT_5f73fd60) {
      iVar2 = 0;
      do {
        FUN_5f6d97a0(*(int *)(DAT_5f7529b0 + iVar2));
        FUN_5f6d97a0(*(int *)(DAT_5f7529b0 + 4 + iVar2));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x18;
      } while (iVar1 < DAT_5f73fd60);
    }
    FUN_5f6d97a0(DAT_5f7529b0);
    DAT_5f7529b0 = 0;
  }
  _DAT_5f73fd68 = 0xffffffff;
  DAT_5f73fd60 = 0xffffffff;
  return;
}


