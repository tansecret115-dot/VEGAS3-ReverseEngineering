/* Module: sftrans1.dll
   Function: FUN_00505bd0
   Address: 00505bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00505bd0(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)FUN_004c93c0(0,0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_005fc4f4;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_005fc5d0);
  puVar1 = &DAT_005fc5d0;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_005fc698);
  return 1;
}


