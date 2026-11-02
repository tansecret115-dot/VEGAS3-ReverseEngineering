/* Module: g2plug.dll
   Function: SfRealG2_Terminate
   Address: 5f806e20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall SfRealG2_Terminate(void) */

void SfRealG2_Terminate(void)

{
                    /* 0x6e20  44  ?SfRealG2_Terminate@@YGXXZ */
  DAT_5f8774a4 = ((int)(DAT_5f8774a4 - 1) < 0) - 1 & DAT_5f8774a4 - 1;
  if ((DAT_5f8774a4 == 0) && (DAT_5f87749c != (int *)0x0)) {
    if (DAT_5f8774a0 != (int *)0x0) {
      (**(code **)(*DAT_5f8774a0 + 8))(DAT_5f8774a0);
    }
    DAT_5f8774a0 = (int *)0x0;
    if (DAT_5f87749c != (int *)0x0) {
      (**(code **)(*DAT_5f87749c + 8))(DAT_5f87749c);
    }
    DAT_5f87749c = (int *)0x0;
  }
  return;
}


