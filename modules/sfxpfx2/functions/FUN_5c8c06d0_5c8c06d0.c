/* Module: sfxpfx2.dll
   Function: FUN_5c8c06d0
   Address: 5c8c06d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5c8c06d0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5c8ea070 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5c8e8ab0)(&DAT_5c8ea07c);
  uVar3 = FUN_5c8c0560((uint *)&DAT_5c8ea074);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5c8e8ab0)(&DAT_5c8ea07c);
    uVar3 = FUN_5c8c0560((uint *)&DAT_5c8ea074);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5c8ea070 = 0;
    return 0;
  }
  DAT_5c8e8a8c = 0;
  _DAT_5c8e8a98 = 1000;
  DAT_5c8e8a94 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5c8e8a90 = DAT_5c8e8a94 * 1000;
  _DAT_5c8e8a88 = DAT_5c8e8a94 * 1000000;
  return DAT_5c8e8a94 * 1000000;
}


