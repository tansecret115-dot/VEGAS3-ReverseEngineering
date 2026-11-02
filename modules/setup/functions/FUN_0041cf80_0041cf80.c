/* Module: Setup.exe
   Function: FUN_0041cf80
   Address: 0041cf80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0041cf80(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_FUN_0043974c;
  FUN_0041cff0((int)this);
  *(undefined4 *)((int)this + 0x10) = param_1;
  FUN_0041cfd0((int)this);
  return this;
}


