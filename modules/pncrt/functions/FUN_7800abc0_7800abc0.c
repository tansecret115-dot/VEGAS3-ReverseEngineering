/* Module: pncrt.dll
   Function: FUN_7800abc0
   Address: 7800abc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_7800abc0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_78036e50;
  pcStack_10 = except_handler3;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  ExceptionList = local_14;
  return;
}


