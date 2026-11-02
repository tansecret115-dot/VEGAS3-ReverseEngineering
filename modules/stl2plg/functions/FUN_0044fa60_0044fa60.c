/* Module: stl2plg.dll
   Function: FUN_0044fa60
   Address: 0044fa60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044fa60(int param_1,undefined4 param_2)

{
  if (*(code **)(param_1 + 0x44) != (code *)0x0) {
    (**(code **)(param_1 + 0x44))(param_1,param_2);
    return;
  }
  FUN_0044fbc0(param_1,param_2);
  return;
}


