/* Module: sfcd.cdd
   Function: FUN_00401f20
   Address: 00401f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401f20(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  HGLOBAL hMem;
  byte *pbVar7;
  byte *pbVar8;
  uint *puVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint local_8;
  
  iVar2 = *(int *)(param_1 + 0x160);
  if (param_2 == 0) {
    return 0x80004003;
  }
  *param_3 = 2;
  if (*(int *)(param_2 + 0x1d78) != 0) {
    *param_3 = 4;
  }
  uVar4 = FUN_0041f470(param_2);
  uVar12 = 0;
  *param_3 = *param_3 + uVar4;
  if (uVar4 != 0) {
    do {
      iVar5 = FUN_0041f490(param_2,uVar12);
      iVar6 = FUN_0041f3e0(iVar5);
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      iVar3 = *param_3;
      *param_3 = iVar3 + iVar6;
      if (*(int *)(iVar5 + 0x1c) != 0) {
        *param_3 = iVar3 + iVar6 + 2;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar4);
  }
  hMem = GlobalAlloc(0x42,*param_3 << 3);
  pbVar7 = GlobalLock(hMem);
  param_3[1] = (int)pbVar7;
  if (pbVar7 != (byte *)0x0) {
    if (*(int *)(param_2 + 0x1d78) != 0) {
      FUN_0041d380((undefined4 *)pbVar7,(undefined1 *)(param_2 + 0x1d7c));
      pbVar7 = pbVar7 + 0x10;
    }
    pbVar8 = (byte *)FUN_0041f490(param_2,0);
    FUN_0041d2f0(iVar2,pbVar7,*(uint *)(pbVar8 + 8) & 4);
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    FUN_00419230(0,pbVar7 + 5,pbVar7 + 6,pbVar7 + 7);
    if (*(int *)(iVar2 + 0x1cc) == 0) {
      pbVar7[3] = 1;
    }
    else if (*(char *)(iVar2 + 0x290) == '\x03') {
      pbVar7[3] = 0x24;
    }
    else {
      pbVar7[3] = 0x14;
    }
    pbVar7 = pbVar7 + 8;
    local_8 = 0;
    if (uVar4 != 0) {
      do {
        pbVar8 = (byte *)FUN_0041f490(param_2,local_8);
        if (*(int *)(pbVar8 + 0x1c) != 0) {
          FUN_0041d410(pbVar7,(byte)*(undefined4 *)pbVar8,pbVar8 + 0x20,*(uint *)(pbVar8 + 8));
          pbVar7 = pbVar7 + 0x10;
        }
        FUN_0041d2f0(iVar2,pbVar7,*(uint *)(pbVar8 + 8));
        if (local_8 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(uint *)(pbVar8 + 0x10);
        }
        FUN_00419230(uVar12,pbVar7 + 5,pbVar7 + 6,pbVar7 + 7);
        bVar1 = *pbVar8;
        pbVar7[2] = 0;
        pbVar7[1] = bVar1;
        if (*(int *)(pbVar8 + 0x10) == *(int *)(pbVar8 + 0x14)) {
          *param_3 = *param_3 + -1;
        }
        else {
          pbVar7 = pbVar7 + 8;
        }
        uVar12 = FUN_0041f3e0((int)pbVar8);
        if (uVar12 == 0) {
          FUN_0041d2f0(iVar2,pbVar7,*(uint *)(pbVar8 + 8));
          FUN_00419230(*(uint *)(pbVar8 + 0x14),pbVar7 + 5,pbVar7 + 6,pbVar7 + 7);
          bVar1 = *pbVar8;
          pbVar7[2] = 1;
          pbVar7[1] = bVar1;
          pbVar7 = pbVar7 + 8;
        }
        else {
          uVar10 = 0;
          if (uVar12 != 0) {
            pbVar11 = pbVar7 + 6;
            do {
              FUN_0041d2f0(iVar2,pbVar7,*(uint *)(pbVar8 + 8));
              puVar9 = (uint *)FUN_0041f3f0((int)pbVar8,uVar10);
              FUN_00419230(*puVar9,pbVar11 + -1,pbVar11,pbVar11 + 1);
              pbVar11[-5] = *pbVar8;
              pbVar11[-4] = (char)uVar10 + 1;
              pbVar7 = pbVar7 + 8;
              pbVar11 = pbVar11 + 8;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar12);
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 < uVar4);
    }
    FUN_0041d2f0(iVar2,pbVar7,*(uint *)(pbVar8 + 8) & 4);
    if (*(int *)(iVar2 + 0x1cc) == 0) {
      pbVar7[3] = 1;
    }
    else if (*(char *)(iVar2 + 0x290) == '\x03') {
      pbVar7[3] = 0x24;
    }
    else {
      pbVar7[3] = 0x14;
    }
    pbVar7[1] = 0xaa;
    pbVar7[2] = 1;
    FUN_00419230(*(uint *)(param_2 + 0x1d8c),pbVar7 + 5,pbVar7 + 6,pbVar7 + 7);
    return 0;
  }
  return 0x8007000e;
}


