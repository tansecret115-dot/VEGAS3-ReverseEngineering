/* Module: ednt3260.dll
   Function: FUN_630f40b0
   Address: 630f40b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_630f40b0(void *this,undefined4 param_1,short param_2)

{
  if (*(short *)((int)this + 0x1e) != 0) {
    FUN_630f4810(*(double **)((int)this + 0x868),1,*(double **)((int)this + 0x868),1,
                 (double *)(param_2 * 0x60 + 0x13bc + (int)this),
                 (double *)(&DAT_63100e28 + (*(short *)((int)this + 0x28) + -3) * 0x78),3,0x100);
  }
  return;
}


