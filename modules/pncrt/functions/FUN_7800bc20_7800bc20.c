/* Module: pncrt.dll
   Function: FUN_7800bc20
   Address: 7800bc20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_7800bc20(void)

{
  uint *puVar1;
  uint uVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  DAT_780421d4 = 0;
  DAT_780421d8 = 0;
  DAT_780421dc = 0;
  DAT_780421e0 = 0;
  DAT_780421e4 = 0;
  DAT_780421e8 = 0;
  puVar1 = &__pioinfo;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      free((void *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x78042840);
  return;
}


