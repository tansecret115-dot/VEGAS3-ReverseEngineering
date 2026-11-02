/* Module: sfcdi.dll
   Function: FUN_5bf08c60
   Address: 5bf08c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf08c60(LPCSTR param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = lstrlenA(param_1);
  uVar2 = iVar1 - 1;
  if (-1 < (int)uVar2) {
    do {
      if (param_1[uVar2] != ' ') {
        return;
      }
      param_1[uVar2] = '\0';
      uVar2 = uVar2 - 1;
    } while (uVar2 < 0x80000000);
  }
  return;
}


