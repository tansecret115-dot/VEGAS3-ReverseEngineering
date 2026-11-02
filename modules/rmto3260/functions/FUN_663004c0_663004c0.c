/* Module: rmto3260.dll
   Function: FUN_663004c0
   Address: 663004c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_663004c0(void)

{
  DAT_66311d90 = DAT_66311d90 + -1;
  if ((DAT_66311d8c != 0) && (DAT_66311d90 == 0)) {
    free((void *)DAT_66311d8c);
    DAT_66311d8c = 0;
  }
  FUN_663009c0();
  return;
}


