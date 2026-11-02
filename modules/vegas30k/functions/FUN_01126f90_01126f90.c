/* Module: vegas30k.dll
   Function: FUN_01126f90
   Address: 01126f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01126f90(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(code **)(param_1 + 0x50) != (code *)0x0) {
    (**(code **)(param_1 + 0x50))(param_1,param_2,param_3);
    return;
  }
  FUN_01155f80(param_1,"Call to NULL read function");
  return;
}


