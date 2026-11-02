/* Module: sfs4rw.dll
   Function: FUN_0042f990
   Address: 0042f990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042f990(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)FUN_0041e820((undefined4 *)0x0,(LPCSTR)0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_004aa314;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_004aa3f0);
  puVar1 = &DAT_004aa3f0;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_004aa4b8);
  return 1;
}


