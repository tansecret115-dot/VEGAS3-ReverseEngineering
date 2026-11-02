/* Module: rmbe3260.dll
   Function: FUN_66009770
   Address: 66009770
   Source: Ghidra pseudocode (Stage 10 batch) */


CPNDialog * __thiscall FUN_66009770(void *this,CPNWindow *param_1,undefined4 param_2)

{
  CPNDialog::CPNDialog(this,0x5dd008f,param_1);
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd0) = param_2;
  CPNButton::CPNButton((CPNButton *)((int)this + 0xd8));
  CPNButton::CPNButton((CPNButton *)((int)this + 0x1d3));
  CPNCheckButton::CPNCheckButton((CPNCheckButton *)((int)this + 0x2ce));
  *(undefined ***)this = &PTR_FUN_66063e68;
  return this;
}


