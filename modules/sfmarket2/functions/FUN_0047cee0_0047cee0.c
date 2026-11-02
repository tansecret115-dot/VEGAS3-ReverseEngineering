/* Module: sfmarket2.dll
   Function: FUN_0047cee0
   Address: 0047cee0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047cee0(int *param_1)

{
  FUN_0047ce90(param_1,0xd8);
  if (*(char *)((int)param_1 + 0xf9) != '\0') {
    FUN_0047cf20(param_1);
  }
  if (*(char *)((int)param_1 + 0xff) != '\0') {
    FUN_0047cfc0(param_1);
  }
  return;
}


