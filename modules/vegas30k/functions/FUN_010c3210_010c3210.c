/* Module: vegas30k.dll
   Function: FUN_010c3210
   Address: 010c3210
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010c3210(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_0128e98c;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_0128ea68);
  puVar1 = &DAT_0128ea68;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_0128eb30);
  return 1;
}


