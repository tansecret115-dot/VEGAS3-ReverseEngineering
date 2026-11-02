/* Module: vegas30.exe
   Function: FUN_004ca810
   Address: 004ca810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ca810(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
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
  iVar6 = 0;
  if (0 < iVar3) {
    do {
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
      iVar6 = iVar6 + 1;
      *(uint *)(iVar5 + 0x10) = uVar1 | 0x10;
    } while (iVar6 < iVar3);
    if (((bVar2) && (DAT_0064767c = DAT_0064767c | 0x20, param_1 != -0x364)) &&
       (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_1 + 0x36c),0);
    }
  }
  return;
}


