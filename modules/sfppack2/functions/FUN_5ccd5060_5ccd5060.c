/* Module: sfppack2.dll
   Function: FUN_5ccd5060
   Address: 5ccd5060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ccd5060(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cd51528;
  FUN_5ccd5600((int)param_1);
  if (param_1[0xc1] != 0) {
    param_1[0xc4] = 1;
    SetEvent((HANDLE)param_1[0xc2]);
    WaitForSingleObject((HANDLE)param_1[0xc1],5000);
    CloseHandle((HANDLE)param_1[0xc1]);
    param_1[0xc1] = 0;
  }
  if ((HANDLE)param_1[0xc2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0xc2]);
    param_1[0xc2] = 0;
  }
  if ((HANDLE)param_1[0x208] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x208]);
    param_1[0x208] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}


