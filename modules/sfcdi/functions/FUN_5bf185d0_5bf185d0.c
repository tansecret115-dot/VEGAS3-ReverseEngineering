/* Module: sfcdi.dll
   Function: FUN_5bf185d0
   Address: 5bf185d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf185d0(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &PTR_LAB_5bf56234;
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x52));
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}


