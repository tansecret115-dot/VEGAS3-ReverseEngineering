/* Module: pncrt.dll
   Function: FUN_78007a80
   Address: 78007a80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78007a80(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_78036a18;
  pcStack_10 = except_handler3;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_78007d00(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}


