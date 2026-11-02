/* Module: wmfplug2.dll
   Function: FUN_0044b320
   Address: 0044b320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0044b320(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_0048f120 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_00489aa8)(&DAT_0048f12c);
  uVar3 = FUN_0044b1b0((uint *)&DAT_0048f124);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_00489aa8)(&DAT_0048f12c);
    uVar3 = FUN_0044b1b0((uint *)&DAT_0048f124);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_0048f120 = 0;
    return 0;
  }
  DAT_00489a84 = 0;
  _DAT_00489a90 = 1000;
  DAT_00489a8c = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_00489a88 = DAT_00489a8c * 1000;
  _DAT_00489a80 = DAT_00489a8c * 1000000;
  return DAT_00489a8c * 1000000;
}


