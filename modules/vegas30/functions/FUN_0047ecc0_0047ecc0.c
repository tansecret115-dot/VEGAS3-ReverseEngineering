/* Module: vegas30.exe
   Function: FUN_0047ecc0
   Address: 0047ecc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047ecc0(int param_1,int param_2)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  if (*(int **)(param_1 + 0x18) == (int *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = **(int **)(param_1 + 0x18);
  }
  iVar4 = 0;
  if (local_4 < 1) {
    return 0;
  }
  do {
    piVar1 = *(int **)(param_1 + 0x18);
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if ((iVar4 < 0) || (iVar3 + -1 < iVar4)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(piVar1[2] + iVar4 * 4);
    }
    if ((iVar3 != 0) &&
       (((param_2 < 0 || (param_2 == *(int *)(iVar3 + 0x10))) &&
        (*(LPCVOID *)(iVar3 + 8) != (LPCVOID)0x0)))) {
      pvVar2 = GlobalHandle(*(LPCVOID *)(iVar3 + 8));
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(*(LPCVOID *)(iVar3 + 8));
      GlobalFree(pvVar2);
      *(undefined4 *)(iVar3 + 8) = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < local_4);
  return 0;
}


