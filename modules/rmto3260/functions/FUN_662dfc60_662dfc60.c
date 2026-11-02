/* Module: rmto3260.dll
   Function: FUN_662dfc60
   Address: 662dfc60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662dfc60(void *this,ushort param_1)

{
  if (param_1 < *(ushort *)((int)this + 0x5c)) {
    return (uint)param_1 * 0x15 + *(int *)((int)this + 0x5e);
  }
  return 0;
}


