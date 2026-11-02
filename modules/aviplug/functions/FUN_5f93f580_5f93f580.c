/* Module: aviplug.dll
   Function: FUN_5f93f580
   Address: 5f93f580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f93f580(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  DWORD local_c;
  DWORD local_8;
  DWORD local_4;
  
  uVar2 = param_1;
  iVar7 = *(int *)(*(int *)(param_1 + 0x40) + 8);
  iVar8 = *(int *)(*(int *)(param_1 + 0x40) + 4) * param_2;
  iVar1 = *(int *)(iVar8 + 0x14 + iVar7);
  iVar8 = iVar8 + iVar7;
  uVar6 = (uint)*(ushort *)(iVar1 + 8) * *(int *)(iVar1 + 0xc);
  if ((uVar6 & 0x3fffffff) != 0) {
    puVar9 = (undefined4 *)(iVar1 + 0x20);
    for (uVar6 = uVar6 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
  }
  *(undefined4 *)(*(int *)(iVar8 + 0x14) + 0xc) = 0;
  iVar7 = *(int *)(iVar8 + 0x14);
  *(undefined4 *)(iVar7 + 0x14) = 0;
  *(undefined4 *)(iVar7 + 0x18) = 0;
  *(undefined4 *)(iVar8 + 0x28) = 0;
  *(undefined4 *)(iVar8 + 0x2c) = 0;
  local_c = *(DWORD *)(param_1 + 0x7c);
  DVar3 = SetFilePointer(*(HANDLE *)(param_1 + 0x94),*(LONG *)(param_1 + 0x78),(PLONG)&local_c,0);
  BVar4 = WriteFile(*(HANDLE *)(uVar2 + 0x94),*(LPCVOID *)(iVar8 + 0x14),*(DWORD *)(iVar8 + 0x18),
                    &param_1,(LPOVERLAPPED)0x0);
  if ((BVar4 != 0) && (*(uint *)(iVar8 + 0x18) <= param_1)) {
    uVar6 = *(uint *)(uVar2 + 0x78);
    *(uint *)(uVar2 + 0x78) = uVar6 + param_1;
    *(uint *)(uVar2 + 0x7c) = *(int *)(uVar2 + 0x7c) + (uint)CARRY4(uVar6,param_1);
    *(uint *)(*(int *)(uVar2 + 0x30) + 4) = *(int *)(*(int *)(uVar2 + 0x30) + 4) + param_1;
    *(uint *)(*(int *)(uVar2 + 0x28) + 4) = *(int *)(*(int *)(uVar2 + 0x28) + 4) + param_1;
    *(DWORD *)(iVar8 + 0x28) = DVar3;
    *(DWORD *)(iVar8 + 0x2c) = local_c;
    pDVar5 = (DWORD *)((*(int *)(*(int *)(iVar8 + 0xc) + 0xc) + 2) * 0x10 + *(int *)(iVar8 + 0xc));
    *pDVar5 = DVar3;
    pDVar5[1] = local_c;
    DVar3 = *(DWORD *)(iVar8 + 0x18);
    pDVar5[3] = 0;
    pDVar5[2] = DVar3;
    *(int *)(*(int *)(iVar8 + 0xc) + 0xc) = *(int *)(*(int *)(iVar8 + 0xc) + 0xc) + 1;
    *(uint *)(uVar2 + 0x98) = *(uint *)(uVar2 + 0x98) | 1;
    return 0;
  }
  if (param_1 != 0) {
    local_4 = local_c;
    local_8 = DVar3;
    SetFilePointer(*(HANDLE *)(uVar2 + 0x94),DVar3,(PLONG)&local_4,0);
    SetEndOfFile(*(HANDLE *)(uVar2 + 0x94));
  }
  return 0x8004e009;
}


