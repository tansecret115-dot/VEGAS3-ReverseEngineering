/* Module: erv23260.dll
   Function: FUN_637fb1b0
   Address: 637fb1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637fb1b0(void *this,int param_1)

{
  FUN_637fd360(this,param_1,2);
  if (*(int *)((int)this + 0x60) != 0) {
    *(char *)((int)this + 0x56) = (char)param_1;
  }
  return;
}


