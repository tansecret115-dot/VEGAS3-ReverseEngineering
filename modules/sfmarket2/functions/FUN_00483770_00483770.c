/* Module: sfmarket2.dll
   Function: FUN_00483770
   Address: 00483770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00483770(int param_1)

{
  if (*(code **)(param_1 + 0x13e) != (code *)0x0) {
    (**(code **)(param_1 + 0x13e))(param_1);
  }
  return;
}


