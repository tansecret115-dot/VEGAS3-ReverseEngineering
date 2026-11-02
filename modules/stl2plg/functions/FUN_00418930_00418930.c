/* Module: stl2plg.dll
   Function: FUN_00418930
   Address: 00418930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418930(int *param_1,int param_2)

{
  if (8 < param_2) {
    FUN_0044fa30(param_1,"Too many bytes for PNG signature.");
  }
  *(byte *)(param_1 + 0x49) = (param_2 < 0) - 1U & (byte)param_2;
  return;
}


