/* Module: sfcd.cdd
   Function: FUN_00418400
   Address: 00418400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00418400(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  HGLOBAL hMem;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint local_c;
  
  iVar2 = *(int *)(param_1 + 0x160);
  if (param_2 == 0) {
    return 0x80004003;
  }
  param_3[0] = 2;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (*(int *)(param_2 + 0x1d78) != 0) {
    param_3[0] = 4;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
  }
  uVar4 = FUN_0041f470(param_2);
  uVar11 = 0;
  *(uint *)param_3 = *(int *)param_3 + uVar4;
  pbVar5 = param_3;
  if (uVar4 != 0) {
    do {
      pbVar5 = (byte *)FUN_0041f490(param_2,uVar11);
      iVar6 = FUN_0041f3e0((int)pbVar5);
      if (iVar6 == 0) {
        iVar6 = 1;
      }
      iVar3 = *(int *)param_3;
      *(int *)param_3 = iVar3 + iVar6;
      if (*(int *)(pbVar5 + 0x1c) != 0) {
        *(int *)param_3 = iVar3 + iVar6 + 2;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  hMem = GlobalAlloc(0x42,*(int *)param_3 << 3);
  pbVar7 = GlobalLock(hMem);
  *(byte **)(param_3 + 4) = pbVar7;
  if (pbVar7 != (byte *)0x0) {
    if (*(int *)(param_2 + 0x1d78) != 0) {
      FUN_0041d380((undefined4 *)pbVar7,(undefined1 *)(param_2 + 0x1d7c));
      pbVar7 = pbVar7 + 0x10;
    }
    iVar6 = FUN_0041f490(param_2,0);
    FUN_0041d2f0(iVar2,pbVar7,*(uint *)(iVar6 + 8) & 4);
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    if (*(int *)(iVar2 + 0x1cc) == 0) {
      pbVar7[3] = 1;
    }
    else if (*(char *)(iVar2 + 0x290) == '\x03') {
      pbVar7[3] = 0x24;
    }
    else {
      pbVar7[3] = 0x14;
    }
    FUN_00419230(0,pbVar7 + 5,pbVar7 + 6,pbVar7 + 7);
    pbVar7 = pbVar7 + 8;
    local_c = 0;
    if (uVar4 != 0) {
      do {
        pbVar5 = (byte *)FUN_0041f490(param_2,local_c);
        if (*(int *)(pbVar5 + 0x1c) != 0) {
          FUN_0041d410(pbVar7,(byte)*(undefined4 *)pbVar5,pbVar5 + 0x20,*(uint *)(pbVar5 + 8));
          pbVar7 = pbVar7 + 0x10;
        }
        FUN_0041d2f0(iVar2,pbVar7,*(uint *)(pbVar5 + 8));
        if (local_c == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(uint *)(pbVar5 + 0x10);
        }
        FUN_00419230(uVar11,pbVar7 + 5,pbVar7 + 6,pbVar7 + 7);
        bVar1 = *pbVar5;
        pbVar7[2] = 0;
        pbVar7[1] = bVar1;
        if (*(int *)(pbVar5 + 0x10) == *(int *)(pbVar5 + 0x14)) {
          *(int *)param_3 = *(int *)param_3 + -1;
        }
        else {
          pbVar7 = pbVar7 + 8;
        }
        uVar11 = FUN_0041f3e0((int)pbVar5);
        if (uVar11 == 0) {
          FUN_0041d2f0(iVar2,pbVar7,*(uint *)(pbVar5 + 8));
          FUN_00419230(*(uint *)(pbVar5 + 0x14),pbVar7 + 5,pbVar7 + 6,pbVar7 + 7);
          bVar1 = *pbVar5;
          pbVar7[2] = 1;
          pbVar7[1] = bVar1;
          pbVar7 = pbVar7 + 8;
        }
        else {
          uVar9 = 0;
          if (uVar11 != 0) {
            pbVar10 = pbVar7 + 6;
            do {
              puVar8 = (uint *)FUN_0041f3f0((int)pbVar5,uVar9);
              FUN_0041d2f0(iVar2,pbVar7,*(uint *)(pbVar5 + 8));
              FUN_00419230(*puVar8,pbVar10 + -1,pbVar10,pbVar10 + 1);
              pbVar10[-5] = *pbVar5;
              pbVar10[-4] = (char)uVar9 + 1;
              pbVar7 = pbVar7 + 8;
              pbVar10 = pbVar10 + 8;
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar11);
          }
        }
        local_c = local_c + 1;
      } while (local_c < uVar4);
    }
    FUN_0041d2f0(iVar2,pbVar7,*(uint *)(pbVar5 + -0x44) & 4);
    pbVar7[1] = 0xaa;
    pbVar7[2] = 1;
    if (*(int *)(iVar2 + 0x1cc) == 0) {
      pbVar7[3] = 1;
    }
    else if (*(char *)(iVar2 + 0x290) == '\x03') {
      pbVar7[3] = 0x24;
    }
    else {
      pbVar7[3] = 0x14;
    }
    FUN_00419230(*(uint *)(param_2 + 0x1d8c),pbVar7 + 5,pbVar7 + 6,pbVar7 + 7);
    return 0;
  }
  return 0x8007000e;
}


