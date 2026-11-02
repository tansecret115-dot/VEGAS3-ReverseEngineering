/* Module: erv23260.dll
   Function: FUN_637fd320
   Address: 637fd320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fd320(void *this,uint param_1)

{
  *(uint *)((int)this + 4) = *(int *)((int)this + 4) + (param_1 >> 3);
  *(uint *)((int)this + 0xc) = param_1 & 7;
  return;
}


