/* Module: sfxpfx1.dll
   Function: FUN_5c96f290
   Address: 5c96f290
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c96f290(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)FUN_5c955700((undefined4 *)0x0,(LPCSTR)0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_5c99947c;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x5c999558);
  puVar1 = &DAT_5c999558;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x5c999620);
  return 1;
}


