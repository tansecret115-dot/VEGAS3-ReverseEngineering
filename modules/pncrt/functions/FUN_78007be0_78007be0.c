/* Module: pncrt.dll
   Function: FUN_78007be0
   Address: 78007be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78007be0(void)

{
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_78036a40;
  pcStack_10 = except_handler3;
  pvStack_14 = ExceptionList;
  if (PTR_terminate_7803d054 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_terminate_7803d054)();
    return;
  }
  local_8 = 0xffffffff;
  ExceptionList = &pvStack_14;
                    /* WARNING: Subroutine does not return */
  terminate();
}


