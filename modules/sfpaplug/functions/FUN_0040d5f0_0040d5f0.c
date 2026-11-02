/* Module: sfpaplug.dll
   Function: FUN_0040d5f0
   Address: 0040d5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040d5f0(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_0044eb80;
  if ((HANDLE)param_1[4] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[4]);
  }
  FUN_0040d710((int)param_1);
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
  if (param_1[0x1f] != 0) {
    FUN_0040dec0((int)param_1);
  }
  return;
}


