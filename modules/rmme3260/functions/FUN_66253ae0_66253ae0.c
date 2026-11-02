/* Module: rmme3260.dll
   Function: FUN_66253ae0
   Address: 66253ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66253ae0(void *this,int param_1)

{
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)this = &PTR_FUN_6626ca78;
  FUN_66263ea0(param_1);
  return this;
}


