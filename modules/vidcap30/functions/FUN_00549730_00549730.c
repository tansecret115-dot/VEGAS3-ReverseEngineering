/* Module: vidcap30.exe
   Function: FUN_00549730
   Address: 00549730
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00549730(byte *param_1)

{
  return (((uint)*param_1 * 0x100 + (uint)param_1[1]) * 0x100 + (uint)param_1[2]) * 0x100 +
         (uint)param_1[3];
}


