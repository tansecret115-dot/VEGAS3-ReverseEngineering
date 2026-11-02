/* Module: vfplugs.dll
   Function: FUN_0044ef10
   Address: 0044ef10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0044ef10(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_005356b8 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_00494078)(&DAT_005356c4);
  uVar3 = FUN_0044eda0((uint *)&DAT_005356bc);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_00494078)(&DAT_005356c4);
    uVar3 = FUN_0044eda0((uint *)&DAT_005356bc);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_005356b8 = 0;
    return 0;
  }
  DAT_00494054 = 0;
  _DAT_00494060 = 1000;
  DAT_0049405c = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_00494058 = DAT_0049405c * 1000;
  _DAT_00494050 = DAT_0049405c * 1000000;
  return DAT_0049405c * 1000000;
}


