/* Module: vidpcore.dll
   Function: FUN_5de95fa0
   Address: 5de95fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5de95fa0(int param_1)

{
  return param_1 + 0x10 + (*(ushort *)(param_1 + 6) & 0xfffffffe);
}


