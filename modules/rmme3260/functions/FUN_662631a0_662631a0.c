/* Module: rmme3260.dll
   Function: FUN_662631a0
   Address: 662631a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662631a0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    FUN_66263540((void *)*param_1);
    *param_1 = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
    param_1[1] = 0;
  }
  return;
}


