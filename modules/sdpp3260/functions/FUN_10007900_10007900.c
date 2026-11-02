/* Module: sdpp3260.dll
   Function: FUN_10007900
   Address: 10007900
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10007900(void *this,int param_1)

{
  *(int *)this = param_1 / 1000;
  *(int *)((int)this + 4) = (param_1 % 1000) * 1000;
  FUN_10007860(this);
  return;
}


