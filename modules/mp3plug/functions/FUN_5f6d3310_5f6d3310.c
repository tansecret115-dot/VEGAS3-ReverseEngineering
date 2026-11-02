/* Module: mp3plug.dll
   Function: FUN_5f6d3310
   Address: 5f6d3310
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __cdecl FUN_5f6d3310(undefined4 param_1,uint param_2,undefined4 param_3)

{
  void *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_5f6d33d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = (void *)FUN_5f681b80(0x28);
  if (this == (void *)0x0) {
    this = (void *)0x0;
  }
  else {
    local_8 = 0;
    FUN_5f6d33e0(this,param_1,param_2,param_3);
  }
  ExceptionList = local_10;
  return this;
}


