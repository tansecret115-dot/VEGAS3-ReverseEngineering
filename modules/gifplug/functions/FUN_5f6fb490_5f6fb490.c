/* Module: gifplug.dll
   Function: FUN_5f6fb490
   Address: 5f6fb490
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5f6fb490(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5f7311f0 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5f70be50)(&DAT_5f7311fc);
  uVar3 = FUN_5f6fb320((uint *)&DAT_5f7311f4);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5f70be50)(&DAT_5f7311fc);
    uVar3 = FUN_5f6fb320((uint *)&DAT_5f7311f4);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5f7311f0 = 0;
    return 0;
  }
  DAT_5f70be2c = 0;
  _DAT_5f70be38 = 1000;
  DAT_5f70be34 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5f70be30 = DAT_5f70be34 * 1000;
  _DAT_5f70be28 = DAT_5f70be34 * 1000000;
  return DAT_5f70be34 * 1000000;
}


