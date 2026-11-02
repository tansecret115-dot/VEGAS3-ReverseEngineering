/* Module: sftrkfx1.dll
   Function: FUN_5cbf4e42
   Address: 5cbf4e42
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbf4e42(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
  }
  return;
}


