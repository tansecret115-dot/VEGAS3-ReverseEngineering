/* Module: erv23260.dll
   Function: FUN_63811680
   Address: 63811680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63811680(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_63818010;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_6382e6b8;
  local_4 = 4;
  FUN_63812190((int)param_1);
  FUN_638117f0();
  local_4._0_1_ = 3;
  thunk_FUN_63817a10(param_1 + 0x153);
  local_4._0_1_ = 2;
  thunk_FUN_63817a10(param_1 + 0x150);
  local_4._0_1_ = 1;
  thunk_FUN_63817a10(param_1 + 0x14b);
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_63817a10(param_1 + 0x148);
  *param_1 = &PTR_FUN_6382e3c0;
  ExceptionList = local_c;
  return;
}


