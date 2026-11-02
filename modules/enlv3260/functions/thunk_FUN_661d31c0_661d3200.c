/* Module: enlv3260.dll
   Function: thunk_FUN_661d31c0
   Address: 661d3200
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall thunk_FUN_661d31c0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    FUN_661d37a0((undefined4 *)param_1[4]);
    param_1[4] = 0;
  }
  return;
}


