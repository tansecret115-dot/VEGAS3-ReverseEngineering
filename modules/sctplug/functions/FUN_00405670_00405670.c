/* Module: sctplug.dll
   Function: FUN_00405670
   Address: 00405670
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00405670(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_004325e8;
  if ((HANDLE)param_1[4] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[4]);
  }
  FUN_00405790((int)param_1);
  if (param_1[0x14] != 0) {
    param_1[0x14] = 0;
  }
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
    FUN_00406150((int)param_1);
  }
  return;
}


