/* Module: stl2plg.dll
   Function: FUN_00450740
   Address: 00450740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00450740(byte *param_1)

{
  undefined4 in_EAX;
  
  return CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)*param_1) * 0x100 +
         CONCAT22((short)((uint)param_1 >> 0x10),(ushort)param_1[1]);
}


