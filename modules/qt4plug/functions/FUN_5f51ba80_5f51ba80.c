/* Module: qt4plug.dll
   Function: FUN_5f51ba80
   Address: 5f51ba80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f51ba80(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_5f5968e0;
  param_1[1] = &PTR_LAB_5f5968d0;
  FUN_5f51bb90((int)param_1);
  if ((LPCVOID)param_1[0x70] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x70]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x70]);
    GlobalFree(pvVar1);
    param_1[0x70] = 0;
  }
  if ((LPCVOID)param_1[0x72] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x72]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x72]);
    GlobalFree(pvVar1);
    param_1[0x72] = 0;
  }
  if ((LPCVOID)param_1[0x71] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x71]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x71]);
    GlobalFree(pvVar1);
    param_1[0x71] = 0;
  }
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
  }
  return;
}


