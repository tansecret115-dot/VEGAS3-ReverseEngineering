/* Module: rmme3260.dll
   Function: FUN_66213f80
   Address: 66213f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66213f80(void *this,undefined4 param_1,undefined4 *param_2)

{
  if (*(int *)((int)this + 0x3b0) != 0) {
    return 0x80040009;
  }
  *(undefined4 *)((int)this + 0x3b4) = param_1;
  *param_2 = param_1;
  FUN_66213fb0(this);
  return 0;
}


