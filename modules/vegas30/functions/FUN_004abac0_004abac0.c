/* Module: vegas30.exe
   Function: FUN_004abac0
   Address: 004abac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004abac0(int *param_1)

{
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar2 = *(int *)(*param_1 + 8);
    uVar5 = 0;
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        if (((uVar5 < *(uint *)(*param_1 + 8)) && (iVar1 = *param_1 + 0x70 + iVar4, iVar1 != 0)) &&
           (*(LPCVOID *)(iVar1 + 4) != (LPCVOID)0x0)) {
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar1 + 4));
          GlobalUnlock(pvVar3);
          pvVar3 = GlobalHandle(*(LPCVOID *)(iVar1 + 4));
          GlobalFree(pvVar3);
        }
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x68;
      } while ((int)uVar5 < iVar2);
    }
    pvVar3 = GlobalHandle((LPCVOID)*param_1);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle((LPCVOID)*param_1);
    GlobalFree(pvVar3);
    *param_1 = 0;
  }
  return;
}


