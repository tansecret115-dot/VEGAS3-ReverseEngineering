/* Module: vegas30.exe
   Function: FUN_005b9320
   Address: 005b9320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b9320(uint param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 local_c;
  uint local_8;
  undefined4 local_4;
  
  uVar4 = param_1;
  puVar1 = (undefined4 *)(param_1 + 0x1dc);
  iVar5 = _SfList_CreateExZ_32(puVar1,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  if (iVar5 < 0) {
    return;
  }
  iVar5 = _SfList_CreateExZ_32(uVar4 + 0x1e0,4,0xffffffff,0xffffffff,0x40000000,0,0,0);
  if (iVar5 < 0) {
    return;
  }
  iVar5 = _SfList_CreateExZ_32(uVar4 + 0x20c,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
  if (iVar5 < 0) {
    *puVar1 = 0;
    return;
  }
  iVar5 = _SfList_CreateExZ_32
                    ((undefined4 *)(uVar4 + 0x210),4,0xffffffff,0xffffffff,0x40000002,0,0,0);
  if (iVar5 < 0) {
    *(undefined4 *)(uVar4 + 0x210) = 0;
    return;
  }
  iVar5 = _SfList_CreateExZ_32
                    ((undefined4 *)(uVar4 + 0x214),4,0xffffffff,0xffffffff,0x40000002,0,0,0);
  if (iVar5 < 0) {
    *(undefined4 *)(uVar4 + 0x214) = 0;
    return;
  }
  iVar5 = _SfList_CreateExZ_32
                    ((undefined4 *)(uVar4 + 0x33c),4,0xffffffff,0xffffffff,0x40000002,0,0,0);
  if (iVar5 < 0) {
    *(undefined4 *)(uVar4 + 0x33c) = 0;
    return;
  }
  iVar5 = FUN_005d9780(uVar4);
  if (iVar5 < 0) {
    return;
  }
  piVar2 = (int *)(uVar4 + 0x1d8);
  iVar5 = FUN_005ce730(piVar2,uVar4,3,0,0xffffffff,"Video Ruler");
  if (-1 < iVar5) {
    *(undefined4 *)(*piVar2 + 0x18) = 0x80000000;
    *(undefined4 *)(*piVar2 + 0x14) = 0x80000000;
  }
  if (DAT_0064b4e4 == 0) {
    iVar5 = FUN_00601ab0(&local_c,&param_1,1);
    if (iVar5 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar6 = (param_1 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar6) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_c;
        DAT_0064b4e4 = uVar6;
      }
    }
  }
  if (0x20 < (int)DAT_0064b4e4) {
    if (DAT_0064b4e0 == 0) {
      iVar5 = FUN_00601ab0(&local_4,&local_8,1);
      if (iVar5 < 0) {
        DAT_0064b4f0 = 1;
      }
      else if ((int)DAT_0064b4e0 <= (int)(local_8 & 0xff)) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_4;
        DAT_0064b4e0 = local_8 & 0xff;
      }
    }
    if (0x20 < (int)DAT_0064b4e0) goto LAB_005b9595;
  }
  for (iVar5 = FUN_005b87c0(2); iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_005ce780(&param_1,uVar4,2,0xffffffff,0);
  }
  iVar5 = FUN_005b87c0(3);
  bVar3 = false;
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar7 = "Video Overlay";
    if (!bVar3) {
      pcVar7 = "Video";
    }
    FUN_005ce780(&param_1,uVar4,3,0,pcVar7);
    bVar3 = true;
  }
LAB_005b9595:
  FUN_00540c30(uVar4);
  return;
}


