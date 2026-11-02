/* Module: rmme3260.dll
   Function: FUN_6625f300
   Address: 6625f300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6625f300(undefined4 *param_1)

{
  FUN_6625ed40((int)param_1);
  if (((param_1[9] == 0) && (param_1[6] == 0)) && (param_1[8] == 0)) {
    FUN_6625f520(param_1);
    DestroyWindow((HWND)param_1[1]);
    if (param_1 != (undefined4 *)0x0) {
      FUN_6625f200((int)param_1);
      operator_delete(param_1);
    }
  }
  return 1;
}


