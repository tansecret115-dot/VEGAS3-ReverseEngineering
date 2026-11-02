/* Module: mp3plug.dll
   Function: FUN_5f713490
   Address: 5f713490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f713490(void *this,int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_5f713550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_5f713ea0(this,param_1);
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_5f74d020;
  FUN_5f715860((undefined4 *)((int)this + 0x2c));
  local_8 = 1;
  FUN_5f714050((int)this);
  *(undefined4 *)((int)this + 0x90) = 0x81010001;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  ExceptionList = local_10;
  return this;
}


