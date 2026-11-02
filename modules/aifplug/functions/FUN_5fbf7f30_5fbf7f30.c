/* Module: aifplug.dll
   Function: FUN_5fbf7f30
   Address: 5fbf7f30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5fbf7f30(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5fc0ebf8 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5fc09600)(&DAT_5fc0ec04);
  uVar3 = FUN_5fbf7dc0((uint *)&DAT_5fc0ebfc);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5fc09600)(&DAT_5fc0ec04);
    uVar3 = FUN_5fbf7dc0((uint *)&DAT_5fc0ebfc);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5fc0ebf8 = 0;
    return 0;
  }
  DAT_5fc095dc = 0;
  _DAT_5fc095e8 = 1000;
  DAT_5fc095e4 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5fc095e0 = DAT_5fc095e4 * 1000;
  _DAT_5fc095d8 = DAT_5fc095e4 * 1000000;
  return DAT_5fc095e4 * 1000000;
}


