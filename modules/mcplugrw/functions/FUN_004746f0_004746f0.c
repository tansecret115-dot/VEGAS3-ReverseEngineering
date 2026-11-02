/* Module: mcplugrw.dll
   Function: FUN_004746f0
   Address: 004746f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004746f0(int *param_1)

{
  FUN_004746a0(param_1,0xd8);
  if (*(char *)((int)param_1 + 0xf9) != '\0') {
    FUN_00474730(param_1);
  }
  if (*(char *)((int)param_1 + 0xff) != '\0') {
    FUN_004747d0(param_1);
  }
  return;
}


