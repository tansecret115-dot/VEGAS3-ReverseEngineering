/* Module: vidcap30.exe
   Function: FUN_00583ce0
   Address: 00583ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00583ce0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00584bef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_005a6320;
  param_1[0x15] = &PTR_LAB_005a627c;
  param_1[0x16] = &PTR_LAB_005a6268;
  param_1[0x12] = &PTR_FUN_005a62c4;
  local_4 = 1;
  FUN_00583a10(param_1);
  local_4 = local_4 & 0xffffff00;
  FUN_0057d600();
  local_4 = 0xffffffff;
  FUN_005826a0();
  ExceptionList = local_c;
  return;
}


