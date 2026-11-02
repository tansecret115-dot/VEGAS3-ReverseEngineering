/* Module: erv23260.dll
   Function: FUN_637faed0
   Address: 637faed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_637faed0(void *this,int param_1)

{
  FUN_637fd360(this,param_1,4);
  if (*(int *)((int)this + 0x60) != 0) {
    *(char *)((int)this + 0x57) = (char)param_1 + -1;
  }
  return;
}


