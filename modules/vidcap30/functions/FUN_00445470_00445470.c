/* Module: vidcap30.exe
   Function: FUN_00445470
   Address: 00445470
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00445470(LPCVOID param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = *(int *)((int)param_1 + 0x24) + -1;
  *(int *)((int)param_1 + 0x24) = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_004455a0();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}


