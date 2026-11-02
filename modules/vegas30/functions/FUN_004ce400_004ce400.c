/* Module: vegas30.exe
   Function: FUN_004ce400
   Address: 004ce400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ce400(LPCVOID param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  HGLOBAL pvVar8;
  uint *puVar9;
  bool bVar10;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint *local_8;
  int local_4;
  
  piVar3 = param_2;
  iVar2 = (int)param_1;
  local_8 = *(uint **)((int)param_1 + 0x5d0);
  bVar10 = false;
  local_18 = 0;
  local_20 = 0;
  local_10 = 2;
  local_1c = 0xe;
  param_1 = (LPCVOID)0x0;
  if (param_3 == 0) {
    iVar7 = 0x51;
LAB_004ce475:
    FUN_005b8630(*(undefined4 *)(iVar2 + 0xbc8));
    FUN_005b4c90(iVar7,&param_1,&local_20);
    if (local_20 == 0) {
      FUN_004e9f70(*(undefined4 *)(iVar2 + 0xbc8),iVar7,0);
      FUN_004ea250(*(undefined4 *)(iVar2 + 0xbc8),piVar3,local_1c,0);
    }
    else {
      if (param_1 == (LPCVOID)0x0) goto LAB_004ce562;
      FUN_004e9f70(*(undefined4 *)(iVar2 + 0xbc8),iVar7,0);
      FUN_004ea250(*(undefined4 *)(iVar2 + 0xbc8),piVar3,local_1c,0);
      iVar7 = FUN_005b3ef0(local_20,param_1,piVar3[6]);
      bVar10 = iVar7 == 0;
    }
    local_18 = 1;
  }
  else {
    if (param_3 == 2) {
      iVar7 = 0x52;
      goto LAB_004ce475;
    }
    if (param_3 == 0x80) {
      iVar7 = 0x245;
      local_10 = 3;
      local_1c = 0x29;
      goto LAB_004ce475;
    }
    if ((param_3 < 0x200) || (0x2ff < param_3)) {
      if ((0xff < param_3) && (param_3 < 0x200)) {
        iVar7 = param_3 + -0x8b;
        goto LAB_004ce46d;
      }
    }
    else {
      iVar7 = param_3 + -0x1ab;
LAB_004ce46d:
      if (iVar7 != 0) goto LAB_004ce475;
    }
  }
LAB_004ce562:
  if ((*(byte *)(piVar3 + 4) & 0x10) != 0) {
    uVar5 = FUN_004ce720(piVar3,param_3);
    puVar9 = local_8;
    local_8[4] = uVar5;
    if (*(int *)(iVar2 + 0xbc8) == 0) {
      param_2 = (int *)0x0;
    }
    else {
      param_2 = (int *)FUN_005b87b0(*(int *)(iVar2 + 0xbc8));
    }
    local_14 = 0;
    local_c = 0;
    iVar7 = *param_2;
    local_4 = iVar7;
    if (0 < iVar7) {
      do {
        iVar4 = local_10;
        iVar1 = *(int *)(param_2[2] + local_c * 4);
        if ((*(int *)(iVar1 + 4) == local_10) && ((*(byte *)(iVar1 + 0x10) & 0x10) != 0)) {
          if (local_18 != 0) {
            if (local_20 == 0) {
              FUN_004ea250(*(undefined4 *)(iVar2 + 0xbc8),iVar1,local_1c,0);
            }
            else if ((param_1 != (LPCVOID)0x0) &&
                    (FUN_004ea250(*(undefined4 *)(iVar2 + 0xbc8),iVar1,local_1c,0), !bVar10)) {
              iVar7 = FUN_005b3ef0(local_20,param_1,*(undefined4 *)(iVar1 + 0x18));
              bVar10 = iVar7 == 0;
            }
          }
          uVar6 = FUN_004ce720(iVar1,param_3);
          if (iVar4 == 2) {
            *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x69c) + 0x54) + 0x114) = uVar6;
          }
          else if (iVar4 == 3) {
            *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x69c) + 0x54) + 0x20c) = uVar6;
          }
          local_14 = local_14 + 1;
          iVar7 = local_4;
        }
        local_c = local_c + 1;
        puVar9 = local_8;
      } while (local_c < iVar7);
    }
    *puVar9 = (uint)(1 < local_14) << 9 | *puVar9 & 0xfffffdff;
  }
  if (local_18 == 0) {
    return;
  }
  if (local_20 == 0) {
    uVar6 = *(undefined4 *)(iVar2 + 0xbc8);
  }
  else {
    if ((param_1 == (LPCVOID)0x0) ||
       ((!bVar10 && (iVar7 = FUN_005b3f30(local_20,param_1), iVar7 == 0)))) goto LAB_004ce6e1;
    uVar6 = *(undefined4 *)(iVar2 + 0xbc8);
  }
  FUN_004eb2b0(uVar6);
LAB_004ce6e1:
  FUN_004ea040(*(undefined4 *)(iVar2 + 0xbc8),0);
  if (param_1 != (LPCVOID)0x0) {
    pvVar8 = GlobalHandle(param_1);
    GlobalUnlock(pvVar8);
    pvVar8 = GlobalHandle(param_1);
    GlobalFree(pvVar8);
  }
  return;
}


