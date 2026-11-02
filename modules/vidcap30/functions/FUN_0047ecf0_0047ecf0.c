/* Module: vidcap30.exe
   Function: FUN_0047ecf0
   Address: 0047ecf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047ecf0(void)

{
  HCURSOR hCursor;
  undefined4 *puVar1;
  
  hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f00);
  SetCursor(hCursor);
  puVar1 = &DAT_005c14dc;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_005c15b8);
  puVar1 = &DAT_005c15b8;
  do {
    if ((HCURSOR)*puVar1 != (HCURSOR)0x0) {
      DestroyCursor((HCURSOR)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_005c1680);
  return 1;
}


