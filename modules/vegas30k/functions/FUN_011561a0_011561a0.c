/* Module: vegas30k.dll
   Function: FUN_011561a0
   Address: 011561a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011561a0(byte *param_1)

{
  undefined4 in_EAX;
  
  return CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)*param_1) * 0x100 +
         CONCAT22((short)((uint)param_1 >> 0x10),(ushort)param_1[1]);
}


