/* Module: erv23260.dll
   Function: FUN_637faf00
   Address: 637faf00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637faf00(void *this,int param_1)

{
  FUN_637fd360(this,param_1,4);
  if (*(int *)((int)this + 0x60) != 0) {
    *(char *)((int)this + 0x58) = (char)param_1 + -1;
  }
  return;
}


