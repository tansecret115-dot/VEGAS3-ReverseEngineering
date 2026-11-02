/* Module: aviplug.dll
   Function: FUN_5f947430
   Address: 5f947430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f947430(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_FUN_5f9d7fdc;
  param_1[0x66] = &PTR_LAB_5f9d7f94;
  if ((HANDLE)param_1[0x84] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x84]);
  }
  if ((LPCVOID)param_1[0x72] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x72]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x72]);
    GlobalFree(pvVar1);
    param_1[0x72] = 0;
  }
  FUN_5f948de0((int)param_1);
  FUN_5f943730(param_1);
  return;
}


