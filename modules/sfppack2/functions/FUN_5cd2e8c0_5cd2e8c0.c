/* Module: sfppack2.dll
   Function: FUN_5cd2e8c0
   Address: 5cd2e8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd2e8c0(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)FUN_5cd070c0((undefined4 *)0x0,(LPCSTR)0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_5cd688dc;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x5cd689b8);
  puVar1 = &DAT_5cd689b8;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x5cd68a80);
  return 1;
}


