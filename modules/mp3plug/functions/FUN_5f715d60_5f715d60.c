/* Module: mp3plug.dll
   Function: FUN_5f715d60
   Address: 5f715d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f715d60(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_5f715e40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_5f74d070;
  param_1[9] = &PTR_LAB_5f74d060;
  param_1[6] = &PTR_LAB_5f74d060;
  local_8 = 0;
  FUN_5f71dff0(param_1 + 3);
  local_8 = 0xffffffff;
  FUN_5f71df90(param_1 + 1);
  ExceptionList = local_10;
  return;
}


