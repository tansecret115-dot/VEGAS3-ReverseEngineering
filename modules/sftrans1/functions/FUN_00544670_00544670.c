/* Module: sftrans1.dll
   Function: FUN_00544670
   Address: 00544670
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00544670(int param_1)

{
  return param_1 + 0x10 + (uint)(*(ushort *)(param_1 + 6) >> 1) * 6;
}


