/* Module: encn3260.dll
   Function: FUN_664948e0
   Address: 664948e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664948e0(void *this,uint param_1)

{
  *(uint *)((int)this + 4) = param_1;
  if (*(uint *)((int)this + 8) < param_1) {
    *(uint *)((int)this + 8) = param_1;
  }
  return;
}


