/* Module: vidcap30.exe
   Function: FUN_00404b90
   Address: 00404b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00404b90(HWND param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  int local_8;
  
  iVar3 = DAT_005ba4c0;
  iVar5 = 0;
  if (DAT_005ba4c0 == 0) {
    return 0;
  }
  local_8 = 0;
  iVar1 = **(int **)(DAT_005ba4c0 + 0xa4);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar3 + 0xa4) + 8) + iVar5 * 4);
      if (((*(HWND *)(iVar2 + 8) == param_1) ||
          (BVar4 = IsChild(*(HWND *)(iVar2 + 8),param_1), BVar4 != 0)) &&
         (local_8 = iVar2, (*(byte *)(iVar2 + 0xc) & 0x40) == 0)) {
        return iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return local_8;
}


