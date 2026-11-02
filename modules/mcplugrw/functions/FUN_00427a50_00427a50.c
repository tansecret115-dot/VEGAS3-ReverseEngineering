/* Module: mcplugrw.dll
   Function: FUN_00427a50
   Address: 00427a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00427a50(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_004a9ba0 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_004a64a8)(&DAT_004a9bac);
  uVar3 = FUN_004278e0((uint *)&DAT_004a9ba4);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_004a64a8)(&DAT_004a9bac);
    uVar3 = FUN_004278e0((uint *)&DAT_004a9ba4);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_004a9ba0 = 0;
    return 0;
  }
  DAT_004a6484 = 0;
  _DAT_004a6490 = 1000;
  DAT_004a648c = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_004a6488 = DAT_004a648c * 1000;
  _DAT_004a6480 = DAT_004a648c * 1000000;
  return DAT_004a648c * 1000000;
}


