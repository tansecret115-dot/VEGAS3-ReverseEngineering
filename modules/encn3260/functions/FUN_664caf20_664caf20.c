/* Module: encn3260.dll
   Function: FUN_664caf20
   Address: 664caf20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664caf20(undefined4 *param_1)

{
  FUN_664ca960((int)param_1);
  if (((param_1[9] == 0) && (param_1[6] == 0)) && (param_1[8] == 0)) {
    FUN_664cb140(param_1);
    DestroyWindow((HWND)param_1[1]);
    if (param_1 != (undefined4 *)0x0) {
      FUN_664cae20((int)param_1);
      operator_delete(param_1);
    }
  }
  return 1;
}


