/* Module: mp3plug.dll
   Function: FUN_5f6bfff0
   Address: 5f6bfff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f6bfff0(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)FUN_5f69dea0((undefined4 *)0x0,(LPCSTR)0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_5f7527d4;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_5f7528b0);
  puVar1 = &DAT_5f7528b0;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_5f752978);
  return 1;
}


