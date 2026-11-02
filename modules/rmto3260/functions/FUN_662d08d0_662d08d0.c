/* Module: rmto3260.dll
   Function: FUN_662d08d0
   Address: 662d08d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662d08d0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
  }
  return;
}


