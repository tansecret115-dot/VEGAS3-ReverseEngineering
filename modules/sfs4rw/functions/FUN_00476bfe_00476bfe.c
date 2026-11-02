/* Module: sfs4rw.dll
   Function: FUN_00476bfe
   Address: 00476bfe
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00476bfe(void)

{
  int in_EAX;
  undefined1 unaff_BL;
  int unaff_ESI;
  int unaff_EDI;
  float10 in_ST0;
  
  fprintf((FILE *)(in_EAX + 0x40),"gamma=%f\n",(double)in_ST0);
  if (((*(byte *)(unaff_EDI + 8) & 4) != 0) &&
     ((((((float)_DAT_004a0430 < ABS(*(float *)(unaff_EDI + 0x71) - _DAT_004a0438) ||
         ((float)_DAT_004a0430 < ABS(*(float *)(unaff_EDI + 0x75) - _DAT_004a042c))) ||
        ((float)_DAT_004a0430 < ABS(*(float *)(unaff_EDI + 0x79) - _DAT_004a0428))) ||
       (((float)_DAT_004a0430 < ABS(*(float *)(unaff_EDI + 0x7d) - _DAT_004a0424) ||
        ((float)_DAT_004a0430 < ABS(*(float *)(unaff_EDI + 0x81) - _DAT_004a0420))))) ||
      (((float)_DAT_004a0430 < ABS(*(float *)(unaff_EDI + 0x85) - _DAT_004a041c) ||
       (((float)_DAT_004a0430 < ABS(*(float *)(unaff_EDI + 0x89) - _DAT_004a0418) ||
        ((float)_DAT_004a0430 < ABS(*(float *)(unaff_EDI + 0x8d) - _DAT_004a0414))))))))) {
    FUN_00475b00(unaff_ESI,"Ignoring incorrect cHRM value when sRGB is also present");
  }
  FUN_0044da70(unaff_ESI,unaff_EDI,unaff_BL);
  return;
}


