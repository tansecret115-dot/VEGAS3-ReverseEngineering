/* Module: sfppack2.dll
   Function: FUN_5cd2e3d0
   Address: 5cd2e3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5cd2e3d0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5cd68878 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5cd63690)(&DAT_5cd68884);
  uVar3 = FUN_5cd2e260((uint *)&DAT_5cd6887c);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5cd63690)(&DAT_5cd68884);
    uVar3 = FUN_5cd2e260((uint *)&DAT_5cd6887c);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5cd68878 = 0;
    return 0;
  }
  DAT_5cd6366c = 0;
  _DAT_5cd63678 = 1000;
  DAT_5cd63674 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5cd63670 = DAT_5cd63674 * 1000;
  _DAT_5cd63668 = DAT_5cd63674 * 1000000;
  return DAT_5cd63674 * 1000000;
}


