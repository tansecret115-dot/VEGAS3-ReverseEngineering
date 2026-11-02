/* Module: vegas30.exe
   Function: FUN_005b1f90
   Address: 005b1f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005b1f90(float *param_1,int *param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  float fVar6;
  float local_7fc;
  float local_7f8;
  float local_7f4;
  undefined4 local_7f0 [253];
  int local_3fc;
  undefined4 local_3f8 [253];
  int local_4;
  
  iVar4 = 0;
  if (param_1[4] == 1.4013e-45) {
    iVar4 = *param_2;
    iVar2 = _SfList_ArrayForceItemCount_12(param_2,iVar4 + 1,0);
    if (iVar2 < 0) {
      return iVar2;
    }
    puVar3 = (undefined4 *)(param_2[1] * iVar4 + param_2[2]);
    puVar5 = puVar3;
    for (iVar2 = 0xfe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *param_4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar3[0xfe] = *param_5;
    puVar3[0xff] = param_5[1];
    puVar3[0x100] = param_5[2];
    uVar1 = puVar3[0x105];
    puVar3[0x101] = 100;
    puVar3[0x105] = uVar1 | 2;
    puVar3[0x103] = param_1[0x10a];
    puVar3[0x105] = uVar1 | 10;
    iVar2 = FUN_005b1d90(puVar3,param_5,param_1 + 5);
    if (-1 < iVar2) {
      return iVar2;
    }
    _SfList_ArrayForceItemCount_12(param_2,iVar4,0);
    return 0;
  }
  if (param_1[4] == 2.8026e-45) {
    iVar4 = FUN_005b1a90(param_1,param_4,param_5,param_3,param_6,param_7);
    return iVar4;
  }
  iVar2 = FUN_005b1150(param_1,param_1[3],param_4);
  if (iVar2 == 0) {
    puVar5 = local_3f8;
    for (iVar4 = 0xfe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *param_4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar5 = local_3f8;
    fVar6 = param_1[0x20e];
  }
  else if (iVar2 == 1) {
    puVar5 = local_7f0;
    for (iVar4 = 0xfe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *param_4;
      param_4 = param_4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar5 = local_7f0;
    fVar6 = param_1[0x20d];
  }
  else {
    if (iVar2 != 3) {
      return 0;
    }
    local_7fc = -*param_1;
    local_7f8 = -param_1[1];
    local_7f4 = -param_1[2];
    FUN_005b1000(local_3f8,param_4,param_1,param_1[3]);
    FUN_005b1000(local_7f0,param_4,&local_7fc,-param_1[3]);
    if ((2 < local_3fc) &&
       (iVar4 = FUN_005b1f90(param_1[0x20d],param_2,param_3,local_7f0,param_5,param_6,param_7),
       iVar4 < 0)) {
      return iVar4;
    }
    if (local_4 < 3) {
      return iVar4;
    }
    puVar5 = local_3f8;
    fVar6 = param_1[0x20e];
  }
  iVar4 = FUN_005b1f90(fVar6,param_2,param_3,puVar5,param_5,param_6,param_7);
  return iVar4;
}


