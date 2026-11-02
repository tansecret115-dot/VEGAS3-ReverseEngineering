/* Module: rmbe3260.dll
   Function: FUN_6604d7a0
   Address: 6604d7a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6604d7a0(void)

{
  ushort uVar1;
  
  DAT_660753b0 = DAT_660753b0 + -1;
  if ((DAT_660753a0 == 1) && (DAT_660753b0 == 0)) {
    DAT_660753a0 = 0;
    if (DAT_660753a4 != 0) {
      free((void *)DAT_660753a4);
      DAT_660753a4 = 0;
    }
    if (DAT_660753bc != 0) {
      free((void *)DAT_660753bc);
      DAT_660753bc = 0;
    }
    if (DAT_660753c0 != 0) {
      free((void *)DAT_660753c0);
      DAT_660753c0 = 0;
    }
    if (DAT_660753a8 != 0) {
      free((void *)DAT_660753a8);
      DAT_660753a8 = 0;
    }
    if (DAT_660753ac != 0) {
      free((void *)DAT_660753ac);
      DAT_660753ac = 0;
    }
    if (DAT_66075390 != 0) {
      uVar1 = 0;
      if (DAT_6607533c != 0) {
        do {
          free(*(void **)(DAT_660753b8 + (uint)uVar1 * 4));
          uVar1 = uVar1 + 1;
        } while (uVar1 < DAT_6607533c);
      }
      free((void *)DAT_660753b8);
      DAT_660753b8 = 0;
      free(DAT_660753b4);
      DAT_660753b4 = (void *)0x0;
    }
  }
  return;
}


