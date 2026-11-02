/* Module: aviplug.dll
   Function: FUN_5f940560
   Address: 5f940560
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f940560(uint param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6,
                undefined4 *param_7)

{
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  DWORD local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  LONG local_8;
  int local_4;
  
  uVar1 = param_1;
  if (*(int *)(param_1 + 0x94) == -1) {
    return -0x7fff0001;
  }
  if (((int)param_2 < 0) || (*(uint *)(*(int *)(param_1 + 0x1c) + 0x20) <= param_2)) {
    return -0x7ff8ffa9;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0xffffffff;
    param_7[1] = 0xffffffff;
  }
  local_1c = 0;
  piVar9 = (int *)(param_5 + -8);
  if ((*piVar9 == 0x6c636f6c) && (*(int *)(param_1 + 0x50) != -1)) {
    return -0x7fff0001;
  }
  local_c = *(int *)(param_5 + -4);
  local_10 = *piVar9;
  uVar5 = *(uint *)(param_1 + 0x90);
  piVar8 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) * param_2 +
                  *(int *)(*(int *)(param_1 + 0x40) + 8));
  uVar6 = param_6 + 8;
  if (uVar5 == 0) {
LAB_5f94063b:
    uVar6 = (uVar6 & 1) + uVar6;
    param_1 = uVar6 + (uVar5 - 1) & ~(uVar5 - 1);
    if ((param_1 != uVar6) && (param_1 - uVar6 < 8)) {
      param_1 = param_1 + uVar5;
    }
  }
  else if (uVar5 < 3) {
    param_1 = (uVar6 & 1) + uVar6;
  }
  else {
    if (uVar5 != 4) goto LAB_5f94063b;
    uVar6 = (uVar6 & 1) + uVar6;
    param_1 = uVar6 + 3 & 0xfffffffc;
    if ((param_1 != uVar6) && (param_1 - uVar6 < 8)) {
      param_1 = param_1 + 8;
    }
  }
  local_14 = 0;
  uVar6 = (*(int *)(*(int *)(uVar1 + 0x34) + 4) + 0x17 + uVar5 & ~(uVar5 - 1)) + param_1;
  if (*(int *)(uVar1 + 8) != 0) {
    if (*(int *)(piVar8[5] + 0xc) != piVar8[8]) {
      uVar4 = *(uint *)(uVar1 + 0x78) - piVar8[10];
      iVar7 = (*(int *)(uVar1 + 0x7c) - piVar8[0xb]) -
              (uint)(*(uint *)(uVar1 + 0x78) < (uint)piVar8[10]);
      uVar5 = (uint)CARRY4(uVar4,uVar6);
      local_4 = iVar7 + uVar5;
      if ((local_4 < 0) || ((local_4 == 0 || SCARRY4(iVar7,uVar5) && (uVar4 + uVar6 < 0x80000001))))
      goto LAB_5f9406be;
    }
    uVar6 = uVar6 + 0x7e00;
    local_14 = 1;
  }
LAB_5f9406be:
  iVar7 = *(int *)(uVar1 + 0x7c) + (uint)CARRY4(uVar6,*(uint *)(uVar1 + 0x78));
  local_18 = piVar9;
  if ((*(int *)(uVar1 + 0x8c) <= iVar7) &&
     ((*(int *)(uVar1 + 0x8c) < iVar7 ||
      (*(uint *)(uVar1 + 0x88) <= uVar6 + *(uint *)(uVar1 + 0x78))))) {
    if (*(int *)(uVar1 + 8) == 0) {
      param_5 = -0x7ffb1fc6;
      iVar7 = param_5;
      goto LAB_5f940926;
    }
    iVar7 = FUN_5f93fd50(uVar1);
    if (iVar7 < 0) goto LAB_5f940926;
  }
  if (((local_14 == 0) ||
      ((iVar7 = FUN_5f93f0f0(uVar1,param_2), -1 < iVar7 &&
       (iVar7 = FUN_5f93f580(uVar1,param_2), -1 < iVar7)))) &&
     (iVar7 = FUN_5f93ffa0(uVar1,1), -1 < iVar7)) {
    if (param_4 == 0) {
      local_14 = piVar8[0xe];
    }
    else {
      local_14 = piVar8[0xd];
    }
    *piVar9 = local_14;
    *(uint *)(param_5 + -4) = param_6;
    iVar2 = (param_1 - (param_6 & 1)) - param_6;
    if (7 < iVar2 - 8U) {
      uVar6 = iVar2 - 0x10;
      puVar10 = (undefined4 *)((local_18[1] & 1U) + local_18[1] + 8 + (int)local_18);
      *puVar10 = 0x4b4e554a;
      puVar10[1] = uVar6;
      puVar10 = puVar10 + 2;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = 0;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
    local_8 = *(LONG *)(uVar1 + 0x78);
    local_4 = *(LONG *)(uVar1 + 0x7c);
    SetFilePointer(*(HANDLE *)(uVar1 + 0x94),local_8,&local_4,0);
    BVar3 = WriteFile(*(HANDLE *)(uVar1 + 0x94),local_18,param_1,&local_1c,(LPOVERLAPPED)0x0);
    if ((BVar3 == 0) || (local_1c < param_1)) {
      if (local_1c != 0) {
        local_8 = *(LONG *)(uVar1 + 0x78);
        local_4 = *(LONG *)(uVar1 + 0x7c);
        SetFilePointer(*(HANDLE *)(uVar1 + 0x94),local_8,&local_4,0);
        SetEndOfFile(*(HANDLE *)(uVar1 + 0x94));
      }
      param_5 = -0x7ffb1ff7;
      piVar9 = local_18;
      iVar7 = param_5;
    }
    else {
      *(DWORD *)(*(int *)(uVar1 + 0x30) + 4) = *(int *)(*(int *)(uVar1 + 0x30) + 4) + local_1c;
      *(DWORD *)(*(int *)(uVar1 + 0x28) + 4) = *(int *)(*(int *)(uVar1 + 0x28) + 4) + local_1c;
      if ((*(int *)(uVar1 + 0x70) == 0) || (*(int *)(uVar1 + 0xc) == 0)) {
        *(int *)(*piVar8 + 0x28) = *(int *)(*piVar8 + 0x28) + param_3;
      }
      uVar5 = *(uint *)(*piVar8 + 0x2c);
      uVar6 = param_6 + 8 + (param_6 & 1);
      if (uVar6 < uVar5) {
        uVar6 = uVar5;
      }
      *(uint *)(*piVar8 + 0x2c) = uVar6;
      if (param_2 == *(uint *)(uVar1 + 0x44)) {
        if (*(int *)(uVar1 + 8) != 0) {
          piVar9 = (int *)(*(int *)(uVar1 + 0x20) + 8);
          *piVar9 = *piVar9 + param_3;
        }
        if (*(int *)(uVar1 + 0x70) == 0) {
          piVar9 = (int *)(*(int *)(uVar1 + 0x1c) + 0x18);
          *piVar9 = *piVar9 + param_3;
        }
        *(uint *)(*(int *)(uVar1 + 0x1c) + 0x24) = uVar6;
      }
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = *(undefined4 *)(uVar1 + 0x78);
        param_7[1] = *(undefined4 *)(uVar1 + 0x7c);
      }
      if (*(int *)(uVar1 + 8) != 0) {
        FUN_5f940070(uVar1,param_2,param_3,param_6,param_4);
      }
      if (*(int *)(uVar1 + 0x70) == 0) {
        FUN_5f940130(uVar1,local_14,param_6,param_4,0);
      }
      uVar6 = *(uint *)(uVar1 + 0x78);
      *(uint *)(uVar1 + 0x78) = uVar6 + local_1c;
      *(uint *)(uVar1 + 0x7c) = *(int *)(uVar1 + 0x7c) + (uint)CARRY4(uVar6,local_1c);
      *(uint *)(uVar1 + 0x98) = *(uint *)(uVar1 + 0x98) | 1;
      piVar9 = local_18;
    }
  }
LAB_5f940926:
  param_5 = iVar7;
  *piVar9 = local_10;
  piVar9[1] = local_c;
  return param_5;
}


