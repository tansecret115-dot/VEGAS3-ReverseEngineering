/* Module: g2plug.dll
   Function: FUN_5f83fe50
   Address: 5f83fe50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f83fe50(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)FUN_5f8173f0((undefined4 *)0x0,(LPCSTR)0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_5f877f64;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_5f878040);
  puVar1 = &DAT_5f878040;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_5f878108);
  return 1;
}


