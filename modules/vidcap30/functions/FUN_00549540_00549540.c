/* Module: vidcap30.exe
   Function: FUN_00549540
   Address: 00549540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00549540(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))(param_1,param_2);
  }
  FUN_005496a0(param_1,param_2);
  return;
}


