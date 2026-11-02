/* Module: oggplug.dll
   Function: FUN_00408a70
   Address: 00408a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408a70(int *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (int *)0x0) {
      FUN_004073e0(param_1);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}


