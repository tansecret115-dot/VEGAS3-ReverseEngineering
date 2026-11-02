/* Module: mp3plug.dll
   Function: FUN_5f6c98a0
   Address: 5f6c98a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6c98a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x16ad);
  if (iVar3 < 0xe) {
    *(ushort *)(param_1 + 0x16ab) =
         *(ushort *)(param_1 + 0x16ab) | (ushort)(2 << ((byte)iVar3 & 0x1f));
    *(int *)(param_1 + 0x16ad) = iVar3 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16ab) =
         *(ushort *)(param_1 + 0x16ab) | (ushort)(2 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16ab);
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16ac);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar3 = *(int *)(param_1 + 0x16ad);
    *(int *)(param_1 + 0x16ad) = iVar3 + -0xd;
    *(ushort *)(param_1 + 0x16ab) = 2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  uVar2 = DAT_5f736a20;
  iVar3 = *(int *)(param_1 + 0x16ad);
  uVar1 = DAT_5f736a20 >> 0x10;
  if ((int)(0x10 - uVar1) < iVar3) {
    *(ushort *)(param_1 + 0x16ab) =
         *(ushort *)(param_1 + 0x16ab) | (ushort)((DAT_5f736a20 & 0xffff) << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16ab);
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16ac);
    iVar3 = *(int *)(param_1 + 0x16ad);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(uint *)(param_1 + 0x16ad) = iVar3 + -0x10 + uVar1;
    *(ushort *)(param_1 + 0x16ab) = (ushort)uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  else {
    *(ushort *)(param_1 + 0x16ab) =
         *(ushort *)(param_1 + 0x16ab) | (ushort)(DAT_5f736a20 << ((byte)iVar3 & 0x1f));
    *(uint *)(param_1 + 0x16ad) = iVar3 + uVar1;
  }
  FUN_5f6cb1a0(param_1);
  iVar3 = *(int *)(param_1 + 0x16ad);
  if ((*(int *)(param_1 + 0x16a7) - iVar3) + 0xb < 9) {
    if (iVar3 < 0xe) {
      *(ushort *)(param_1 + 0x16ab) =
           *(ushort *)(param_1 + 0x16ab) | (ushort)(2 << ((byte)iVar3 & 0x1f));
      *(int *)(param_1 + 0x16ad) = iVar3 + 3;
    }
    else {
      *(ushort *)(param_1 + 0x16ab) =
           *(ushort *)(param_1 + 0x16ab) | (ushort)(2 << ((byte)iVar3 & 0x1f));
      *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
           *(undefined1 *)(param_1 + 0x16ab);
      iVar3 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar3;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16ac);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      iVar3 = *(int *)(param_1 + 0x16ad);
      *(int *)(param_1 + 0x16ad) = iVar3 + -0xd;
      *(ushort *)(param_1 + 0x16ab) = 2 >> (0x10U - (char)iVar3 & 0x1f);
    }
    uVar2 = DAT_5f736a20;
    iVar3 = *(int *)(param_1 + 0x16ad);
    uVar1 = DAT_5f736a20 >> 0x10;
    if ((int)(0x10 - uVar1) < iVar3) {
      *(ushort *)(param_1 + 0x16ab) =
           *(ushort *)(param_1 + 0x16ab) | (ushort)((DAT_5f736a20 & 0xffff) << ((byte)iVar3 & 0x1f))
      ;
      *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
           *(undefined1 *)(param_1 + 0x16ab);
      iVar3 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar3;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16ac);
      iVar3 = *(int *)(param_1 + 0x16ad);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(uint *)(param_1 + 0x16ad) = iVar3 + -0x10 + uVar1;
      *(ushort *)(param_1 + 0x16ab) = (ushort)uVar2 >> (0x10U - (char)iVar3 & 0x1f);
    }
    else {
      *(ushort *)(param_1 + 0x16ab) =
           *(ushort *)(param_1 + 0x16ab) | (ushort)(DAT_5f736a20 << ((byte)iVar3 & 0x1f));
      *(uint *)(param_1 + 0x16ad) = iVar3 + uVar1;
    }
    FUN_5f6cb1a0(param_1);
  }
  *(undefined4 *)(param_1 + 0x16a7) = 7;
  return;
}


