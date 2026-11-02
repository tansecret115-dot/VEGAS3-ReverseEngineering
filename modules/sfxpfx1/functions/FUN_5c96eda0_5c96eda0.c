/* Module: sfxpfx1.dll
   Function: FUN_5c96eda0
   Address: 5c96eda0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5c96eda0(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_5c999418 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5c997e78)(&DAT_5c999424);
  uVar3 = FUN_5c96ec30((uint *)&DAT_5c99941c);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5c997e78)(&DAT_5c999424);
    uVar3 = FUN_5c96ec30((uint *)&DAT_5c99941c);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_5c999418 = 0;
    return 0;
  }
  DAT_5c997e54 = 0;
  _DAT_5c997e60 = 1000;
  DAT_5c997e5c = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5c997e58 = DAT_5c997e5c * 1000;
  _DAT_5c997e50 = DAT_5c997e5c * 1000000;
  return DAT_5c997e5c * 1000000;
}


