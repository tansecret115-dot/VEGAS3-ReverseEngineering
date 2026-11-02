/* Module: mp3plug.dll
   Function: FUN_5f715c60
   Address: 5f715c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f715c60(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_5f715d50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_5f74d070;
  FUN_5f71df70(param_1 + 1);
  local_8 = 0;
  FUN_5f71dfd0(param_1 + 3,param_1 + 1);
  param_1[6] = &PTR_LAB_5f74d060;
  param_1[7] = 1;
  param_1[8] = 0;
  param_1[9] = &PTR_LAB_5f74d060;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_10;
  return param_1;
}


