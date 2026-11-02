/* Module: sfpublish.dll
   Function: FUN_00420420
   Address: 00420420
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00420420(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0043ae1c;
  if ((HANDLE)param_1[0xc] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0xc]);
    param_1[0xc] = 0;
  }
  if ((HANDLE)param_1[0xb] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0xb]);
    param_1[0xb] = 0;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}


