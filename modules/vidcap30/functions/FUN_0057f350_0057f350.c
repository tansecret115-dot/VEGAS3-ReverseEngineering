/* Module: vidcap30.exe
   Function: FUN_0057f350
   Address: 0057f350
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057f350(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_005a5da4;
  param_1[3] = &PTR_LAB_005a5d5c;
  param_1[4] = &PTR_LAB_005a5d48;
  param_1[0x28] = &PTR_LAB_005a5d38;
  if ((HANDLE)param_1[0x2f] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x2f]);
  }
  if ((HANDLE)param_1[0x30] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x30]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x29));
  FUN_0057d600();
  return;
}


