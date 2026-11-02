/* Module: vegas30.exe
   Function: FUN_00476580
   Address: 00476580
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00476580(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_0064bee0;
  do {
    if ((HGDIOBJ)*puVar1 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_0064bf44);
  return;
}


