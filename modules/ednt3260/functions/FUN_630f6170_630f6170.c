/* Module: ednt3260.dll
   Function: FUN_630f6170
   Address: 630f6170
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f6170(void *this,short param_1)

{
  if (param_1 != 0) {
    FUN_630f3b20((double *)((int)this + 0x52f6),0x40);
    FUN_630f3b20((double *)((int)this + 0x56f6),0x40);
    return;
  }
  FUN_630f3b20((double *)((int)this + 0x52f6),0x80);
  return;
}


