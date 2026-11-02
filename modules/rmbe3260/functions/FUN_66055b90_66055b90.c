/* Module: rmbe3260.dll
   Function: FUN_66055b90
   Address: 66055b90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66055b90(void *this,ushort param_1)

{
  undefined4 in_EAX;
  
  return (CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1) & 0xffff00ff) * 0x100 +
         CONCAT22((short)((uint)this >> 0x10),param_1 >> 8);
}


