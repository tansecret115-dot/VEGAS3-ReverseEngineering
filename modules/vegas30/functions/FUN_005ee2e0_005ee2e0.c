/* Module: vegas30.exe
   Function: FUN_005ee2e0
   Address: 005ee2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005ee2e0(int param_1,int *param_2)

{
  int *pMem;
  int *piVar1;
  int iVar2;
  int iVar3;
  HGLOBAL pvVar4;
  int *piVar5;
  
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  for (pMem = *(int **)(param_1 + 0x10);
      (pMem != (int *)0x0 && ((param_2 < pMem + 5 || (pMem + 0x37e < param_2))));
      pMem = (int *)*pMem) {
  }
  iVar3 = ((int)param_2 + (-0x14 - (int)pMem)) / 0x1c;
  iVar2 = (int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5;
  pMem[iVar2 + 1] = pMem[iVar2 + 1] & ~(1 << ((byte)iVar3 & 0x1f));
  *(int **)(param_1 + 0x14) = pMem;
  iVar3 = 0;
  piVar5 = pMem;
  do {
    piVar5 = piVar5 + 1;
    if (*piVar5 != 0) {
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  piVar5 = *(int **)(param_1 + 0x10);
  if (pMem == piVar5) {
    *(int *)(param_1 + 0x10) = *pMem;
  }
  else {
    for (piVar1 = (int *)*piVar5; piVar1 != pMem; piVar1 = (int *)*piVar1) {
      piVar5 = piVar1;
    }
    *piVar5 = *pMem;
  }
  if (*(int **)(param_1 + 0x14) == pMem) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  pvVar4 = GlobalHandle(pMem);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pMem);
  GlobalFree(pvVar4);
  return;
}


