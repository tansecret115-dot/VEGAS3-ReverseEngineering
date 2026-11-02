/* Module: sfpublish.dll
   Function: FUN_0042e8a0
   Address: 0042e8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042e8a0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_00447120 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_00440268)(&DAT_0044712c);
  uVar3 = FUN_0042e730((uint *)&DAT_00447124);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_00440268)(&DAT_0044712c);
    uVar3 = FUN_0042e730((uint *)&DAT_00447124);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_00447120 = 0;
    return 0;
  }
  DAT_00440244 = 0;
  _DAT_00440250 = 1000;
  DAT_0044024c = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_00440248 = DAT_0044024c * 1000;
  _DAT_00440240 = DAT_0044024c * 1000000;
  return DAT_0044024c * 1000000;
}


