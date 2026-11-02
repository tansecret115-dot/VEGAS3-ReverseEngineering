/* Module: vegas30k.dll
   Function: FUN_01155f80
   Address: 01155f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01155f80(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))(param_1,param_2);
  }
  FUN_011560e0(param_1,param_2);
  return;
}


