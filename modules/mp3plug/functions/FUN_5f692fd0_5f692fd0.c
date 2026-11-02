/* Module: mp3plug.dll
   Function: FUN_5f692fd0
   Address: 5f692fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f692fd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_5f72cef8;
  param_1[1] = &PTR_LAB_5f72cee8;
  FUN_5f693060((int)param_1);
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
  }
  return;
}


