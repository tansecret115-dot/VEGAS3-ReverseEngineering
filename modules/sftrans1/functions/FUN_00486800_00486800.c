/* Module: sftrans1.dll
   Function: FUN_00486800
   Address: 00486800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00486800(int param_1,int param_2)

{
  LPCVOID pMem;
  LPCVOID pvVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  
  if ((-1 < param_2) && (piVar4 = (int *)(param_1 + 0xac), param_2 < **(int **)(param_1 + 0xac) + 3)
     ) {
    if (2 >= param_2) {
      piVar4 = (int *)(param_1 + 0xa8);
    }
    iVar2 = FUN_00486990(param_2);
    if (-1 < iVar2) {
      pMem = *(LPCVOID *)(*(int *)(*piVar4 + 8) + iVar2 * 4);
      FUN_004dc400(*piVar4,iVar2,1,1);
      if (*(HGDIOBJ *)((int)pMem + 0x14) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)((int)pMem + 0x14));
      }
      if (*(HGDIOBJ *)((int)pMem + 8) != (HGDIOBJ)0x0) {
        DeleteObject(*(HGDIOBJ *)((int)pMem + 8));
      }
      pvVar1 = *(LPCVOID *)((int)pMem + 4);
      if (pvVar1 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pvVar1);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pvVar1);
        GlobalFree(pvVar3);
      }
      pvVar1 = *(LPCVOID *)((int)pMem + 0x10);
      if (pvVar1 != (LPCVOID)0x0) {
        pvVar3 = GlobalHandle(pvVar1);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pvVar1);
        GlobalFree(pvVar3);
      }
      pvVar3 = GlobalHandle(pMem);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(pMem);
      GlobalFree(pvVar3);
      if (2 < param_2) {
        *(uint *)(param_1 + 0x128) = (uint)(**(int **)(param_1 + 0xac) != 0);
      }
      return 1;
    }
  }
  return 0;
}


