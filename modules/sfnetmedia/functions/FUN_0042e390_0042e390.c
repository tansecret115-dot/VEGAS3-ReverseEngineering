/* Module: sfnetmedia.dll
   Function: FUN_0042e390
   Address: 0042e390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042e390(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_00447220 == 0) {
    return 0;
  }
  uVar1 = (*(code *)PTR_FUN_00440340)(&DAT_0044722c);
  uVar3 = FUN_0042e220((uint *)&DAT_00447224);
  iVar2 = (int)uVar3;
  if (uVar1 < 500) {
    Sleep(500 - uVar1);
    uVar1 = (*(code *)PTR_FUN_00440340)(&DAT_0044722c);
    uVar3 = FUN_0042e220((uint *)&DAT_00447224);
    iVar2 = (int)uVar3;
  }
  if (uVar1 < 0x1c2) {
    DAT_00447220 = 0;
    return 0;
  }
  DAT_0044031c = 0;
  _DAT_00440328 = 1000;
  DAT_00440324 = ((uVar1 * 0x7d & 0x1fffffff) * 4 + iVar2) / (uVar1 * 1000);
  DAT_00440320 = DAT_00440324 * 1000;
  _DAT_00440318 = DAT_00440324 * 1000000;
  return DAT_00440324 * 1000000;
}


