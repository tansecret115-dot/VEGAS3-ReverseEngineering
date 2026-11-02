/* Module: vidpcore.dll
   Function: FUN_5de95fe0
   Address: 5de95fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de95fe0(int param_1)

{
  return param_1 + 0x10 + (uint)(*(ushort *)(param_1 + 6) >> 1) * 6;
}


