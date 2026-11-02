/* Module: vegas30k.dll
   Function: FUN_011a5d90
   Address: 011a5d90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011a5d90(undefined4 param_1,int *param_2,undefined4 param_3)

{
  HGLOBAL pvVar1;
  LPVOID pvVar2;
  undefined4 *pMem;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar3 = 4;
  bVar6 = true;
  piVar4 = param_2;
  piVar5 = &DAT_011dab80;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar6 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar6);
  if (!bVar6) {
    iVar3 = 4;
    bVar6 = true;
    piVar4 = param_2;
    piVar5 = &DAT_011d9c70;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (!bVar6) {
      return -0x7fffbffe;
    }
  }
  iVar3 = -0x7ff8fff2;
  pvVar1 = GlobalAlloc(0x40,0x38);
  pvVar2 = GlobalLock(pvVar1);
  if (pvVar2 != (LPVOID)0x0) {
    pMem = (undefined4 *)FUN_011a3fd0();
    if (pMem != (undefined4 *)0x0) {
      iVar3 = FUN_011a4da0();
      if (-1 < iVar3) {
        iVar3 = (**(code **)*pMem)(pMem,param_2,param_3);
        return iVar3;
      }
      FUN_011a4000();
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
    }
  }
  return iVar3;
}


