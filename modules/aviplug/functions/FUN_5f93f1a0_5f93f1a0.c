/* Module: aviplug.dll
   Function: FUN_5f93f1a0
   Address: 5f93f1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f93f1a0(DWORD param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  DWORD DVar5;
  uint uVar6;
  BOOL BVar7;
  uint nNumberOfBytesToWrite;
  LONG local_4;
  
  DVar5 = param_1;
  if ((*(uint *)(param_1 + 0x98) & 2) == 0) {
    return 0;
  }
  piVar1 = (int *)(param_1 + 0x34);
  uVar3 = *(uint *)(param_1 + 0x90);
  param_1 = 0;
  uVar4 = *(uint *)(*piVar1 + 4);
  uVar6 = uVar4 + 8;
  if (uVar3 != 0) {
    if (uVar3 < 3) {
      nNumberOfBytesToWrite = (uVar6 & 1) + uVar6;
      goto LAB_5f93f22e;
    }
    if (uVar3 == 4) {
      uVar6 = (uVar6 & 1) + uVar6;
      nNumberOfBytesToWrite = uVar6 + 3 & 0xfffffffc;
      if ((nNumberOfBytesToWrite != uVar6) && (nNumberOfBytesToWrite - uVar6 < 8)) {
        nNumberOfBytesToWrite = nNumberOfBytesToWrite + 8;
      }
      goto LAB_5f93f22e;
    }
  }
  uVar6 = (uVar6 & 1) + uVar6;
  nNumberOfBytesToWrite = uVar6 + (uVar3 - 1) & ~(uVar3 - 1);
  if ((nNumberOfBytesToWrite != uVar6) && (nNumberOfBytesToWrite - uVar6 < 8)) {
    nNumberOfBytesToWrite = nNumberOfBytesToWrite + uVar3;
  }
LAB_5f93f22e:
  if (nNumberOfBytesToWrite - uVar4 != 8) {
    puVar2 = (undefined4 *)((uVar4 & 1) + uVar4 + 8 + *piVar1);
    *puVar2 = 0x4b4e554a;
    puVar2[1] = (nNumberOfBytesToWrite - uVar4) + -0x10;
  }
  local_4 = *(LONG *)(DVar5 + 0x7c);
  SetFilePointer(*(HANDLE *)(DVar5 + 0x94),*(LONG *)(DVar5 + 0x78),&local_4,0);
  BVar7 = WriteFile(*(HANDLE *)(DVar5 + 0x94),*(LPCVOID *)(DVar5 + 0x34),nNumberOfBytesToWrite,
                    &param_1,(LPOVERLAPPED)0x0);
  if ((BVar7 != 0) && (nNumberOfBytesToWrite <= param_1)) {
    uVar6 = *(uint *)(DVar5 + 0x78);
    *(uint *)(DVar5 + 0x78) = uVar6 + param_1;
    *(uint *)(DVar5 + 0x7c) = *(int *)(DVar5 + 0x7c) + (uint)CARRY4(uVar6,param_1);
    *(DWORD *)(*(int *)(DVar5 + 0x10) + 4) = *(int *)(*(int *)(DVar5 + 0x10) + 4) + param_1;
    *(uint *)(*(int *)(DVar5 + 0x1c) + 0x14) = *(uint *)(*(int *)(DVar5 + 0x1c) + 0x14) | 0x10;
    *(uint *)(DVar5 + 0x98) = *(uint *)(DVar5 + 0x98) & 0xfffffffd | 1;
    return 0;
  }
  if (param_1 != 0) {
    local_4 = *(LONG *)(DVar5 + 0x7c);
    SetFilePointer(*(HANDLE *)(DVar5 + 0x94),*(LONG *)(DVar5 + 0x78),&local_4,0);
    SetEndOfFile(*(HANDLE *)(DVar5 + 0x94));
  }
  return 0x8004e009;
}


