/* Module: vegas30.exe
   Function: FUN_0044aa90
   Address: 0044aa90
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0044aa90(int param_1,uint param_2,uint param_3,uint *param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,int param_10)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_30;
  uint local_2c;
  uint local_28 [10];
  
  iVar7 = param_9;
  uVar9 = param_8;
  uVar2 = DAT_0064b138;
  if ((*(byte *)(param_1 + 0x78) & 0x20) != 0) {
    param_7 = 0;
    param_6 = 0;
    param_5 = 0;
  }
  puVar1 = *(uint **)(param_1 + 0x60);
  if (puVar1 == (uint *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = *puVar1;
  }
  if ((-1 < (int)param_3) && ((0 < (int)param_3 || (param_2 != 0)))) {
    if (((int)param_7 < 1) && ((int)param_7 < 0)) {
      param_6 = 0;
      param_7 = 0;
    }
    else if (((int)param_3 <= (int)param_7) &&
            (((int)param_3 < (int)param_7 || (param_2 < param_6)))) {
      param_6 = param_2;
      param_7 = param_3;
    }
  }
  if ((int)param_5 < 1) {
    uVar8 = param_6 - param_8;
    uVar3 = (param_7 - param_9) - (uint)(param_6 < param_8);
    uVar10 = -param_8;
    iVar4 = param_9 + (param_8 != 0);
    uVar5 = -iVar4;
    param_8 = uVar8;
    param_9 = uVar3;
    if ((-uVar3 == iVar4 || (int)uVar5 < (int)uVar3) &&
       (((int)uVar5 < (int)uVar3 || (uVar10 < uVar8)))) {
      param_8 = uVar10;
      param_9 = uVar5;
    }
  }
  else {
    puVar6 = (uint *)(puVar1[1] * (param_5 - 1) + puVar1[2]);
    param_8 = *puVar6;
    param_9 = puVar6[1];
  }
  if ((int)param_5 < (int)(local_30 - 1)) {
    puVar6 = (uint *)(puVar1[1] * (param_5 + 1) + puVar1[2]);
    uVar3 = *puVar6;
    local_2c = puVar6[1];
  }
  else {
    uVar5 = param_3 + iVar7 + (uint)CARRY4(param_2,uVar9);
    uVar3 = param_6 + uVar9;
    local_2c = param_7 + iVar7 + (uint)CARRY4(param_6,uVar9);
    if (((int)local_2c <= (int)uVar5) && (((int)local_2c < (int)uVar5 || (uVar3 < param_2 + uVar9)))
       ) {
      uVar3 = param_2 + uVar9;
      local_2c = uVar5;
    }
  }
  iVar4 = (param_9 - iVar7) - (uint)(param_8 < uVar9);
  if ((iVar4 <= (int)param_7) && ((iVar4 < (int)param_7 || (param_8 - uVar9 <= param_6)))) {
    iVar4 = local_2c + iVar7 + (uint)CARRY4(uVar3,uVar9);
    if (((int)param_7 <= iVar4) && (((int)param_7 < iVar4 || (param_6 <= uVar3 + uVar9)))) {
      FUN_005b83b0(DAT_0064b138,1);
      uVar5 = param_8 + uVar9;
      uVar8 = param_9 + iVar7 + (uint)CARRY4(param_8,uVar9);
      if (((int)uVar8 < (int)param_7) || (((int)uVar8 <= (int)param_7 && (uVar5 <= param_6)))) {
        uVar10 = (local_2c - iVar7) - (uint)(uVar3 < uVar9);
        uVar5 = param_6;
        uVar8 = param_7;
        if (((int)uVar10 <= (int)param_7) &&
           (((int)uVar10 < (int)param_7 || (uVar3 - uVar9 < param_6)))) {
          uVar5 = uVar3 - uVar9;
          uVar8 = uVar10;
        }
      }
      *param_4 = uVar5;
      param_4[1] = uVar8;
      goto LAB_0044acf3;
    }
  }
  FUN_005b83b0(DAT_0064b138,1);
  puVar6 = local_28;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar6 = *param_4;
    param_4 = param_4 + 1;
    puVar6 = puVar6 + 1;
  }
  local_28[0] = param_6;
  local_28[1] = param_7;
  _SfList_DeleteList_16(puVar1,param_5,1,1);
  if (puVar1 == (uint *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar1;
  }
  uVar3 = 0;
  if (0 < (int)uVar9) {
    puVar6 = (uint *)puVar1[2];
    do {
      if (((int)local_28[1] < (int)puVar6[1]) ||
         (((int)local_28[1] <= (int)puVar6[1] && (local_28[0] < *puVar6)))) {
        _SfList_InsertList_16(puVar1,uVar3,local_28,1);
        param_5 = uVar3;
        break;
      }
      uVar3 = uVar3 + 1;
      puVar6 = (uint *)((int)puVar6 + puVar1[1]);
    } while ((int)uVar3 < (int)uVar9);
  }
  if (uVar3 == uVar9) {
    _SfList_InsertList_16(puVar1,uVar9,local_28,1);
    param_5 = uVar9;
  }
LAB_0044acf3:
  FUN_005b84d0(uVar2,1);
  if (param_10 != 0) {
    if ((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0xa0) != 0)) {
      PostMessageA(*(HWND *)(*(int *)(DAT_0064762c + 0xa0) + 8),0x66f,(param_5 & 0xffff) << 5 | 1,
                   param_1);
    }
    DAT_0064767c = DAT_0064767c | 0x800;
  }
  return param_5;
}


