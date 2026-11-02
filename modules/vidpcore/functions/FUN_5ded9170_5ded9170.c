/* Module: vidpcore.dll
   Function: FUN_5ded9170
   Address: 5ded9170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ded9170(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)FUN_5deb7930(0,0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_5dfc3b84;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_5dfc3c60);
  puVar1 = &DAT_5dfc3c60;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_5dfc3d28);
  return 1;
}


