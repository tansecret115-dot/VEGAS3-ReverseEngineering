/* Module: mp3plug.dll
   Function: FUN_5f712060
   Address: 5f712060
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f712060(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_5f712120;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_5f74cfa0;
  local_8 = 1;
  FUN_5f714850(param_1 + 0x33);
  local_8 = 0;
  FUN_5f713650(param_1 + 0xe);
  *param_1 = &PTR_LAB_5f74cf70;
  ExceptionList = local_10;
  return;
}


