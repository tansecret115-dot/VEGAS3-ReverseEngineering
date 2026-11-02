/* Module: sfmarket2.dll
   Function: FUN_00441fb0
   Address: 00441fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00441fb0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_004b01f8 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_004a8340)(&DAT_004b0204);
  uVar3 = FUN_00441e40((uint *)&DAT_004b01fc);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_004a8340)(&DAT_004b0204);
    uVar3 = FUN_00441e40((uint *)&DAT_004b01fc);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_004b01f8 = 0;
    return 0;
  }
  DAT_004a831c = 0;
  _DAT_004a8328 = 1000;
  DAT_004a8324 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_004a8320 = DAT_004a8324 * 1000;
  _DAT_004a8318 = DAT_004a8324 * 1000000;
  return DAT_004a8324 * 1000000;
}


