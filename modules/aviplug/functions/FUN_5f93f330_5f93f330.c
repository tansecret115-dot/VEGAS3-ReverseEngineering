/* Module: aviplug.dll
   Function: FUN_5f93f330
   Address: 5f93f330
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_5f93f330(DWORD param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  BOOL BVar7;
  int iVar8;
  undefined4 *puVar9;
  uint local_14;
  LONG local_10;
  LONG local_c [3];
  
  DVar6 = param_1;
  puVar9 = (undefined4 *)(param_1 + 0x94);
  if ((HANDLE)*puVar9 == (HANDLE)0xffffffff) {
    return -0x7fff0001;
  }
  puVar2 = (uint *)(param_1 + 0x98);
  if (*puVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x70);
  param_1 = 0;
  if (*piVar1 == 0) {
    if (((*puVar2 & 2) != 0) && (param_1 = FUN_5f93f1a0(DVar6), (int)param_1 < 0)) {
      return param_1;
    }
  }
  else {
    local_c[0] = *(LONG *)(DVar6 + 0x84);
    local_10 = *(LONG *)(DVar6 + 0x80);
    iVar3 = *(int *)(DVar6 + 0x10);
    iVar4 = *(int *)(DVar6 + 0x2c);
    SetFilePointer((HANDLE)*puVar9,local_10,local_c,0);
    BVar7 = WriteFile(*(HANDLE *)(DVar6 + 0x94),*(LPCVOID *)(DVar6 + 0x2c),iVar3 - iVar4,&local_14,
                      (LPOVERLAPPED)0x0);
    if (BVar7 == 0) {
      return -0x7ffb1ff7;
    }
    if (local_14 < 0x18) {
      return -0x7ffb1ff7;
    }
  }
  if ((*(uint *)(DVar6 + 0x98) & 4) != 0) {
    iVar3 = **(int **)(DVar6 + 0x40);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      param_1 = FUN_5f93f0f0(DVar6,iVar3);
      if ((int)param_1 < 0) {
        return param_1;
      }
    }
    if ((int)param_1 < 0) {
      return param_1;
    }
    *(uint *)(DVar6 + 0x98) = *(uint *)(DVar6 + 0x98) & 0xfffffffb;
  }
  if ((*(uint *)(DVar6 + 0x98) & 1) == 0) {
    if (*(int *)(DVar6 + 0x24) == 0) {
      return param_1;
    }
    if (*(short *)(*(int *)(DVar6 + 0x24) + 8) != 0) {
      return param_1;
    }
  }
  puVar9 = (undefined4 *)0x0;
  iVar3 = *(int *)(*(int *)(DVar6 + 0x18) + 4);
  local_10 = 0;
  if ((*(int *)(DVar6 + 0x24) != 0) && (*(short *)(*(int *)(DVar6 + 0x24) + 8) == 0)) {
    *(int *)(*(int *)(DVar6 + 0x18) + 4) = iVar3 + -8;
    *(int *)(*(int *)(DVar6 + 0x18) + 4) =
         *(int *)(*(int *)(DVar6 + 0x18) + 4) - *(int *)(*(int *)(DVar6 + 0x24) + 4);
    **(undefined4 **)(DVar6 + 0x24) = 0x4b4e554a;
    iVar4 = *(int *)(DVar6 + 0x24);
    uVar5 = *(uint *)(iVar4 + 4);
    iVar8 = (uVar5 & 1) + uVar5;
    puVar9 = (undefined4 *)(iVar8 + 8 + iVar4);
    if (*(int *)(iVar8 + 8 + iVar4) == 0x4b4e554a) {
      *(uint *)(iVar4 + 4) = uVar5 + 8 + puVar9[1];
      local_10 = puVar9[1];
      *puVar9 = 0;
      puVar9[1] = 0;
    }
    else {
      puVar9 = (undefined4 *)0x0;
    }
  }
  uVar5 = *(uint *)(DVar6 + 0x14);
  local_c[1] = 0;
  local_c[2] = 0;
  SetFilePointer(*(HANDLE *)(DVar6 + 0x94),0,local_c + 2,0);
  BVar7 = WriteFile(*(HANDLE *)(DVar6 + 0x94),*(LPCVOID *)(DVar6 + 0x10),uVar5,&local_14,
                    (LPOVERLAPPED)0x0);
  piVar1 = *(int **)(DVar6 + 0x24);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x4b4e554a)) {
    *piVar1 = 0x584e4653;
    if (puVar9 != (undefined4 *)0x0) {
      *(int *)(*(int *)(DVar6 + 0x24) + 4) = (int)puVar9 - *(int *)(DVar6 + 0x24);
      *(int *)(*(int *)(DVar6 + 0x24) + 4) = *(int *)(*(int *)(DVar6 + 0x24) + 4) + -8;
      *puVar9 = 0x4b4e554a;
      puVar9[1] = local_10;
    }
    *(int *)(*(int *)(DVar6 + 0x18) + 4) = iVar3;
  }
  if ((BVar7 != 0) && (local_14 <= uVar5)) {
    *(uint *)(DVar6 + 0x98) = *(uint *)(DVar6 + 0x98) & 0xfffffffe;
    return param_1;
  }
  return -0x7ffb1ff7;
}


