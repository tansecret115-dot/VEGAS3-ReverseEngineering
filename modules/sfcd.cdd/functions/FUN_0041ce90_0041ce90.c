/* Module: sfcd.cdd
   Function: FUN_0041ce90
   Address: 0041ce90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041ce90(HSFCD__ *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char local_94 [3];
  byte local_91;
  byte local_90;
  byte local_8f;
  byte local_8e;
  uint local_8c;
  uint local_88;
  uint local_82;
  drivedbentry local_7c [92];
  int local_20;
  
  iVar1 = *(int *)(param_1 + 0x160);
  FUN_004194f0((undefined4 *)param_1);
  *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & 0x6700;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  iVar3 = FUN_00419810(param_1,0x2a,(undefined4 *)local_94,0x16);
  if (iVar3 == 0) {
    if (local_94[0] != '*') {
      uVar2 = *(uint *)(iVar1 + 0x34);
      if (((uVar2 & 0x200) == 0) || ((uVar2 & 0x400) == 0)) {
        return -0x7ffb1f34;
      }
      *(uint *)(iVar1 + 0x34) = uVar2 & 0xfffffdff | 0x100;
      iVar3 = FUN_00419810(param_1,0x2a,(undefined4 *)local_94,0x16);
      if (iVar3 < 0) {
        return iVar3;
      }
      if (local_94[0] != '*') {
        return -0x7ffb1f34;
      }
    }
    FUN_0041f970((undefined1 *)&local_8c,4);
    FUN_0041f970((undefined1 *)&local_82,2);
    uVar2 = *(uint *)(iVar1 + 0x34);
    *(uint *)(iVar1 + 0x34) = uVar2 | 0x1000;
    if ((local_91 & 2) != 0) {
      *(uint *)(iVar1 + 0x34) = uVar2 | 0x1020;
    }
    if ((local_8e & 8) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x34);
      *(uint *)(iVar1 + 0x34) = uVar2 | 1;
      if ((local_8e & 0xe0) == 0x20) {
        *(uint *)(iVar1 + 0x34) = uVar2 | 3;
      }
    }
    if ((local_8e & 1) != 0) {
      *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 4;
    }
    if ((local_90 & 1) != 0) {
      *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x10;
    }
    if ((local_8f & 1) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x38);
      *(uint *)(iVar1 + 0x38) = uVar2 | 0xc200000;
      *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x40;
      if ((local_8f & 0x20) != 0) {
        *(uint *)(iVar1 + 0x38) = uVar2 | 0xc220000;
      }
      if ((local_8f & 0x40) != 0) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x10000;
      }
      if ((local_8f & 0x80) != 0) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x40000;
      }
      if ((local_8f & 0x10) != 0) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x400000;
      }
      if ((local_8f & 2) != 0) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x2000000;
      }
      uVar2 = (local_8c & 0xffff) / 0xb0;
      if (0xb < uVar2) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x40;
      }
      if (7 < uVar2) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 0x10;
      }
      if (5 < uVar2) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 8;
      }
      if (3 < uVar2) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 4;
      }
      if (1 < uVar2) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 2;
      }
      if (uVar2 != 0) {
        *(uint *)(iVar1 + 0x38) = *(uint *)(iVar1 + 0x38) | 1;
      }
    }
    if ((local_91 & 1) != 0) {
      uVar2 = *(uint *)(iVar1 + 0x3c);
      *(uint *)(iVar1 + 0x3c) = uVar2 | 0x3b0000;
      if ((local_91 & 4) != 0) {
        *(uint *)(iVar1 + 0x3c) = uVar2 | 0x7b0000;
      }
      uVar2 = (local_82 & 0xffff) / 0xb0;
      if (0xb < uVar2) {
        *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) | 0x40;
      }
      if (7 < uVar2) {
        *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) | 0x10;
      }
      if (5 < uVar2) {
        *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) | 8;
      }
      if (3 < uVar2) {
        *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) | 4;
      }
      if (1 < uVar2) {
        *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) | 2;
      }
      if (uVar2 != 0) {
        *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) | 1;
      }
    }
    *(uint *)(iVar1 + 0x60) = local_88 & 0xffff;
  }
  lVar4 = cdr_GetDriveEntry((tPARAMETERS_DEVDES *)(param_1 + 4),local_7c);
  if ((-1 < lVar4) && (local_20 != 0)) {
    *(int *)(iVar1 + 0x40) = local_20;
  }
  return iVar3;
}


