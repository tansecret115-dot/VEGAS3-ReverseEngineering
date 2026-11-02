/* Module: mcplugrw.dll
   Function: FUN_00419270
   Address: 00419270
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __fastcall FUN_00419270(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004191c0(param_1);
  if (uVar1 != param_1[10]) {
    return false;
  }
  if (param_1[1] != 0) {
    return true;
  }
  uVar1 = FUN_00419240((int)param_1);
  return uVar1 == param_1[4];
}


