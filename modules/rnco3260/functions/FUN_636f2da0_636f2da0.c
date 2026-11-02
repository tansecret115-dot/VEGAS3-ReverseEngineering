/* Module: rnco3260.dll
   Function: FUN_636f2da0
   Address: 636f2da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_636f2da0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_636f2bc0(this);
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined ***)this = &PTR_FUN_63765158;
  return this;
}


