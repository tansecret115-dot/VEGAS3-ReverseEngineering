/* Module: rmme3260.dll
   Function: FUN_66213c60
   Address: 66213c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66213c60(void *this,undefined4 param_1,undefined4 param_2)

{
  if (*(int *)((int)this + 0x3c0) != 0) {
    return 0x80040009;
  }
  *(undefined4 *)((int)this + 0x3c4) = param_1;
  *(undefined4 *)((int)this + 0x3c8) = param_2;
  FUN_66213ca0(this);
  return 0;
}


