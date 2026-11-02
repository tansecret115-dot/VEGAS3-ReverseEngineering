/* Module: sfpaplug.dll
   Function: FUN_00442f70
   Address: 00442f70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00442f70(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_00461660 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_0045be70)(&DAT_0046166c);
  uVar3 = FUN_00442e00((uint *)&DAT_00461664);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_0045be70)(&DAT_0046166c);
    uVar3 = FUN_00442e00((uint *)&DAT_00461664);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_00461660 = 0;
    return 0;
  }
  DAT_0045be4c = 0;
  _DAT_0045be58 = 1000;
  DAT_0045be54 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_0045be50 = DAT_0045be54 * 1000;
  _DAT_0045be48 = DAT_0045be54 * 1000000;
  return DAT_0045be54 * 1000000;
}


