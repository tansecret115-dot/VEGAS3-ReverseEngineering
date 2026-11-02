/* Module: stl2plg.dll
   Function: FUN_0042b250
   Address: 0042b250
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042b250(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_004788f8 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_00472370)(&DAT_00478904);
  uVar3 = FUN_0042b0e0((uint *)&DAT_004788fc);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_00472370)(&DAT_00478904);
    uVar3 = FUN_0042b0e0((uint *)&DAT_004788fc);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_004788f8 = 0;
    return 0;
  }
  DAT_0047234c = 0;
  _DAT_00472358 = 1000;
  DAT_00472354 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_00472350 = DAT_00472354 * 1000;
  _DAT_00472348 = DAT_00472354 * 1000000;
  return DAT_00472354 * 1000000;
}


