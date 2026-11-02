/* Module: vegas30.exe
   Function: FUN_004cb780
   Address: 004cb780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cb780(int param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((*(int *)(param_1 + 0xbc8) == 0) ||
     (iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = _DAT_00000000;
    if (*(int *)(param_1 + 0xbc8) != 0) {
      piVar4 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      iVar3 = *piVar4;
    }
  }
  bVar2 = false;
  if ((param_2 < 0) || (iVar3 <= param_2)) {
    param_2 = iVar3 + -1;
  }
  iVar6 = *(int *)(param_1 + 0xcc0);
  iVar5 = param_2;
  if (((iVar6 < 0) || (iVar3 <= iVar6)) || (iVar5 = iVar6, iVar7 = param_2, iVar6 <= param_2)) {
    iVar6 = iVar5;
    iVar7 = iVar5;
  }
  if (param_2 <= iVar6) {
    param_2 = iVar6;
  }
  iVar6 = iVar7;
  if ((param_3 == 0) && (iVar6 = 0, 0 < iVar7)) {
    do {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 8) + iVar6 * 4);
      uVar1 = *(uint *)(iVar5 + 0x10);
      if ((uVar1 & 0x10) != 0) {
        bVar2 = true;
      }
      iVar6 = iVar6 + 1;
      *(uint *)(iVar5 + 0x10) = uVar1 & 0xffffffef;
    } while (iVar6 < iVar7);
  }
  for (; iVar6 <= param_2; iVar6 = iVar6 + 1) {
    if (*(int *)(param_1 + 0xbc8) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 8) + iVar6 * 4);
    uVar1 = *(uint *)(iVar5 + 0x10);
    if ((uVar1 & 0x10) == 0) {
      bVar2 = true;
    }
    *(uint *)(iVar5 + 0x10) = uVar1 | 0x10;
  }
  if (param_3 == 0) {
    for (; iVar6 < iVar3; iVar6 = iVar6 + 1) {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar5 = *(int *)(*(int *)(iVar5 + 8) + iVar6 * 4);
      uVar1 = *(uint *)(iVar5 + 0x10);
      if ((uVar1 & 0x10) != 0) {
        bVar2 = true;
      }
      *(uint *)(iVar5 + 0x10) = uVar1 & 0xffffffef;
    }
  }
  if (((bVar2) && (DAT_0064767c = DAT_0064767c | 0x20, param_1 != -0x364)) &&
     (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
    InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x36c),0);
  }
  return;
}


