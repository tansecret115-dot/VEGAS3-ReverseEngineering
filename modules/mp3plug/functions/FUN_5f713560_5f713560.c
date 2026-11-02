/* Module: mp3plug.dll
   Function: FUN_5f713560
   Address: 5f713560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_5f713560(void *this,undefined4 param_1,int param_2,char param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_5f713640;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_5f713f50(this,param_1,param_2,param_3);
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_5f74d020;
  FUN_5f715860((undefined4 *)((int)this + 0x2c));
  *(undefined4 *)((int)this + 0x90) = 0x81010001;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  ExceptionList = local_10;
  return this;
}


