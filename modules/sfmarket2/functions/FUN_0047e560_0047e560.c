/* Module: sfmarket2.dll
   Function: FUN_0047e560
   Address: 0047e560
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047e560(byte *param_1)

{
  undefined4 in_EAX;
  
  return CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)*param_1) * 0x100 +
         CONCAT22((short)((uint)param_1 >> 0x10),(ushort)param_1[1]);
}


