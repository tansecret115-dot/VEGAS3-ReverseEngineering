/* Module: rmto3260.dll
   Function: FUN_662f2bd0
   Address: 662f2bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662f2bd0(void *this,ushort param_1)

{
  undefined4 in_EAX;
  
  return (CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1) & 0xffff00ff) * 0x100 +
         CONCAT22((short)((uint)this >> 0x10),param_1 >> 8);
}


