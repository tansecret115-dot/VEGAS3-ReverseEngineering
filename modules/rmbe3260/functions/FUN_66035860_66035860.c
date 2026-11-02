/* Module: rmbe3260.dll
   Function: FUN_66035860
   Address: 66035860
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66035860(void *this,ushort param_1)

{
  if (param_1 < *(ushort *)((int)this + 0x5c)) {
    return (uint)param_1 * 0x15 + *(int *)((int)this + 0x5e);
  }
  return 0;
}


