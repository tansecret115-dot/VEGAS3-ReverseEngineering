/* Module: mcplugrw.dll
   Function: FUN_0047af80
   Address: 0047af80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047af80(int param_1)

{
  if (*(code **)(param_1 + 0x13e) != (code *)0x0) {
    (**(code **)(param_1 + 0x13e))(param_1);
  }
  return;
}


