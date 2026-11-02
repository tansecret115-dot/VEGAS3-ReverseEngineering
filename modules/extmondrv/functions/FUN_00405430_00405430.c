/* Module: extmondrv.dll
   Function: FUN_00405430
   Address: 00405430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00405430(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined ***)this = &PTR_LAB_0044d99c;
  return;
}


