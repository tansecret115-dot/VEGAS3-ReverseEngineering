/* Module: pngu3266.dll
   Function: FUN_60600acc
   Address: 60600acc
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNDialog * __thiscall FUN_60600acc(void *this,CPNWindow *param_1)

{
  CPNDialog::CPNDialog(this,0x3e90065,param_1);
  *(undefined ***)this = &PTR_FUN_60628720;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  return this;
}


