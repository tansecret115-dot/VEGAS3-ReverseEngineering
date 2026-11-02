/* Module: mcplugrw.dll
   Function: FUN_00478920
   Address: 00478920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00478920(int *param_1,byte *param_2,uint param_3)

{
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    FUN_0044c550((int)param_1,param_2,param_3);
    FUN_0047af50(param_1,param_2,param_3);
  }
  return;
}


