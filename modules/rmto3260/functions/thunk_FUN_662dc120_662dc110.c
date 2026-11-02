/* Module: rmto3260.dll
   Function: thunk_FUN_662dc120
   Address: 662dc110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall thunk_FUN_662dc120(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


