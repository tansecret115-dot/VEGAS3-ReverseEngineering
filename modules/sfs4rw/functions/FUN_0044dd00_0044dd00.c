/* Module: sfs4rw.dll
   Function: FUN_0044dd00
   Address: 0044dd00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0044dd00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0049dfdc;
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0;
  }
  return;
}


