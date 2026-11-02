/* Module: pngu3266.dll
   Function: CPNCheckedListbox
   Address: 60603d32
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNCheckedListbox::CPNCheckedListbox(void) */

CPNCheckedListbox * __thiscall CPNCheckedListbox::CPNCheckedListbox(CPNCheckedListbox *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
                    /* 0x13d32  25  ??0CPNCheckedListbox@@QAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined ***)this = &_vftable_;
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_6061a0c0(puVar1);
  }
  *(undefined4 *)(this + 0xc0) = uVar2;
  return this;
}


