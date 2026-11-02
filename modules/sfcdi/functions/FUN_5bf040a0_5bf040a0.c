/* Module: sfcdi.dll
   Function: FUN_5bf040a0
   Address: 5bf040a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf040a0(int *param_1)

{
  HGLOBAL pvVar1;
  
  if (*param_1 != 0) {
    param_1[0xc] = 1;
    FUN_5bf2c120(param_1 + 0x1d,param_1 + 0xf);
    WaitForSingleObject((HANDLE)*param_1,360000);
    CloseHandle((HANDLE)*param_1);
    if ((LPCVOID)param_1[0x34] != (LPCVOID)0x0) {
      pvVar1 = GlobalHandle((LPCVOID)param_1[0x34]);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)param_1[0x34]);
      GlobalFree(pvVar1);
    }
  }
  return;
}


