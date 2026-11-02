/* Module: sfcd.cdd
   Function: FUN_0040dc40
   Address: 0040dc40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040dc40(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  HGLOBAL hMem;
  byte *pbVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint local_c;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  *param_3 = 2;
  uVar1 = FUN_0041f470(param_2);
  uVar7 = 0;
  *param_3 = *param_3 + uVar1;
  if (uVar1 != 0) {
    do {
      iVar2 = FUN_0041f490(param_2,uVar7);
      iVar2 = FUN_0041f3e0(iVar2);
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      uVar7 = uVar7 + 1;
      *param_3 = *param_3 + iVar2;
    } while (uVar7 < uVar1);
  }
  hMem = GlobalAlloc(0x42,*param_3 << 3);
  pbVar3 = GlobalLock(hMem);
  param_3[1] = (int)pbVar3;
  if (pbVar3 != (byte *)0x0) {
    FUN_0040d930(param_1,pbVar3,0);
    pbVar3[3] = pbVar3[3] - 1;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    FUN_00419230(0,pbVar3 + 5,pbVar3 + 6,pbVar3 + 7);
    pbVar3 = pbVar3 + 8;
    local_c = 0;
    if (uVar1 != 0) {
      do {
        puVar4 = (uint *)FUN_0041f490(param_2,local_c);
        FUN_0040d930(param_1,pbVar3,puVar4[2]);
        if (local_c == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = puVar4[4];
        }
        FUN_00419230(uVar7,pbVar3 + 5,pbVar3 + 6,pbVar3 + 7);
        FUN_0041f150(pbVar3 + 1,*puVar4);
        pbVar3[2] = 0;
        if (puVar4[4] == puVar4[5]) {
          *param_3 = *param_3 + -1;
        }
        else {
          pbVar3 = pbVar3 + 8;
        }
        uVar7 = FUN_0041f3e0((int)puVar4);
        if (uVar7 == 0) {
          FUN_0040d930(param_1,pbVar3,puVar4[2]);
          FUN_00419230(puVar4[5],pbVar3 + 5,pbVar3 + 6,pbVar3 + 7);
          FUN_0041f150(pbVar3 + 1,*puVar4);
          pbVar3[2] = 1;
          pbVar3 = pbVar3 + 8;
        }
        else {
          uVar6 = 0;
          if (uVar7 != 0) {
            pbVar8 = pbVar3 + 6;
            do {
              FUN_0040d930(param_1,pbVar3,puVar4[2]);
              puVar5 = (uint *)FUN_0041f3f0((int)puVar4,uVar6);
              FUN_00419230(*puVar5,pbVar8 + -1,pbVar8,pbVar8 + 1);
              FUN_0041f150(pbVar8 + -5,*puVar4);
              uVar6 = uVar6 + 1;
              FUN_0041f150(pbVar8 + -4,uVar6);
              pbVar3 = pbVar3 + 8;
              pbVar8 = pbVar8 + 8;
            } while (uVar6 < uVar7);
          }
        }
        local_c = local_c + 1;
      } while (local_c < uVar1);
    }
    FUN_0040d930(param_1,pbVar3,0);
    pbVar3[1] = 0xaa;
    pbVar3[2] = 1;
    pbVar3[3] = pbVar3[3] - 1;
    FUN_00419230(*(uint *)(param_2 + 0x1d8c),pbVar3 + 5,pbVar3 + 6,pbVar3 + 7);
    return 0;
  }
  return 0x8007000e;
}


