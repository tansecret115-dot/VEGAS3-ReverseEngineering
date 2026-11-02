/* Module: rmbe3260.dll
   Function: FUN_6600a740
   Address: 6600a740
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNDialog * __thiscall FUN_6600a740(void *this,CPNWindow *param_1)

{
  CPNDialog::CPNDialog(this,0x5dd00c3,param_1);
  *(undefined ***)this = &PTR_FUN_66064510;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  return this;
}


