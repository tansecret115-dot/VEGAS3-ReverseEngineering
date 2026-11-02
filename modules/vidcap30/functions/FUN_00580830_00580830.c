/* Module: vidcap30.exe
   Function: FUN_00580830
   Address: 00580830
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00580830(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00584958;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_005a5e38;
  param_1[3] = &PTR_LAB_005a5e0c;
  local_4 = 0;
  FUN_00580310(param_1 + 3);
  FUN_005807e0();
  local_4 = 0xffffffff;
  FUN_0057fda0();
  ExceptionList = local_c;
  return;
}


