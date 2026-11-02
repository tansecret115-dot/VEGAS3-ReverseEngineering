/* Module: mcplugrw.dll
   Function: FUN_00425520
   Address: 00425520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00425520(int *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    iVar1 = *param_1 + -1;
    *param_1 = iVar1;
    if (iVar1 == 0) {
      if ((LPCVOID)param_1[0xb] != (LPCVOID)0x0) {
        pvVar2 = GlobalHandle((LPCVOID)param_1[0xb]);
        GlobalUnlock(pvVar2);
        pvVar2 = GlobalHandle((LPCVOID)param_1[0xb]);
        GlobalFree(pvVar2);
      }
      (**(code **)(param_1[3] + 0x10))(param_1[2]);
      pvVar2 = GlobalHandle(param_1);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(param_1);
      GlobalFree(pvVar2);
      return 0;
    }
    return 1;
  }
  return 0x80070057;
}


