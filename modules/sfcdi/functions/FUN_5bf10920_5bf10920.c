/* Module: sfcdi.dll
   Function: FUN_5bf10920
   Address: 5bf10920
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf10920(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = false;
  iVar5 = 7;
  piVar2 = param_1;
  do {
    if (*piVar2 != 0) {
      bVar1 = true;
    }
    piVar2 = piVar2 + 0x29;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (!bVar1) {
    return 0;
  }
  iVar5 = 4;
  iVar6 = 7;
  do {
    if (*param_1 != 0) {
      iVar3 = lstrlenA((LPCSTR)(param_1 + 1));
      uVar4 = iVar3 + 1;
      if ((uVar4 & 1) != 0) {
        uVar4 = iVar3 + 2;
      }
      iVar5 = iVar5 + 8 + uVar4;
    }
    param_1 = param_1 + 0x29;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return iVar5 + 8;
}


