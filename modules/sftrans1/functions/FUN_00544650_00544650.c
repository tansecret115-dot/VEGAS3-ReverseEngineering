/* Module: sftrans1.dll
   Function: FUN_00544650
   Address: 00544650
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00544650(int param_1)

{
  return param_1 + 0x10 + (uint)(*(ushort *)(param_1 + 6) >> 1) * 4;
}


