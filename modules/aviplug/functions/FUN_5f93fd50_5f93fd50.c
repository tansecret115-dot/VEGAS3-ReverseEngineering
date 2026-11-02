/* Module: aviplug.dll
   Function: FUN_5f93fd50
   Address: 5f93fd50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f93fd50(DWORD param_1)

{
  LPCVOID lpBuffer;
  DWORD DVar1;
  int iVar2;
  BOOL BVar3;
  code *pcVar4;
  code *pcVar5;
  uint unaff_ESI;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  LONG local_c;
  LONG local_8;
  LONG local_4;
  
  DVar1 = param_1;
  pcVar5 = SetFilePointer_exref;
  if (*(int *)(param_1 + 0x70) == 0) {
    iVar2 = FUN_5f93f1a0(param_1);
    pcVar5 = SetFilePointer_exref;
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = *(int *)(DVar1 + 0x10);
    uVar6 = ~(*(int *)(DVar1 + 0x90) - 1U) & *(int *)(DVar1 + 0x90) + 0xbU;
    iVar7 = *(int *)(DVar1 + 0x14);
    local_c = 0;
    SetFilePointer(*(HANDLE *)(DVar1 + 0x94),iVar7 - uVar6,&local_c,0);
    pcVar4 = WriteFile_exref;
    BVar3 = WriteFile(*(HANDLE *)(DVar1 + 0x94),(LPCVOID)((iVar2 - uVar6) + iVar7),uVar6,&param_1,
                      (LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      return -0x7ffb1ff7;
    }
    if (param_1 < uVar6) {
      return -0x7ffb1ff7;
    }
    lpBuffer = *(LPCVOID *)(DVar1 + 0x10);
    local_8 = 0;
    local_4 = 0;
    SetFilePointer(*(HANDLE *)(DVar1 + 0x94),0,&local_4,0);
    BVar3 = WriteFile(*(HANDLE *)(DVar1 + 0x94),lpBuffer,uVar6,&param_1,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      return -0x7ffb1ff7;
    }
    if (param_1 < uVar6) {
      return -0x7ffb1ff7;
    }
    uVar6 = *(int *)(DVar1 + 0x10) - *(int *)(DVar1 + 0x2c);
  }
  else {
    local_4 = *(LONG *)(param_1 + 0x84);
    uVar6 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x2c);
    local_8 = *(LONG *)(param_1 + 0x80);
    SetFilePointer(*(HANDLE *)(param_1 + 0x94),local_8,&local_4,0);
    pcVar4 = WriteFile_exref;
    BVar3 = WriteFile(*(HANDLE *)(DVar1 + 0x94),*(LPCVOID *)(DVar1 + 0x2c),uVar6,&param_1,
                      (LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      return -0x7ffb1ff7;
    }
    if (param_1 < uVar6) {
      return -0x7ffb1ff7;
    }
  }
  *(uint *)(*(int *)(DVar1 + 0x2c) + 4) = uVar6 - 8;
  *(int *)(*(int *)(DVar1 + 0x2c) + 0x10) = *(int *)(*(int *)(DVar1 + 0x2c) + 4) + -0xc;
  local_8 = *(undefined4 *)(DVar1 + 0x78);
  uVar8 = *(undefined4 *)(DVar1 + 0x94);
  local_4 = *(LONG *)(DVar1 + 0x7c);
  (*pcVar5)(uVar8,local_8,&local_4);
  iVar7 = 0;
  iVar2 = (*pcVar4)(*(undefined4 *)(DVar1 + 0x94),*(undefined4 *)(DVar1 + 0x2c),uVar6,&local_c);
  if ((iVar2 != 0) && (uVar6 <= unaff_ESI)) {
    uVar6 = *(uint *)(DVar1 + 0x78);
    iVar2 = *(int *)(DVar1 + 0x7c);
    *(uint *)(DVar1 + 0x80) = uVar6;
    *(int *)(DVar1 + 0x84) = iVar2;
    *(undefined4 *)(DVar1 + 0x70) = 1;
    *(uint *)(DVar1 + 0x88) = *(uint *)(DVar1 + 0x80) + 0x40000000;
    *(undefined4 *)(DVar1 + 0x30) = *(undefined4 *)(DVar1 + 0x2c);
    *(undefined4 *)(DVar1 + 0x28) = uVar8;
    *(uint *)(DVar1 + 0x78) = unaff_ESI + uVar6;
    *(uint *)(DVar1 + 0x7c) = iVar2 + (uint)CARRY4(unaff_ESI,uVar6);
    *(uint *)(DVar1 + 0x8c) = iVar2 + (uint)(0xbfffffff < *(uint *)(DVar1 + 0x80));
    return iVar7;
  }
  if (unaff_ESI != 0) {
    (*pcVar5)(*(undefined4 *)(DVar1 + 0x94),*(undefined4 *)(DVar1 + 0x80),&stack0xffffffd8,0);
    SetEndOfFile(*(HANDLE *)(DVar1 + 0x94));
  }
  return -0x7ffb1ff7;
}


