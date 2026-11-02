/* Module: rmto3260.dll
   Function: FUN_662f6540
   Address: 662f6540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_662f6540(int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_662f6840(param_1);
    operator_delete(param_1);
  }
  return;
}


