/* Module: mcplugrw.dll
   Function: FUN_004108e0
   Address: 004108e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __fastcall FUN_004108e0(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*param_1 == 0) {
    return in_EAX & 0xffff0000;
  }
  uVar1 = FUN_00419480(*param_1);
  return CONCAT22((short)(uVar1 >> 0x10),(short)param_1[499]) & uVar1;
}


