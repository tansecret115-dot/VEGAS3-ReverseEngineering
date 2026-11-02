/* Module: encn3260.dll
   Function: FUN_664d5c50
   Address: 664d5c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664d5c50(void *this,int param_1)

{
  *(int *)this = param_1 / 1000;
  *(int *)((int)this + 4) = (param_1 % 1000) * 1000;
  FUN_664d5be0(this);
  return;
}


