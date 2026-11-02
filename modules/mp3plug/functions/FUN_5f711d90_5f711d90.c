/* Module: mp3plug.dll
   Function: FUN_5f711d90
   Address: 5f711d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5f711d90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_5f711ee0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = &PTR_LAB_5f74cf70;
  local_8 = 0;
  *(undefined ***)this = &PTR_LAB_5f74cfa0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_5f713490((void *)((int)this + 0x38),0x2000);
  local_8 = 1;
  FUN_5f7146a0((void *)((int)this + 0xcc),(int)this + 0x38,param_1,param_2,param_3);
  local_8 = 2;
  *(undefined4 *)((int)this + 0xca30) = param_1;
  *(undefined4 *)((int)this + 0xca34) = param_2;
  *(undefined4 *)((int)this + 0xca38) = param_3;
  FUN_5f712134((int)this);
  ExceptionList = local_10;
  return this;
}


