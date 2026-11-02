/* Module: sfmarket2.dll
   Function: FUN_0047e370
   Address: 0047e370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e370(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_1,param_2);
    return;
  }
  FUN_0047e4d0(param_1,param_2);
  return;
}


