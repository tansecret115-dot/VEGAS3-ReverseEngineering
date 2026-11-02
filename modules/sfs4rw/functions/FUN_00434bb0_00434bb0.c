/* Module: sfs4rw.dll
   Function: FUN_00434bb0
   Address: 00434bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00434bb0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0049c07c;
  FUN_0043cdc0((int)param_1);
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0;
  }
  return;
}


