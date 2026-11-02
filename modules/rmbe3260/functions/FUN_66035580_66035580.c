/* Module: rmbe3260.dll
   Function: FUN_66035580
   Address: 66035580
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_66035580(int param_1)

{
  return *(ushort *)(param_1 + 0xf) + 0xd + (uint)*(byte *)(param_1 + 6);
}


