/* Module: encn3260.dll
   Function: thunk_FUN_664bbcb0
   Address: 664bbcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall thunk_FUN_664bbcb0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    FUN_664bdb90((undefined4 *)param_1[4]);
    param_1[4] = 0;
  }
  return;
}


