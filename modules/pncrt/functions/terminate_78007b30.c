/* Module: pncrt.dll
   Function: terminate
   Address: 78007b30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __cdecl terminate(void) */

void __cdecl terminate(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
                    /* 0x7b30  46  ?terminate@@YAXXZ */
  puStack_c = &DAT_78036a28;
  pcStack_10 = except_handler3;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_78009cc0();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_78009cc0();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  abort();
}


