/* Module: sfcd.cdd
   Function: FUN_0040bb20
   Address: 0040bb20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040bb20(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  HGLOBAL hMem;
  byte *pbVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint local_8;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  *param_2 = 2;
  if (*(int *)(param_1 + 0x1d78) != 0) {
    *param_2 = 4;
  }
  uVar2 = FUN_0041f470(param_1);
  uVar8 = 0;
  *param_2 = *param_2 + uVar2;
  if (uVar2 != 0) {
    do {
      iVar3 = FUN_0041f490(param_1,uVar8);
      iVar4 = FUN_0041f3e0(iVar3);
      if (iVar4 == 0) {
        iVar4 = 1;
      }
      iVar1 = *param_2;
      *param_2 = iVar1 + iVar4;
      if (*(int *)(iVar3 + 0x1c) != 0) {
        *param_2 = iVar1 + iVar4 + 2;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  hMem = GlobalAlloc(0x42,*param_2 << 3);
  pbVar5 = GlobalLock(hMem);
  param_2[1] = (int)pbVar5;
  if (pbVar5 != (byte *)0x0) {
    if (*(int *)(param_1 + 0x1d78) != 0) {
      FUN_0040b9c0((undefined4 *)pbVar5,(undefined1 *)(param_1 + 0x1d7c));
      pbVar5 = pbVar5 + 0x10;
    }
    puVar6 = (uint *)FUN_0041f490(param_1,0);
    FUN_0040b950(pbVar5,puVar6[2] & 4);
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    FUN_00419230(0,pbVar5 + 5,pbVar5 + 6,pbVar5 + 7);
    pbVar5 = pbVar5 + 8;
    local_8 = 0;
    if (uVar2 != 0) {
      do {
        puVar6 = (uint *)FUN_0041f490(param_1,local_8);
        pbVar10 = pbVar5;
        if (puVar6[7] != 0) {
          FUN_0040ba50(pbVar5,*puVar6,(byte *)(puVar6 + 8),puVar6[2]);
          pbVar10 = pbVar5 + 0x10;
        }
        FUN_0040b950(pbVar10,puVar6[2]);
        if (local_8 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = puVar6[4];
        }
        FUN_00419230(uVar8,pbVar10 + 5,pbVar10 + 6,pbVar10 + 7);
        FUN_0041f150(pbVar10 + 1,*puVar6);
        pbVar10[2] = 0;
        pbVar5 = pbVar10 + 8;
        uVar8 = FUN_0041f3e0((int)puVar6);
        if (uVar8 == 0) {
          FUN_0040b950(pbVar5,puVar6[2]);
          FUN_00419230(puVar6[5],pbVar10 + 0xd,pbVar10 + 0xe,pbVar10 + 0xf);
          FUN_0041f150(pbVar10 + 9,*puVar6);
          pbVar10[10] = 1;
          pbVar5 = pbVar10 + 0x10;
        }
        else {
          uVar9 = 0;
          if (uVar8 != 0) {
            pbVar10 = pbVar10 + 0xe;
            do {
              FUN_0040b950(pbVar5,puVar6[2]);
              puVar7 = (uint *)FUN_0041f3f0((int)puVar6,uVar9);
              FUN_00419230(*puVar7,pbVar10 + -1,pbVar10,pbVar10 + 1);
              FUN_0041f150(pbVar10 + -5,*puVar6);
              uVar9 = uVar9 + 1;
              FUN_0041f150(pbVar10 + -4,uVar9);
              pbVar5 = pbVar5 + 8;
              pbVar10 = pbVar10 + 8;
            } while (uVar9 < uVar8);
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 < uVar2);
    }
    FUN_0040b950(pbVar5,puVar6[-0x11] & 4);
    pbVar5[1] = 0xaa;
    pbVar5[2] = 1;
    FUN_00419230(*(uint *)(param_1 + 0x1d8c),pbVar5 + 5,pbVar5 + 6,pbVar5 + 7);
    return 0;
  }
  return 0x8007000e;
}


