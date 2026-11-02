/* Module: rmme3260.dll
   Function: FUN_66219380
   Address: 66219380
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66219380(void *this,ushort param_1)

{
  if (param_1 < *(ushort *)((int)this + 0x5c)) {
    return (uint)param_1 * 0x15 + *(int *)((int)this + 0x5e);
  }
  return 0;
}


