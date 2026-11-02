/* Module: wmfplug2.dll
   Function: FUN_0044b810
   Address: 0044b810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044b810(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)FUN_0041fbb0((undefined4 *)0x0,(LPCSTR)0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_0048f184;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_0048f260);
  puVar1 = &DAT_0048f260;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_0048f328);
  return 1;
}


