/* Module: mp3plug.dll
   Function: FUN_5f713650
   Address: 5f713650
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f713650(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_5f7136f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_5f74d020;
  local_8 = 0;
  FUN_5f715890(param_1 + 0xb);
  local_8 = 0xffffffff;
  FUN_5f714020(param_1);
  ExceptionList = local_10;
  return;
}


