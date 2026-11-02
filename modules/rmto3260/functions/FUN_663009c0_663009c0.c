/* Module: rmto3260.dll
   Function: FUN_663009c0
   Address: 663009c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_663009c0(void)

{
  ushort uVar1;
  
  DAT_66311e10 = DAT_66311e10 + -1;
  if ((DAT_66311e00 == 1) && (DAT_66311e10 == 0)) {
    DAT_66311e00 = 0;
    if (DAT_66311e04 != 0) {
      free((void *)DAT_66311e04);
      DAT_66311e04 = 0;
    }
    if (DAT_66311e1c != 0) {
      free((void *)DAT_66311e1c);
      DAT_66311e1c = 0;
    }
    if (DAT_66311e20 != 0) {
      free((void *)DAT_66311e20);
      DAT_66311e20 = 0;
    }
    if (DAT_66311e08 != 0) {
      free((void *)DAT_66311e08);
      DAT_66311e08 = 0;
    }
    if (DAT_66311e0c != 0) {
      free((void *)DAT_66311e0c);
      DAT_66311e0c = 0;
    }
    if (DAT_66311df0 != 0) {
      uVar1 = 0;
      if (DAT_66311d9c != 0) {
        do {
          free(*(void **)(DAT_66311e18 + (uint)uVar1 * 4));
          uVar1 = uVar1 + 1;
        } while (uVar1 < DAT_66311d9c);
      }
      free((void *)DAT_66311e18);
      DAT_66311e18 = 0;
      free(DAT_66311e14);
      DAT_66311e14 = (void *)0x0;
    }
  }
  return;
}


