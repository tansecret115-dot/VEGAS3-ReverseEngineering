/* Module: vegas30k.dll
   Function: FUN_01040500
   Address: 01040500
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01040500(LPCVOID param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = *(int *)((int)param_1 + 8) + -1;
  *(int *)((int)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (LPCVOID)0x0) {
      FUN_0103caa0();
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}


