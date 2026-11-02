/* Module: encn3260.dll
   Function: FUN_664c4520
   Address: 664c4520
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c4520(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664df9e0;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  FUN_664bc010(param_1);
  return;
}


