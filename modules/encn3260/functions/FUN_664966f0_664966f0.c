/* Module: encn3260.dll
   Function: FUN_664966f0
   Address: 664966f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_664966f0(void *this,uint param_1)

{
  *(uint *)((int)this + 0x5a) = param_1;
  if (*(uint *)((int)this + 0x5e) < param_1) {
    *(uint *)((int)this + 0x5e) = param_1;
  }
  return;
}


