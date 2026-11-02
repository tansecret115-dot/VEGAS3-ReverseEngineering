/* Module: sfppack2.dll
   Function: FUN_5ccdfad0
   Address: 5ccdfad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ccdfad0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cd520c0;
  FUN_5cce0030((int)param_1);
  if (param_1[0x22] != 0) {
    param_1[0x20] = 1;
    SetEvent((HANDLE)param_1[0x21]);
    WaitForSingleObject((HANDLE)param_1[0x22],10000);
    CloseHandle((HANDLE)param_1[0x22]);
    param_1[0x22] = 0;
  }
  if ((HANDLE)param_1[0x21] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x21]);
    param_1[0x21] = 0;
  }
  if ((HANDLE)param_1[0x41] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x41]);
    param_1[0x41] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}


