/* Module: sftrans1.dll
   Function: FUN_00508e80
   Address: 00508e80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00508e80(void)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_005fc6a0 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_005764f0)(&DAT_005fc6ac);
  iVar2 = FUN_00508d10(&DAT_005fc6a4);
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_005764f0)(&DAT_005fc6ac);
    iVar2 = FUN_00508d10(&DAT_005fc6a4);
  }
  if (uVar1 < 0x1c2) {
    DAT_005fc6a0 = 0;
    return 0;
  }
  DAT_005764cc = 0;
  _DAT_005764d8 = 1000;
  DAT_005764d4 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_005764d0 = DAT_005764d4 * 1000;
  _DAT_005764c8 = DAT_005764d4 * 1000000;
  return DAT_005764d4 * 1000000;
}


