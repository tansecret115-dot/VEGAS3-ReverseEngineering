/* Module: rmbe3260.dll
   Function: FUN_6604d2a0
   Address: 6604d2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6604d2a0(void)

{
  DAT_66075334 = DAT_66075334 + -1;
  if ((DAT_66075330 != 0) && (DAT_66075334 == 0)) {
    free((void *)DAT_66075330);
    DAT_66075330 = 0;
  }
  FUN_6604d7a0();
  return;
}


