/* Module: mcplug.dll
   Function: FUN_00401400
   Address: 00401400
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00401400(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_004764d0;
  return;
}


