/* Module: mcplug.dll
   Function: FUN_00404a80
   Address: 00404a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00404a80(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_00476858;
  return;
}


