/* Module: sfcd.cdd
   Function: FUN_0040fb70
   Address: 0040fb70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040fb70(int param_1,int param_2,int *param_3)

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
  uint local_c;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  *param_3 = 2;
  if (*(int *)(param_2 + 0x1d78) != 0) {
    *param_3 = 4;
  }
  uVar2 = FUN_0041f470(param_2);
  uVar9 = 0;
  *param_3 = *param_3 + uVar2;
  if (uVar2 != 0) {
    do {
      iVar3 = FUN_0041f490(param_2,uVar9);
      iVar4 = FUN_0041f3e0(iVar3);
      if (iVar4 == 0) {
        iVar4 = 1;
      }
      iVar1 = *param_3;
      *param_3 = iVar1 + iVar4;
      if (*(int *)(iVar3 + 0x1c) != 0) {
        *param_3 = iVar1 + iVar4 + 2;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  hMem = GlobalAlloc(0x40,*param_3 << 3);
  pbVar5 = GlobalLock(hMem);
  param_3[1] = (int)pbVar5;
  if (pbVar5 != (byte *)0x0) {
    if (*(int *)(param_2 + 0x1d78) != 0) {
      FUN_0040fa10((undefined4 *)pbVar5,(undefined1 *)(param_2 + 0x1d7c));
      pbVar5 = pbVar5 + 0x10;
    }
    FUN_0040f990(param_1,pbVar5,0);
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    FUN_00419230(0,pbVar5 + 5,pbVar5 + 6,pbVar5 + 7);
    pbVar5 = pbVar5 + 8;
    local_c = 0;
    if (uVar2 != 0) {
      do {
        puVar6 = (uint *)FUN_0041f490(param_2,local_c);
        pbVar10 = pbVar5;
        if (puVar6[7] != 0) {
          FUN_0040faa0(pbVar5,*puVar6,(byte *)(puVar6 + 8),puVar6[2]);
          pbVar10 = pbVar5 + 0x10;
        }
        FUN_0040f990(param_1,pbVar10,puVar6[2]);
        if (local_c == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = puVar6[4];
        }
        FUN_00419230(uVar9,pbVar10 + 5,pbVar10 + 6,pbVar10 + 7);
        FUN_0041f150(pbVar10 + 1,*puVar6);
        pbVar10[2] = 0;
        pbVar5 = pbVar10 + 8;
        if (puVar6[4] == puVar6[5]) {
          *param_3 = *param_3 + -1;
          pbVar5 = pbVar10;
        }
        uVar9 = FUN_0041f3e0((int)puVar6);
        if (uVar9 == 0) {
          FUN_0040f990(param_1,pbVar5,puVar6[2]);
          FUN_00419230(puVar6[5],pbVar5 + 5,pbVar5 + 6,pbVar5 + 7);
          FUN_0041f150(pbVar5 + 1,*puVar6);
          pbVar5[2] = 1;
          pbVar5 = pbVar5 + 8;
        }
        else {
          uVar8 = 0;
          if (uVar9 != 0) {
            pbVar10 = pbVar5 + 6;
            do {
              FUN_0040f990(param_1,pbVar5,puVar6[2]);
              puVar7 = (uint *)FUN_0041f3f0((int)puVar6,uVar8);
              FUN_00419230(*puVar7,pbVar10 + -1,pbVar10,pbVar10 + 1);
              FUN_0041f150(pbVar10 + -5,*puVar6);
              uVar8 = uVar8 + 1;
              FUN_0041f150(pbVar10 + -4,uVar8);
              pbVar5 = pbVar5 + 8;
              pbVar10 = pbVar10 + 8;
            } while (uVar8 < uVar9);
          }
        }
        local_c = local_c + 1;
      } while (local_c < uVar2);
    }
    FUN_0040f990(param_1,pbVar5,0);
    pbVar5[1] = 0xaa;
    pbVar5[2] = 1;
    FUN_00419230(*(uint *)(param_2 + 0x1d8c),pbVar5 + 5,pbVar5 + 6,pbVar5 + 7);
    return 0;
  }
  return 0x8007000e;
}


