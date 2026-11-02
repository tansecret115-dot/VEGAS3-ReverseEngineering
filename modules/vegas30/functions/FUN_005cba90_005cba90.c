/* Module: vegas30.exe
   Function: FUN_005cba90
   Address: 005cba90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005cba90(undefined4 param_1,int param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  CLSID *pCVar4;
  int *piVar5;
  ulong *puVar6;
  int *piVar7;
  bool bVar8;
  int local_94;
  undefined1 local_90 [8];
  undefined *local_88;
  undefined *local_84;
  CLSID local_80;
  CLSID local_70;
  CLSID local_60;
  WCHAR local_50 [40];
  
  iVar3 = -0x7fff0001;
  FUN_005b83b0(param_1,1);
  if (*(int *)(param_2 + 0x28) != 0) {
    _SfList_Destroy_4(*(int *)(param_2 + 0x28));
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  switch(*(undefined4 *)(param_2 + 4)) {
  case 2:
    iVar3 = lstrlenA(&DAT_00648574);
    MultiByteToWideChar(0,1,&DAT_00648574,-1,local_50,iVar3 + 1);
    local_50[iVar3] = L'\0';
    CLSIDFromString(local_50,&local_60);
    iVar3 = lstrlenA(&DAT_0064859c);
    MultiByteToWideChar(0,1,&DAT_0064859c,-1,local_50,iVar3 + 1);
    local_50[iVar3] = L'\0';
    CLSIDFromString(local_50,&local_70);
    iVar3 = lstrlenA(&DAT_006485c4);
    MultiByteToWideChar(0,1,&DAT_006485c4,-1,local_50,iVar3 + 1);
    local_50[iVar3] = L'\0';
    CLSIDFromString(local_50,&local_80);
    iVar3 = lstrlenA(&DAT_006485ec);
    MultiByteToWideChar(0,1,&DAT_006485ec,-1,local_50,iVar3 + 1);
    local_50[iVar3] = L'\0';
    CLSIDFromString(local_50,(LPCLSID)local_90);
    puVar2 = (undefined4 *)(param_2 + 0x38);
    *puVar2 = 0x21;
    *(undefined4 *)(param_2 + 0x48) = DAT_0064a55c;
    *(undefined4 *)(param_2 + 0x3c) = DAT_00649410;
    *(undefined4 *)(param_2 + 0x22c) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x230) = DAT_0064a698;
    iVar3 = FUN_005cba40(param_2);
    if (-1 < iVar3) {
      iVar3 = 0x20;
      puVar1 = (uint *)(param_2 + 0x5c);
      do {
        iVar3 = iVar3 + -1;
        *puVar1 = *puVar1 & 0xfffffffe | 6;
        puVar1 = puVar1 + 2;
      } while (iVar3 != 0);
      iVar3 = 0x1a;
      puVar1 = (uint *)(param_2 + 0x15c);
      do {
        iVar3 = iVar3 + -1;
        *puVar1 = *puVar1 & 0xfffffff9 | 1;
        puVar1 = puVar1 + 2;
      } while (iVar3 != 0);
      *(undefined4 *)(param_2 + 0x244) = 0;
      *(undefined4 *)(param_2 + 0x240) = 0;
      FUN_005d13b0(puVar2);
      FUN_005d1520(puVar2);
      if (*(int *)(param_2 + 0x234) != 0) {
        iVar3 = 4;
        bVar8 = true;
        pCVar4 = &local_60;
        puVar6 = &DAT_0061a2b0;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = pCVar4->Data1 == *puVar6;
          pCVar4 = (CLSID *)&pCVar4->Data2;
          puVar6 = puVar6 + 1;
        } while (bVar8);
        if (!bVar8) {
          FUN_005d0e20(param_1,param_2,local_60.Data1,local_60._4_4_,local_60.Data4._0_4_,
                       local_60.Data4._4_4_);
        }
        iVar3 = 4;
        bVar8 = true;
        pCVar4 = &local_70;
        puVar6 = &DAT_0061a2b0;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = pCVar4->Data1 == *puVar6;
          pCVar4 = (CLSID *)&pCVar4->Data2;
          puVar6 = puVar6 + 1;
        } while (bVar8);
        if (!bVar8) {
          FUN_005d0e20(param_1,param_2,local_70.Data1,local_70._4_4_,local_70.Data4._0_4_,
                       local_70.Data4._4_4_);
        }
        iVar3 = 4;
        bVar8 = true;
        pCVar4 = &local_80;
        puVar6 = &DAT_0061a2b0;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = pCVar4->Data1 == *puVar6;
          pCVar4 = (CLSID *)&pCVar4->Data2;
          puVar6 = puVar6 + 1;
        } while (bVar8);
        if (!bVar8) {
          FUN_005d0e20(param_1,param_2,local_80.Data1,local_80._4_4_,local_80.Data4._0_4_,
                       local_80.Data4._4_4_);
        }
        iVar3 = 4;
        bVar8 = true;
        piVar5 = (int *)local_90;
        piVar7 = &DAT_0061a2b0;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = *piVar5 == *piVar7;
          piVar5 = piVar5 + 1;
          piVar7 = piVar7 + 1;
        } while (bVar8);
        if (!bVar8) {
          FUN_005d0e20(param_1,param_2,local_90._0_4_,local_90._4_4_,local_88,local_84);
        }
        FUN_005d2690(param_1,param_2);
      }
      iVar3 = 0;
    }
    break;
  case 3:
    *(undefined4 *)(param_2 + 0x38) = 0x22;
    *(undefined4 *)(param_2 + 0x48) = DAT_00648524;
    *(undefined4 *)(param_2 + 0x4c) = DAT_00648520;
    *(undefined4 *)(param_2 + 0x50) = DAT_0064851c;
    *(undefined4 *)(param_2 + 0x54) = DAT_00648528;
    *(undefined4 *)(param_2 + 0x58) = DAT_00648544;
    *(undefined4 *)(param_2 + 0x5c) = DAT_00648540;
    *(undefined4 *)(param_2 + 0x60) = DAT_0064853c;
    *(undefined4 *)(param_2 + 100) = DAT_00648548;
    *(undefined4 *)(param_2 + 0x68) = DAT_00648554;
    *(undefined4 *)(param_2 + 0x6c) = DAT_00648550;
    *(undefined4 *)(param_2 + 0x70) = DAT_0064854c;
    *(undefined4 *)(param_2 + 0x74) = DAT_00648558;
    *(undefined4 *)(param_2 + 0x7c) = 0;
    *(undefined4 *)(param_2 + 0x78) = 0;
    puVar2 = (undefined4 *)(param_2 + 0x80);
    for (iVar3 = 0x2e; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(param_2 + 0x80) = 0x42;
    bVar8 = DAT_0064add0 == -1;
    *(int *)(param_2 + 0x13c) = DAT_0064add0;
    if (bVar8) {
      _SfGuidFromString_8(&DAT_0064add4,param_2 + 0x144);
    }
    *(undefined4 *)(param_2 + 0x154) = 3;
    *(undefined4 *)(param_2 + 0x140) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x158) = 0x3f800000;
    iVar3 = FUN_005a24e0((undefined4 *)(param_2 + 0x7c),&DAT_0062a120,DAT_0064b50c,0xffffff9c,0);
    if (iVar3 != 0) {
      FUN_005a5060(iVar3,param_2,3,0xffffffff,0xffffffff);
    }
    local_90._0_4_ = &DAT_0064adfc;
    local_90._4_4_ = &DAT_0064ae24;
    local_88 = &DAT_0064ae4c;
    local_84 = &DAT_0064ae74;
    puVar2 = (undefined4 *)local_90;
    local_94 = 4;
    do {
      if (*(char *)*puVar2 != '\0') {
        _SfGuidFromString_8((char *)*puVar2,&local_80);
        iVar3 = 4;
        bVar8 = true;
        puVar6 = &DAT_0061a2b0;
        pCVar4 = &local_80;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar8 = *puVar6 == pCVar4->Data1;
          puVar6 = puVar6 + 1;
          pCVar4 = (CLSID *)&pCVar4->Data2;
        } while (bVar8);
        if ((!bVar8) &&
           (iVar3 = FUN_005a24e0(param_2 + 0x78,&local_80,DAT_0064b50c,0xffffff9c,0), iVar3 != 0)) {
          FUN_005a5060(iVar3,param_2,2,0xffffffff,0xffffffff);
        }
      }
      puVar2 = puVar2 + 1;
      local_94 = local_94 + -1;
    } while (local_94 != 0);
    iVar3 = 0;
    break;
  case 4:
    *(undefined4 *)(param_2 + 0x38) = 0x23;
    break;
  case 5:
    *(undefined4 *)(param_2 + 0x38) = 0x24;
  }
  FUN_005b84d0(param_1,1);
  return iVar3;
}


