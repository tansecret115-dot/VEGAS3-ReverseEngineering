/* Module: mp3plug.dll
   Function: FUN_5f714600
   Address: 5f714600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f714600(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_5f714670;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_5f74d040;
  local_8 = 0xffffffff;
  FUN_5f715d60(param_1);
  ExceptionList = local_10;
  return;
}


