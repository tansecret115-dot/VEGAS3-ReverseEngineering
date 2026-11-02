/* Module: mp3plug.dll
   Function: FUN_5f72a80e
   Address: 5f72a80e
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f72a80e(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_5f7397f0;
  puStack_10 = &DAT_5f72a230;
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


