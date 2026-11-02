/* Module: oggplug.dll
   Function: FUN_004012e0
   Address: 004012e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004012e0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_004473a4;
  return;
}


