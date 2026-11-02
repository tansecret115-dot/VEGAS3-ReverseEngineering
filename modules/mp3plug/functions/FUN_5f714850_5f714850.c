/* Module: mp3plug.dll
   Function: FUN_5f714850
   Address: 5f714850
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f714850(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_5f714940;
  local_10 = ExceptionList;
  local_8 = 3;
  ExceptionList = &local_10;
  FUN_5f714020(param_1 + 0x2191);
  *param_1 = &PTR_LAB_5f74d040;
  local_8 = 0xffffffff;
  FUN_5f715d60(param_1);
  ExceptionList = local_10;
  return;
}


