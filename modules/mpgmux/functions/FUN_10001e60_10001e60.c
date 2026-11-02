/* Module: mpgmux.dll
   Function: FUN_10001e60
   Address: 10001e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10001e60(undefined *param_1)

{
  if (*(int *)(param_1 + 0x34) != 0) {
    (**(code **)(param_1 + 0x1c))(param_1,0);
  }
  FUN_1000c3f0(param_1);
  return;
}


