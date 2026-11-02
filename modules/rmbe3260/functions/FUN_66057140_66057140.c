/* Module: rmbe3260.dll
   Function: FUN_66057140
   Address: 66057140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_66057140(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 4) = param_4;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined ***)this = &PTR_FUN_66068ab8;
  FUN_66056fd0((int)this);
  return this;
}


