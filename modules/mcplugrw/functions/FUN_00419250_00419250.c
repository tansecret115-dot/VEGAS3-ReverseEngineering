/* Module: mcplugrw.dll
   Function: FUN_00419250
   Address: 00419250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00419250(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] == 0) {
    uVar1 = FUN_00419240((int)param_1);
    param_1[4] = uVar1;
  }
  uVar1 = FUN_004191c0(param_1);
  param_1[10] = uVar1;
  return;
}


