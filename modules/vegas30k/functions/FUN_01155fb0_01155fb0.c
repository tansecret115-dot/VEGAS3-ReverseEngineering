/* Module: vegas30k.dll
   Function: FUN_01155fb0
   Address: 01155fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01155fb0(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_1,param_2);
    return;
  }
  FUN_01156110(param_1,param_2);
  return;
}


