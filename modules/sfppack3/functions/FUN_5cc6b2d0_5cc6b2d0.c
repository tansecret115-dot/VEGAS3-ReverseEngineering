/* Module: sfppack3.dll
   Function: FUN_5cc6b2d0
   Address: 5cc6b2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc6b2d0(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)FUN_5cc4d600((undefined4 *)0x0,(LPCSTR)0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_5cc98fdc;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x5cc990b8);
  puVar1 = &DAT_5cc990b8;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x5cc99180);
  return 1;
}


