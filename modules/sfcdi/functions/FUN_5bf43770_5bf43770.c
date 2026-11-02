/* Module: sfcdi.dll
   Function: FUN_5bf43770
   Address: 5bf43770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf43770(LPCVOID param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (LPCVOID)0x0) {
    if (*(int *)((int)param_1 + 0x4c) != -1) {
      iVar4 = 0;
      while( true ) {
        piVar1 = *(int **)((int)param_1 + 0x4c);
        if (piVar1 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar1;
        }
        if (iVar3 <= iVar4) break;
        FUN_5bf2b040(*(int **)(piVar1[1] * iVar4 + piVar1[2]));
        iVar4 = iVar4 + 1;
      }
      FUN_5bf2b040(*(int **)((int)param_1 + 0x4c));
    }
    if (*(int **)((int)param_1 + 0x14) != (int *)0x0) {
      FUN_5bf2b040(*(int **)((int)param_1 + 0x14));
    }
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return 0;
  }
  return 0;
}


