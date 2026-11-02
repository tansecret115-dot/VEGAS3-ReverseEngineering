/* Module: extmondrv.dll
   Function: FUN_00426e20
   Address: 00426e20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00426e20(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_0045bd60 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_0045ac80)(&DAT_0045bd6c);
  uVar3 = FUN_00426cb0((uint *)&DAT_0045bd64);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_0045ac80)(&DAT_0045bd6c);
    uVar3 = FUN_00426cb0((uint *)&DAT_0045bd64);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_0045bd60 = 0;
    return 0;
  }
  DAT_0045ac5c = 0;
  _DAT_0045ac68 = 1000;
  DAT_0045ac64 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_0045ac60 = DAT_0045ac64 * 1000;
  _DAT_0045ac58 = DAT_0045ac64 * 1000000;
  return DAT_0045ac64 * 1000000;
}


