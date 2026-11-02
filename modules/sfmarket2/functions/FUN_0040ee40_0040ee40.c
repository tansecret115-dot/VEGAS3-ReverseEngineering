/* Module: sfmarket2.dll
   Function: FUN_0040ee40
   Address: 0040ee40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040ee40(int ***param_1)

{
  LPCVOID pMem;
  int *piVar1;
  int iVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  uint unaff_EDI;
  int ***pppiVar5;
  int ***pppiVar6;
  int **ppiStack_18;
  int *local_8;
  undefined4 local_4;
  
  ppiStack_18 = &local_8;
  local_8 = (int *)0x0;
  local_4 = 0;
  pppiVar6 = param_1;
  iVar2 = (*(code *)(*param_1)[3])(param_1,&local_4,4);
  if (-1 < iVar2) {
    if (ppiStack_18 == (int **)0x4) {
      pvVar3 = GlobalAlloc(0x40,(unaff_EDI & 0xfffffffe) + 2);
      pvVar4 = GlobalLock(pvVar3);
      piVar1 = local_8;
      *local_8 = (int)pvVar4;
      if (pvVar4 == (LPVOID)0x0) {
        return -0x7ff8fff2;
      }
      pppiVar5 = &ppiStack_18;
      ppiStack_18 = (int **)0x0;
      iVar2 = (*(code *)(*param_1)[3])(param_1,pvVar4,unaff_EDI);
      if (-1 < iVar2) {
        if (pppiVar5 == pppiVar6) {
          *(undefined2 *)(*piVar1 + ((uint)pppiVar6 & 0xfffffffe)) = 0;
          return iVar2;
        }
        iVar2 = -0x7ffb1fc8;
      }
      pMem = (LPCVOID)*piVar1;
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
      *piVar1 = 0;
      return iVar2;
    }
    iVar2 = -0x7ffb1fc8;
  }
  return iVar2;
}


