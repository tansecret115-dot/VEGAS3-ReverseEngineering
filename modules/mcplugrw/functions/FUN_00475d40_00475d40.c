/* Module: mcplugrw.dll
   Function: FUN_00475d40
   Address: 00475d40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00475d40(byte *param_1)

{
  return (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
         (uint)param_1[3];
}


