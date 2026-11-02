/* Module: vegas30.exe
   Function: FUN_0042d480
   Address: 0042d480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042d480(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  iVar1 = param_1[1] + -1;
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &PTR_LAB_00610724;
      FUN_004527f0(param_1[2]);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
    }
    iVar1 = 0;
  }
  return iVar1;
}


