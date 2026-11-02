/* Module: encn3260.dll
   Function: FUN_664d7ad0
   Address: 664d7ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_664d7ad0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 4) = param_4;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined ***)this = &PTR_FUN_664e0078;
  FUN_664d7970((int)this);
  return this;
}


