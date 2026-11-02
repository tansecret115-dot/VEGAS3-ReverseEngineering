/* Module: sftrans1.dll
   Function: FUN_00544630
   Address: 00544630
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00544630(int param_1)

{
  return param_1 + 0x10 + (*(ushort *)(param_1 + 6) & 0xfffffffe);
}


