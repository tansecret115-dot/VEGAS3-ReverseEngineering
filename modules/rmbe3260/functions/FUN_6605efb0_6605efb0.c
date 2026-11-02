/* Module: rmbe3260.dll
   Function: FUN_6605efb0
   Address: 6605efb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6605efb0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    FUN_6605c7d0((undefined4 *)param_1[4]);
    param_1[4] = 0;
  }
  return;
}


