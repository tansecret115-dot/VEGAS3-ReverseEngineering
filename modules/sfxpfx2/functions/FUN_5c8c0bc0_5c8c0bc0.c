/* Module: sfxpfx2.dll
   Function: FUN_5c8c0bc0
   Address: 5c8c0bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8c0bc0(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)FUN_5c8a7030((undefined4 *)0x0,(LPCSTR)0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_5c8ea0d4;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x5c8ea1b0);
  puVar1 = &DAT_5c8ea1b0;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x5c8ea278);
  return 1;
}


