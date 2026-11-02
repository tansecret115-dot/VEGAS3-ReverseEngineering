/* Module: sfppack1.dll
   Function: FUN_5cdf5940
   Address: 5cdf5940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdf5940(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)FUN_5cddbdb0((undefined4 *)0x0,&DAT_00007f00);
  SetCursor(hCursor);
  puVar1 = &DAT_5ce24504;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x5ce245e0);
  puVar1 = &DAT_5ce245e0;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x5ce246a8);
  return 1;
}


