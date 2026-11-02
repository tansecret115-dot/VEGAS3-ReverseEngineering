/* Module: extmondrv.dll
   Function: FUN_00404d40
   Address: 00404d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00404d40(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_0044d894;
  return;
}


