/* Module: sfcd.cdd
   Function: FUN_00425070
   Address: 00425070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00425070(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_004422f0 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_004414e0)(&DAT_004422fc);
  uVar3 = FUN_00424f00((uint *)&DAT_004422f4);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_004414e0)(&DAT_004422fc);
    uVar3 = FUN_00424f00((uint *)&DAT_004422f4);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_004422f0 = 0;
    return 0;
  }
  DAT_004414bc = 0;
  _DAT_004414c8 = 1000;
  DAT_004414c4 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_004414c0 = DAT_004414c4 * 1000;
  _DAT_004414b8 = DAT_004414c4 * 1000000;
  return DAT_004414c4 * 1000000;
}


