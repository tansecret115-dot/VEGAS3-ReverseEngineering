/* Module: vegas30.exe
   Function: FUN_0040c090
   Address: 0040c090
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040c090(HWND param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  int local_8;
  
  iVar3 = DAT_0064762c;
  iVar5 = 0;
  if (DAT_0064762c == 0) {
    return 0;
  }
  local_8 = 0;
  iVar1 = **(int **)(DAT_0064762c + 200);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar3 + 200) + 8) + iVar5 * 4);
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


