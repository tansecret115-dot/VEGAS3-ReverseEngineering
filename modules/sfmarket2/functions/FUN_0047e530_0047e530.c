/* Module: sfmarket2.dll
   Function: FUN_0047e530
   Address: 0047e530
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047e530(byte *param_1)

{
  return (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
         (uint)param_1[3];
}


