/* Module: vegas30k.dll
   Function: FUN_01156170
   Address: 01156170
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01156170(byte *param_1)

{
  return (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
         (uint)param_1[3];
}


