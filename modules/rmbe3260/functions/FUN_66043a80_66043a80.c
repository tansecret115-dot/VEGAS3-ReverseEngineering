/* Module: rmbe3260.dll
   Function: FUN_66043a80
   Address: 66043a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_66043a80(int *param_1)

{
  if (param_1 != (int *)0x0) {
    FUN_66043e80(param_1);
    operator_delete(param_1);
  }
  return;
}


