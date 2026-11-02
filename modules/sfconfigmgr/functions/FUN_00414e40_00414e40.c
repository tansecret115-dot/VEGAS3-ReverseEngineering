/* Module: sfconfigmgr.dll
   Function: FUN_00414e40
   Address: 00414e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00414e40(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_00428398 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_00422e90)(&DAT_004283a4);
  uVar3 = FUN_00414cd0((uint *)&DAT_0042839c);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_00422e90)(&DAT_004283a4);
    uVar3 = FUN_00414cd0((uint *)&DAT_0042839c);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_00428398 = 0;
    return 0;
  }
  DAT_00422e6c = 0;
  _DAT_00422e78 = 1000;
  DAT_00422e74 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_00422e70 = DAT_00422e74 * 1000;
  _DAT_00422e68 = DAT_00422e74 * 1000000;
  return DAT_00422e74 * 1000000;
}


