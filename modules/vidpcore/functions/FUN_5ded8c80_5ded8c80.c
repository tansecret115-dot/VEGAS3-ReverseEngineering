/* Module: vidpcore.dll
   Function: FUN_5ded8c80
   Address: 5ded8c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5ded8c80(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_5dfc3b20 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_5df3e850)(&DAT_5dfc3b2c);
  iVar2 = FUN_5ded8b10(&DAT_5dfc3b24);
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_5df3e850)(&DAT_5dfc3b2c);
    iVar2 = FUN_5ded8b10(&DAT_5dfc3b24);
  }
  if (uVar1 < 0x1c2) {
    DAT_5dfc3b20 = 0;
    return 0;
  }
  DAT_5df3e82c = 0;
  _DAT_5df3e838 = 1000;
  DAT_5df3e834 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_5df3e830 = DAT_5df3e834 * 1000;
  _DAT_5df3e828 = DAT_5df3e834 * 1000000;
  return DAT_5df3e834 * 1000000;
}


