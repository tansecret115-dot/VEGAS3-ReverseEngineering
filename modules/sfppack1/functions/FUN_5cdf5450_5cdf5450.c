/* Module: sfppack1.dll
   Function: FUN_5cdf5450
   Address: 5cdf5450
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5cdf5450(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5ce244a0 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5ce22f08)(&DAT_5ce244ac);
  uVar3 = FUN_5cdf52e0((uint *)&DAT_5ce244a4);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5ce22f08)(&DAT_5ce244ac);
    uVar3 = FUN_5cdf52e0((uint *)&DAT_5ce244a4);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5ce244a0 = 0;
    return 0;
  }
  DAT_5ce22ee4 = 0;
  _DAT_5ce22ef0 = 1000;
  DAT_5ce22eec = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5ce22ee8 = DAT_5ce22eec * 1000;
  _DAT_5ce22ee0 = DAT_5ce22eec * 1000000;
  return DAT_5ce22eec * 1000000;
}


