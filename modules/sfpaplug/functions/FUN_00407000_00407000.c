/* Module: sfpaplug.dll
   Function: FUN_00407000
   Address: 00407000
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00407000(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_0044e7e0;
  if ((HANDLE)param_1[4] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[4]);
  }
  FUN_00407140((int)param_1);
  if (param_1[0x14] != 0) {
    param_1[0x14] = 0;
  }
  if ((LPCVOID)param_1[0x15] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x15]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x15]);
    GlobalFree(pvVar1);
    param_1[0x15] = 0;
  }
  if ((LPCVOID)param_1[0x16] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x16]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x16]);
    GlobalFree(pvVar1);
    param_1[0x16] = 0;
  }
  if (param_1[0x1f] != 0) {
    FUN_00407a70((int)param_1);
  }
  FUN_004033a0((int)(param_1 + 0x50));
  return;
}


