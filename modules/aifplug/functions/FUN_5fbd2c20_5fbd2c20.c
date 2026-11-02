/* Module: aifplug.dll
   Function: FUN_5fbd2c20
   Address: 5fbd2c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5fbd2c20(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_FUN_5fbff418;
  if ((HANDLE)param_1[4] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[4]);
  }
  FUN_5fbd2d20((int)param_1);
  if ((LPCVOID)param_1[0x15] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x15]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x15]);
    GlobalFree(pvVar1);
  }
  if ((LPCVOID)param_1[0x16] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x16]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x16]);
    GlobalFree(pvVar1);
  }
  return;
}


