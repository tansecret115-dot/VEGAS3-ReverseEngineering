/* Module: vegas30.exe
   Function: FUN_0047ec00
   Address: 0047ec00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047ec00(int param_1,int param_2)

{
  int *piVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = **(int **)(param_1 + 0x18);
  }
  iVar5 = 0;
  if (local_4 < 1) {
    return 0;
  }
  do {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    if ((iVar5 < 0) || (iVar4 + -1 < iVar5)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(piVar1[2] + iVar5 * 4);
    }
    if ((iVar4 != 0) && ((param_2 < 0 || (param_2 == *(int *)(iVar4 + 0x10))))) {
      if (*(LPCVOID *)(iVar4 + 8) != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle(*(LPCVOID *)(iVar4 + 8));
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle(*(LPCVOID *)(iVar4 + 8));
        GlobalFree(pvVar2);
        *(undefined4 *)(iVar4 + 8) = 0;
      }
      pvVar2 = GlobalAlloc(0x40,**(int **)(iVar4 + 0x30) + 4);
      pvVar3 = GlobalLock(pvVar2);
      *(LPVOID *)(iVar4 + 8) = pvVar3;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < local_4);
  return 0;
}


