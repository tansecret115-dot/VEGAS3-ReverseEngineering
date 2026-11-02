/* Module: vidcap30.exe
   Function: FUN_00549570
   Address: 00549570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00549570(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_1,param_2);
    return;
  }
  FUN_005496d0(param_1,param_2);
  return;
}


