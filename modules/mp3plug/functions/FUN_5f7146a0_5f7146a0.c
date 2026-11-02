/* Module: mp3plug.dll
   Function: FUN_5f7146a0
   Address: 5f7146a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5f7146a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_5f714840;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_5f715c60(this);
  *(undefined ***)this = &PTR_LAB_5f74d040;
  local_8 = 1;
  FUN_5f716630((void *)((int)this + 0x30),(int)this + 0x861c,param_2);
  local_8 = 2;
  FUN_5f717330((void *)((int)this + 0x1310),(int)this + 0x861c,param_2,param_3,param_4);
  local_8 = 3;
  FUN_5f719d70((int)this + 0x2324);
  local_8 = 4;
  *(undefined4 *)((int)this + 0x8640) = param_1;
  FUN_5f713f50((void *)((int)this + 0x8644),(int)this + 0xc164,0x800,'\0');
  local_8 = 5;
  *(undefined4 *)((int)this + 0xc158) = param_2;
  *(undefined4 *)((int)this + 0xc15c) = param_3;
  *(undefined4 *)((int)this + 0xc160) = param_4;
  FUN_5f7156e0(this,'\x01');
  ExceptionList = local_10;
  return this;
}


